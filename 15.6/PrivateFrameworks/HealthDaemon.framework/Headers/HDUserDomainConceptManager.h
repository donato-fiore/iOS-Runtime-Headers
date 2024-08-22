// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDUSERDOMAINCONCEPTMANAGER_H
#define HDUSERDOMAINCONCEPTMANAGER_H

@class HKObserverSet<HDUserDomainConceptObserver>, NSMutableArray;

#import <Foundation/Foundation.h>

#import "HDUserDomainConceptProcessingManager.h"
#import "HDProfile.h"

@interface HDUserDomainConceptManager : NSObject {
    HKObserverSet<HDUserDomainConceptObserver> *_userDomainConceptObservers;
    os_unfair_lock_s _userDomainConceptObserverLock;
    NSInteger _userDomainConceptObserverOpenTransactionsCount;
    NSMutableArray *_pendingUserDomainConceptObserverRecords;
    NSMutableArray *_transactionUserDomainConceptObserverRecords;
}


@property (readonly, nonatomic) HDUserDomainConceptProcessingManager *processingManager; // ivar: _processingManager
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile


+(BOOL)storeState:(id)arg0 keyValueDomain:(id)arg1 error:(*id)arg2 ;
+(id)countOfUserDomainConceptsMatchingPredicate:(id)arg0 includeDeletedConcepts:(BOOL)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(id)keyValueDomainWithProfile:(id)arg0 ;
+(id)predicateForAllPinnedConceptsMappingToRecordsWithUUIDs:(id)arg0 pinnedConceptUUIDs:(id)arg1 ;
+(id)predicateForListUserDomainConceptWithType:(NSUInteger)arg0 ;
+(id)stateFromKeyValueDomain:(id)arg0 error:(*id)arg1 ;
+(id)userDomainConceptEntitiesByIdentifier;
+(id)userDomainConceptSubclassEntities;
-(BOOL)deleteUserDomainConcept:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteUserDomainConcepts:(id)arg0 error:(*id)arg1 ;
-(BOOL)enumerateUserDomainConceptsWithPredicate:(id)arg0 error:(*id)arg1 enumerationHandler:(id)arg2 ;
-(BOOL)enumerateUserDomainConceptsWithPredicate:(id)arg0 includeDeletedConcepts:(BOOL)arg1 limit:(NSInteger)arg2 orderingTerms:(id)arg3 error:(*id)arg4 enumerationHandler:(id)arg5 ;
-(BOOL)enumerateUserDomainConceptsWithPredicate:(id)arg0 includeDeletedConcepts:(BOOL)arg1 limit:(NSInteger)arg2 orderingTerms:(id)arg3 transaction:(id)arg4 error:(*id)arg5 enumerationHandler:(id)arg6 ;
-(BOOL)enumerateUserDomainConceptsWithPredicate:(id)arg0 limit:(NSInteger)arg1 orderingTerms:(id)arg2 error:(*id)arg3 enumerationHandler:(id)arg4 ;
-(BOOL)modifyUserDomainConcepts:(id)arg0 method:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)modifyUserDomainConcepts:(id)arg0 method:(NSInteger)arg1 syncProvenance:(NSInteger)arg2 syncVersion:(struct ? )arg3 error:(*id)arg4 ;
-(BOOL)unitTesting_overrideMaximumPropertyType:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)unitTesting_overrideStoredAnchor:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)updateUserDomainConcept:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(id)orderingTermsForSortDescriptors:(id)arg0 error:(*id)arg1 ;
-(id)unitTesting_fetchProcessingStateWithError:(*id)arg0 ;
-(id)userDomainConceptAnalyticsWithError:(*id)arg0 ;
-(void)addUserDomainConceptObserver:(id)arg0 queue:(id)arg1 ;
-(void)closeObserverTransaction;
-(void)notifyObserversForAddedUDC:(id)arg0 transaction:(id)arg1 ;
-(void)notifyObserversForDeletedUDC:(id)arg0 transaction:(id)arg1 ;
-(void)notifyObserversForUpdatedUDC:(id)arg0 transaction:(id)arg1 ;
-(void)openObserverTransaction;
-(void)removeUserDomainConceptObserver:(id)arg0 ;


@end


#endif