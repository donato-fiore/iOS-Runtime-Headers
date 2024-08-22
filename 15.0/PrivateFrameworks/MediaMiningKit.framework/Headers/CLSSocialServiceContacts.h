// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSSOCIALSERVICECONTACTS_H
#define CLSSOCIALSERVICECONTACTS_H

@class CNContactStore, CNContact, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSMutableSet;
@protocol PVVisionIntegrating, SGSuggestionsServiceContactsProtocol, CLSSocialServiceContactsDelegate;


#import "CLSSocialService.h"
#import "CLSPersonIdentity.h"
#import "CLSContactCache.h"

@interface CLSSocialServiceContacts : CLSSocialService <PVVisionIntegrating>

 {
    CNContactStore *_contactStore;
    CNContact *_meContact;
    CLSPersonIdentity *_mePerson;
    NSMutableArray *_allPersons;
    NSMutableDictionary *_personsForCNIdentifiers;
    NSMutableDictionary *_personsForLocalIdentifier;
    id<SGSuggestionsServiceContactsProtocol> *_suggestionsService;
}


@property (retain, nonatomic) CLSContactCache *contactCache; // ivar: _contactCache
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CLSSocialServiceContactsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSURL *diskCacheURL;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *nonFoundFullNames; // ivar: _nonFoundFullNames
@property (retain, nonatomic) NSMutableSet *nonFoundHandles; // ivar: _nonFoundHandles
@property (retain, nonatomic) NSMutableDictionary *personByFullName; // ivar: _personByFullName
@property (retain, nonatomic) NSMutableDictionary *personByHandle; // ivar: _personByHandle
@property (readonly) Class superclass;


+(id)defaultKeysToFetch;
-(NSUInteger)_ageCategoryFromFaceAgeType:(unsigned short)arg0 ;
-(NSUInteger)_relationshipForContact:(id)arg0 ;
-(NSUInteger)_sexFromFaceBiologicalSex:(unsigned short)arg0 ;
-(float)_confidenceInPersonRecord:(id)arg0 forName:(id)arg1 components:(id)arg2 ;
-(float)_fuzzyMatchingScoreBetweenNameComponents:(id)arg0 andNameComponents:(id)arg1 ;
-(id)__newPersonWithContact:(id)arg0 ;
-(id)_allPersons;
-(id)_firstNameForPersonRecord:(id)arg0 ;
-(id)_fullNameForPersonRecord:(id)arg0 ;
-(id)_fullNameWithContact:(id)arg0 ;
-(id)_lastNameForPersonRecord:(id)arg0 ;
-(id)_maidenNameForPersonRecord:(id)arg0 ;
-(id)_nicknameForPersonRecord:(id)arg0 ;
-(id)_personResultsForPersonLocalIdentifier:(id)arg0 isLackingFaces:(*BOOL)arg1 inPhotoLibrary:(id)arg2 ;
-(id)_personResultsForfullName:(id)arg0 ;
-(id)_personWithContact:(id)arg0 createPersonIfNeeded:(BOOL)arg1 ;
-(id)_personWithContactIdentifier:(id)arg0 ;
-(id)_personsMatchingPredicate:(id)arg0 ;
-(id)contactHistoryCollector;
-(id)contactsForIdentifiers:(id)arg0 ;
-(id)enumeratorForChangeHistoryFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithProxyAtURL:(id)arg0 andIntent:(NSUInteger)arg1 ;
-(id)matchingDictionaryForContactIdentifier:(id)arg0 ;
-(id)mePerson;
-(id)personForIdentifier:(id)arg0 ;
-(id)personForPersonHandle:(id)arg0 ;
-(id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)arg0 usingPersonsModel:(id)arg1 ;
-(id)personResultsForName:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(id)potentialBirthdayDateForCNIdentifier:(id)arg0 fullName:(id)arg1 ;
-(id)suggestionsService;
-(void)_addAddressesToPerson:(id)arg0 withContact:(id)arg1 ;
-(void)configureRequest:(id)arg0 algorithmUmbrellaVersion:(unsigned int)arg1 ;
-(void)enumerateAllPersonsUsingBlock:(id)arg0 ;
-(void)enumerateHomeAddressesForPersonWithContactIdentifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePersonsAndRelationshipUsingBlock:(id)arg0 ;
-(void)enumeratePersonsForFullName:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePersonsForIdentifiers:(id)arg0 usingBlock:(id)arg1 ;
-(void)invalidateCacheForPersonWithLocalIdentifiers:(id)arg0 ;
-(void)invalidateMemoryCaches;
-(void)updateProxy;


@end


#endif