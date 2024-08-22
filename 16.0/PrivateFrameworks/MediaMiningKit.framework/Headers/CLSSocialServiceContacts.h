// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSSOCIALSERVICECONTACTS_H
#define CLSSOCIALSERVICECONTACTS_H

@class CNContactStore, CNContact, GDVisualIdentifierViewPerson, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSMutableSet;
@protocol PVVisionIntegrating, OS_os_log, GDVisualIdentifierView, SGSuggestionsServiceContactsProtocol, CLSSocialServiceContactsDelegate;


#import "CLSSocialService.h"
#import "CLSPersonIdentity.h"
#import "CLSContactCache.h"

@interface CLSSocialServiceContacts : CLSSocialService <PVVisionIntegrating>

 {
    NSObject<OS_os_log> *_log;
    CNContactStore *_contactStore;
    CNContact *_meContact;
    id<GDVisualIdentifierView> *_visualIdentifierView;
    CLSPersonIdentity *_mePerson;
    GDVisualIdentifierViewPerson *_meViewPerson;
    NSMutableArray *_allPersons;
    NSMutableDictionary *_personsForCNIdentifiers;
    NSMutableDictionary *_personsForGDIdentifiers;
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


+(BOOL)canAccessContactsStore;
+(id)classifyFaceObservation:(id)arg0 withModel:(id)arg1 error:(*id)arg2 ;
+(id)defaultKeysToFetch;
+(id)faceObservationFromFaceprintData:(id)arg0 ;
-(NSUInteger)_ageCategoryFromFaceAgeType:(unsigned short)arg0 ;
-(NSUInteger)_relationshipForContact:(id)arg0 ;
-(NSUInteger)_relationshipForLabel:(id)arg0 ;
-(NSUInteger)_sexFromFaceBiologicalSex:(unsigned short)arg0 ;
-(float)_confidenceInPersonRecord:(id)arg0 viewPerson:(id)arg1 forName:(id)arg2 components:(id)arg3 ;
-(float)_fuzzyMatchingScoreBetweenNameComponents:(id)arg0 andNameComponents:(id)arg1 ;
-(id)__newPersonWithContact:(id)arg0 viewPerson:(id)arg1 ;
-(id)_allPersons;
-(id)_cnPostalAddressForGDLocationAddress:(id)arg0 ;
-(id)_firstNameForPersonRecord:(id)arg0 ;
-(id)_fullNameWithContact:(id)arg0 ;
-(id)_initializeVisualIdentifierView;
-(id)_lastNameForPersonRecord:(id)arg0 ;
-(id)_maidenNameForPersonRecord:(id)arg0 ;
-(id)_nicknameForPersonRecord:(id)arg0 ;
-(id)_personResultsForPersonLocalIdentifier:(id)arg0 isLackingFaces:(*BOOL)arg1 inPhotoLibrary:(id)arg2 ;
-(id)_personResultsForfullName:(id)arg0 ;
-(id)_personWithContact:(id)arg0 viewPerson:(id)arg1 createPersonIfNeeded:(BOOL)arg2 ;
-(id)_personWithContactIdentifier:(id)arg0 ;
-(id)_personsMatchingPredicate:(id)arg0 ;
-(id)contactHistoryCollector;
-(id)contactsByIdentifierForIdentifiers:(id)arg0 ;
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
-(void)_addDelegateAddressesToPerson:(id)arg0 ofType:(NSUInteger)arg1 ;
-(void)_addMissingPropertiesToPerson:(id)arg0 withViewPerson:(id)arg1 ;
-(void)configureRequest:(id)arg0 algorithmUmbrellaVersion:(unsigned int)arg1 ;
-(void)enumerateAllPersonsUsingBlock:(id)arg0 ;
-(void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePersonsAndRelationshipUsingBlock:(id)arg0 ;
-(void)enumeratePersonsForFullName:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePersonsForIdentifiers:(id)arg0 usingBlock:(id)arg1 ;
-(void)invalidateCacheForPersonWithLocalIdentifiers:(id)arg0 ;
-(void)invalidateMemoryCaches;
-(void)updateProxy;


@end


#endif