// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCCOMPANIONSYNCOUTGOINGSESSION_H
#define VCCOMPANIONSYNCOUTGOINGSESSION_H

@class NSDictionary, NSMutableArray;
@protocol VCCompanionSyncOutgoingSessionDelegate;


#import "VCCompanionSyncSession.h"

@interface VCCompanionSyncOutgoingSession : VCCompanionSyncSession

@property (weak, nonatomic) NSObject<VCCompanionSyncOutgoingSessionDelegate> *delegate;
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSMutableArray *pendingChanges; // ivar: _pendingChanges
@property (readonly, nonatomic) CGFloat progress;
@property (readonly, nonatomic) NSMutableArray *sentChanges; // ivar: _sentChanges
@property (readonly, nonatomic) NSMutableArray *syncedChanges; // ivar: _syncedChanges


+(NSInteger)direction;
-(id)initWithSYSession:(id)arg0 service:(id)arg1 syncDataHandlers:(id)arg2 changeSet:(id)arg3 metadata:(id)arg4 ;
// -(unsigned int)syncSession:(id)arg0 enqueueChanges:(id)arg1 error:(unk)arg2  ;
-(void)syncSession:(id)arg0 successfullySynced:(id)arg1 ;


@end


#endif