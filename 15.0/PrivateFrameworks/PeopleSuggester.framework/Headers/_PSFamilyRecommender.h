// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSFAMILYRECOMMENDER_H
#define _PSFAMILYRECOMMENDER_H

@class CNContactStore, HKHealthStore, _CDInteractionStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_PSContactResolver.h"

@interface _PSFamilyRecommender : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) _PSContactResolver *contactResolver; // ivar: _contactResolver
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)regexMatchForRegex:(id)arg0 string:(id)arg1 ;
-(NSUInteger)indexToInsertDate:(id)arg0 array:(id)arg1 ;
-(id)contactIdsFromContactRelationsAndNamesUsingMe:(id)arg0 ;
-(id)contactIdsFromEmergencyContacts;
-(id)contactKeysToFetch;
-(id)currentFamily;
-(id)currentFamilyExcludingMe:(id)arg0 ;
-(id)familyRecipientsForShareSheet;
-(id)familyRecommendationSuggestionsForShareSheet;
-(id)familyRecommendations;
-(id)fetchAllContactIdsFromContactStore:(id)arg0 ;
-(id)handleAndBundleIdDictionaryForFamilyRecipientContact:(id)arg0 lookBackDays:(NSInteger)arg1 ;
-(id)init;
-(id)nonFamilyRelations;
-(id)personRelationshipVocabularyByLocaleDictionary;
-(id)relationshipRegularExpressionForRelationship;
-(void)logFeedbackForFamilyRecommenderCallHasRecommendations:(BOOL)arg0 ;


@end


#endif