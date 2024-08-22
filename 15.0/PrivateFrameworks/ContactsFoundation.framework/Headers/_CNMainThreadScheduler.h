// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNMAINTHREADSCHEDULER_H
#define _CNMAINTHREADSCHEDULER_H

@class NSString;
@protocol CNScheduler;

#import <Foundation/Foundation.h>


@interface _CNMainThreadScheduler : NSObject <CNScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNScheduler> *inlineScheduler; // ivar: _inlineScheduler
@property (readonly, nonatomic) NSObject<CNScheduler> *jumpToMainScheduler; // ivar: _jumpToMainScheduler
@property (readonly) Class superclass;
@property (readonly) CGFloat timestamp;


-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
// -(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 qualityOfService:(unk)arg2  ;
-(id)init;
-(id)performCancelableBlock:(id)arg0 ;
// -(id)performCancelableBlock:(id)arg0 qualityOfService:(unk)arg1  ;
-(id)schedulerForDelayedExecution;
-(id)schedulerForImmediateExecution;
-(void)performBlock:(id)arg0 ;
// -(void)performBlock:(id)arg0 qualityOfService:(unk)arg1  ;


@end


#endif