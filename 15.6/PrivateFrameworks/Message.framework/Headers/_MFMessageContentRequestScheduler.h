// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFMESSAGECONTENTREQUESTSCHEDULER_H
#define _MFMESSAGECONTENTREQUESTSCHEDULER_H

@class NSString, EDMessagePersistence;
@protocol EFScheduler;

#import <Foundation/Foundation.h>


@interface _MFMessageContentRequestScheduler : NSObject <EFScheduler>

 {
    NSUInteger _requestID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (retain, nonatomic) NSObject<EFScheduler> *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;


-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
-(id)initWithScheduler:(id)arg0 messagePersistence:(id)arg1 ;
-(id)initWithScheduler:(id)arg0 requestID:(NSUInteger)arg1 messagePersistence:(id)arg2 ;
-(id)performCancelableBlock:(id)arg0 ;
-(id)performWithObject:(id)arg0 ;
-(void)performBlock:(id)arg0 ;
// -(void)performBlockWithActivity:(id)arg0 requestID:(unk)arg1  ;
-(void)performSyncBarrierBlock:(id)arg0 ;
-(void)performSyncBlock:(id)arg0 ;
-(void)performVoucherPreservingBlock:(id)arg0 ;


@end


#endif