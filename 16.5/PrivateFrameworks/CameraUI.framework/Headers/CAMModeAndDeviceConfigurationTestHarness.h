// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMMODEANDDEVICECONFIGURATIONTESTHARNESS_H
#define CAMMODEANDDEVICECONFIGURATIONTESTHARNESS_H

@class NSMutableArray;


#import "CAMPerformanceTestHarness.h"

@interface CAMModeAndDeviceConfigurationTestHarness : CAMPerformanceTestHarness

@property (readonly, nonatomic) NSMutableArray *_modeChangeListeners; // ivar: __modeChangeListeners


-(id)initWithTestName:(id)arg0 ;
-(void)_handleChangeToMode:(id)arg0 ;
-(void)_handleDidCloseViewfinderForReason:(id)arg0 ;
-(void)_handleDidOpenViewfinderForReason:(id)arg0 ;
-(void)_handleWillCloseViewfinderForReason:(id)arg0 ;
-(void)_handleWillOpenViewfinderForReason:(id)arg0 ;
-(void)handleChangeToMode:(NSInteger)arg0 device:(NSInteger)arg1 ;
-(void)handleDidCloseViewfinderForReason:(NSInteger)arg0 ;
-(void)handleDidOpenViewfinderForReason:(NSInteger)arg0 ;
-(void)handleWillCloseViewfinderForReason:(NSInteger)arg0 ;
-(void)handleWillOpenViewfinderForReason:(NSInteger)arg0 ;
// -(void)registerHandler:(id)arg0 forChangeToMode:(unk)arg1 devicePosition:(NSInteger)arg2  ;
-(void)removeListeners;
-(void)setupListeners;
-(void)startTesting;
-(void)stopTesting;


@end


#endif