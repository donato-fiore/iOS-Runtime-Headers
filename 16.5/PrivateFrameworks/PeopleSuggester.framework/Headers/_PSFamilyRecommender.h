// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSFAMILYRECOMMENDER_H
#define _PSFAMILYRECOMMENDER_H

@class CNContactStore, _CDInteractionStore, HKMedicalIDStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_PSContactResolver.h"

@interface _PSFamilyRecommender : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) _PSContactResolver *contactResolver; // ivar: _contactResolver
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore
@property (retain, nonatomic) HKMedicalIDStore *medicalIDStore; // ivar: _medicalIDStore
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)regexMatchForRegex:(id)arg0 string:(id)arg1 ;
-(NSUInteger)indexToInsertDate:(id)arg0 array:(id)arg1 ;
-(id)contactIdsFromContactNamesUsingMe:(id)arg0 ;
-(id)contactIdsFromContactRelationsUsingMe:(id)arg0 ;
-(id)contactIdsFromEmergencyContacts;
-(id)contactKeysToFetch;
-(id)currentFamily;
-(id)currentFamilyExcludingMe:(id)arg0 ;
-(id)familyRecipientsForShareSheetWithPredictionContext:(id)arg0 ;
-(id)familyRecommendationSuggestionsForShareSheetWithPredictionContext:(id)arg0 ;
-(id)familyRecommendations;
-(id)fetchAllContactIdsFromContactStore:(id)arg0 ;
-(id)handleAndBundleIdDictionaryForFamilyRecipientContact:(id)arg0 lookBackDays:(NSInteger)arg1 ;
-(id)init;
-(id)nonFamilyRelations;
-(id)personRelationshipVocabularyByLocaleDictionary;
-(id)recipientFromFamilyContactId:(id)arg0 familySuggestions:(id)arg1 me:(id)arg2 currentFamilyIds:(id)arg3 ;
-(id)relationshipRegularExpressionForRelationship;
-(id)rerankFamilyRecipients:(id)arg0 usingPredictionContext:(id)arg1 ;
-(id)suggestionsForPhotosContactInferencesWithPredictionContext:(id)arg0 ;
-(id)suggestionsForPhotosRelationshipsWithPredictionContext:(id)arg0 ;
-(id)suggestionsFromRecipients:(id)arg0 ;
-(void)logFeedbackForFamilyRecommenderCallHasRecommendations:(BOOL)arg0 ;


@end


#endif