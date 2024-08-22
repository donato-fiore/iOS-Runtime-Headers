// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWINFERENCESCHEDULERCONNECTION_H
#define BWINFERENCESCHEDULERCONNECTION_H

@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BWInferenceSchedulerResourceCoordinator.h"
#import "BWInferenceSchedulerFramebuffer.h"

@interface BWInferenceSchedulerConnection : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *coordinationGroup; // ivar: _coordinationGroup
@property (readonly, nonatomic) BWInferenceSchedulerResourceCoordinator *coordinator; // ivar: _coordinator
@property (retain, nonatomic) BWInferenceSchedulerFramebuffer *framebuffer; // ivar: _framebuffer
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *inferenceQueue; // ivar: _inferenceQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *scalingQueue; // ivar: _scalingQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *submissionQueue; // ivar: _submissionQueue


-(id)init;
-(id)initWithInferenceTargetQueue:(id)arg0 scalingTargetQueue:(id)arg1 submissionTargetQueue:(id)arg2 ;
-(void)dealloc;


@end


#endif