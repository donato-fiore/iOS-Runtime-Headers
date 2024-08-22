// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDPOWERLOGOBSERVER_H
#define HMDPOWERLOGOBSERVER_H

@class HMFObject, NSString;
@protocol HMMLogEventObserver;


#import "HMDPowerLogObserverContext.h"

@interface HMDPowerLogObserver : HMFObject <HMMLogEventObserver>



@property (retain, nonatomic) HMDPowerLogObserverContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedObserver;
+(id)supportedEventClasses;
-(id)initWithContext:(id)arg0 ;
-(void)_reportCameraSettingsConfiguration:(id)arg0 ;
-(void)_reportConfiguration:(id)arg0 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif