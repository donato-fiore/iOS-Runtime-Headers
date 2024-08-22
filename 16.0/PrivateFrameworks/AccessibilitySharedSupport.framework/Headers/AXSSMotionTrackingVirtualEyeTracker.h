// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSMOTIONTRACKINGVIRTUALEYETRACKER_H
#define AXSSMOTIONTRACKINGVIRTUALEYETRACKER_H

@class HIDUserDevice;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXSSMotionTrackingVirtualEyeTracker : NSObject

@property (nonatomic) BOOL _activated; // ivar: __activated
@property (retain, nonatomic) HIDUserDevice *_hidUserDevice; // ivar: __hidUserDevice
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_hidUserDeviceQueue; // ivar: __hidUserDeviceQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_reportingQueue; // ivar: __reportingQueue
@property (nonatomic) CGRect screenBounds; // ivar: _screenBounds


+(id)_eyeTrackerHIDDeviceProperties;
+(id)_eyeTrackerHIDReportDescriptorData;
+(id)_hidReportWithButtonDown:(BOOL)arg0 ;
+(id)_hidReportWithPoint:(struct CGPoint )arg0 reportID:(NSUInteger)arg1 timestamp:(NSUInteger)arg2 version:(NSUInteger)arg3 ;
+(id)_hidReportWithStatusChange:(NSUInteger)arg0 ;
-(id)initWithScreenBounds:(struct CGRect )arg0 ;
-(void)_activateOnReportingQueue;
-(void)_changeStatusOnReportingQueueTo:(NSUInteger)arg0 ;
-(void)_clickOnReportingQueueWithButtonDown:(BOOL)arg0 ;
-(void)_deactivateOnReportingQueue;
-(void)_moveOnReportingQueueToPoint:(struct CGPoint )arg0 ;
-(void)activate;
-(void)changeStatusTo:(NSUInteger)arg0 ;
-(void)click;
-(void)deactivate;
-(void)dealloc;
-(void)moveToPoint:(struct CGPoint )arg0 ;


@end


#endif