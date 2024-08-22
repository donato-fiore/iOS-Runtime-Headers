// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFMESSAGECONTENTREQUESTSCHEDULER_H
#define _MFMESSAGECONTENTREQUESTSCHEDULER_H

@class EDMessagePersistence, NSString;
@protocol EFScheduler;

#import <Foundation/Foundation.h>


@interface _MFMessageContentRequestScheduler : NSObject <EFScheduler>

 {
    NSUInteger _requestID;
    id<EFScheduler> *_scheduler;
    EDMessagePersistence *_messagePersistence;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
-(id)performCancelableBlock:(id)arg0 ;
-(id)performWithObject:(id)arg0 ;
-(void)performBlock:(id)arg0 ;
-(void)performSyncBarrierBlock:(id)arg0 ;
-(void)performSyncBlock:(id)arg0 ;
-(void)performVoucherPreservingBlock:(id)arg0 ;


@end


#endif