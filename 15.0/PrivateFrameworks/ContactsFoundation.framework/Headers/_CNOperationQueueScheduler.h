// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNOPERATIONQUEUESCHEDULER_H
#define _CNOPERATIONQUEUESCHEDULER_H

@class NSOperationQueue, NSString;
@protocol CNScheduler;

#import <Foundation/Foundation.h>


@interface _CNOperationQueueScheduler : NSObject <CNScheduler>

 {
    NSOperationQueue *_queue;
    BOOL _isQualityOfServiceSpecified;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) CGFloat timestamp;


+(id)operationWithQualityOfService:(NSUInteger)arg0 block:(id)arg1 ;
-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
// -(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 qualityOfService:(unk)arg2  ;
-(id)blockWithCurrentQualityOfServiceForBlock:(SEL)arg0 ifAllowedForRequestedQualityOfService:(id)arg1 ;
-(id)init;
-(id)initWithMaxConcurrentOperationCount:(NSInteger)arg0 ;
-(id)initWithMaxConcurrentOperationCount:(NSInteger)arg0 qualityOfService:(NSUInteger)arg1 ;
-(id)initWithQualityOfService:(NSUInteger)arg0 ;
-(id)performCancelableBlock:(id)arg0 ;
// -(id)performCancelableBlock:(id)arg0 qualityOfService:(unk)arg1  ;
// -(void)_enqueueBlock:(id)arg0 qualityOfService:(unk)arg1  ;
-(void)performBlock:(id)arg0 ;
// -(void)performBlock:(id)arg0 qualityOfService:(unk)arg1  ;


@end


#endif