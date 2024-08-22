// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSUMMARYSHARINGENTRYMANAGER_H
#define HDSUMMARYSHARINGENTRYMANAGER_H

@class HKObserverSet, NSString;
@protocol HDAnalyticsSubmissionCoordinatorDelegate, HDProfileReadyObserver, HDSummarySharingEntryManagerDelegate;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDSummarySharingEntryManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDProfileReadyObserver>

 {
    HKObserverSet *_observerSet;
    os_unfair_lock_s _lock;
    BOOL _hasCompletedContactResolution;
    NSInteger _authorizationStatusWhenContactsResolved;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDSummarySharingEntryManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;


-(BOOL)deleteEntryWithUUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)enumerateCodableEntriesWithPredicate:(id)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(BOOL)insertOrReplaceCodableEntries:(id)arg0 ignoreIfExists:(BOOL)arg1 shouldResolveCNContact:(BOOL)arg2 syncProvenance:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)insertOrReplaceCodableEntries:(id)arg0 shouldResolveCNContact:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)resolveContactsIfNeededWithError:(*id)arg0 ;
-(BOOL)updateEntryWithInvitationUUID:(id)arg0 newNotificationStatus:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)updateEntryWithInvitationUUID:(id)arg0 newStatus:(NSInteger)arg1 dateAccepted:(id)arg2 ownerParticipant:(id)arg3 error:(*id)arg4 ;
-(BOOL)updateEntryWithUUID:(id)arg0 authorizationsToAdd:(id)arg1 authorizationsToDelete:(id)arg2 deleteOnCommit:(BOOL)arg3 error:(*id)arg4 ;
-(id)anyCodableEntryWithPredicate:(id)arg0 errorOut:(*id)arg1 ;
-(id)codableEntryWithIdentifier:(id)arg0 type:(NSInteger)arg1 direction:(NSUInteger)arg2 errorOut:(*id)arg3 ;
-(id)codableEntryWithUUID:(id)arg0 errorOut:(*id)arg1 ;
-(id)fetchAllCodableSharingEntriesWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(void)_contactStoreDidChange;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)reportDailyAnalyticsWithCoordinator:(id)arg0 completion:(id)arg1 ;


@end


#endif