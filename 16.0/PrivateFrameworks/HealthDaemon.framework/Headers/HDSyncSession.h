// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSYNCSESSION_H
#define HDSYNCSESSION_H

@class NSCalendar, HDAssertion, NSString, NSUUID, NSDate;
@protocol HDSyncSessionDelegate, HDSyncStore;

#import <Foundation/Foundation.h>

#import "HDSyncPredicate.h"

@interface HDSyncSession : NSObject

@property (readonly, copy, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) HDAssertion *databaseAccessibilityAssertion; // ivar: _databaseAccessibilityAssertion
@property (nonatomic) CGFloat databaseAccessibilityTimeout; // ivar: _databaseAccessibilityTimeout
@property (readonly, weak, nonatomic) NSObject<HDSyncSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, copy, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (readonly, copy, nonatomic) NSString *shortSessionIdentifier; // ivar: _shortSessionIdentifier
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, copy, nonatomic) HDSyncPredicate *syncPredicate;
@property (readonly, nonatomic) NSObject<HDSyncStore> *syncStore; // ivar: _syncStore


-(BOOL)requiresSyncForChangesFromAnchorRangeMap:(id)arg0 ;
-(BOOL)shouldOverrideCycleTrackingSymptomsForBackwardsCompatibilty;
-(BOOL)syncDidBeginWithProfile:(id)arg0 error:(*id)arg1 ;
-(BOOL)transactionDidEndWithError:(*id)arg0 ;
-(NSInteger)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)arg0 ;
-(NSInteger)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)arg0 ;
-(id)description;
-(id)excludedSyncIdentities;
-(id)excludedSyncStores;
-(id)init;
-(id)initWithSyncStore:(id)arg0 reason:(id)arg1 delegate:(id)arg2 ;
-(id)newChangeWithSyncEntityClass:(Class)arg0 version:(struct ? )arg1 ;
-(void)sendChanges:(id)arg0 completion:(id)arg1 ;
-(void)syncDidFinishWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)syncWillBegin;
-(void)willSyncAnchorRanges:(id)arg0 ;


@end


#endif