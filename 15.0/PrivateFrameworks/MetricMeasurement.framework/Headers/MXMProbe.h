// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXMPROBE_H
#define MXMPROBE_H

@protocol OS_dispatch_semaphore, MXMProbeDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MXMSampleFilter.h"

@interface MXMProbe : NSObject {
    id *_updateHandler;
    id *_stopHandler;
    NSObject<OS_dispatch_semaphore> *_stopWaiter;
}


@property BOOL _shouldStop; // ivar: __shouldStop
@property BOOL _updating; // ivar: __updating
@property (weak, nonatomic) NSObject<MXMProbeDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) MXMSampleFilter *filter; // ivar: _filter
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // ivar: _updateQueue
@property (readonly) BOOL updating;


+(id)probe;
-(BOOL)_setupWaitSemaphore;
-(BOOL)performPreIterationActions;
-(BOOL)waitUntilStoppedWithTimeout:(CGFloat)arg0 ;
-(id)init;
-(id)sampleWithTimeout:(CGFloat)arg0 ;
-(id)sampleWithTimeout:(CGFloat)arg0 stopReason:(*NSUInteger)arg1 ;
-(void)_beginUpdates;
-(void)_handleIncomingData:(id)arg0 ;
-(void)_stopUpdates;
-(void)stopUpdates;
-(void)updateNowUntilStopped;
-(void)updateNowUntilStoppedWithUpdateHandler:(id)arg0 ;
// -(void)updateNowUntilStoppedWithUpdateHandler:(id)arg0 stopHandler:(unk)arg1  ;
-(void)updateNowUntilTimeout:(CGFloat)arg0 ;
-(void)updateNowUntilTimeout:(CGFloat)arg0 updateHandler:(id)arg1 ;
// -(void)updateNowUntilTimeout:(CGFloat)arg0 updateHandler:(id)arg1 stopHandler:(unk)arg2  ;
-(void)waitForeverUntilStopped;


@end


#endif