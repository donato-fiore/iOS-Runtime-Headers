// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYFIRMWAREUPDATETIMEWINDOWPOLICY_H
#define HMDACCESSORYFIRMWAREUPDATETIMEWINDOWPOLICY_H

@class NSDateFormatter, NSString, HMFTimer;
@protocol HMFTimerDelegate, NSCopying;


#import "HMDAccessoryFirmwareUpdatePolicy.h"
#import "HMDAccessoryFirmwareUpdateTimeWindow.h"

@interface HMDAccessoryFirmwareUpdateTimeWindowPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFTimerDelegate, NSCopying>



@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMFTimer *reevaluateTimer; // ivar: _reevaluateTimer
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMDAccessoryFirmwareUpdateTimeWindow *updateTimeWindow; // ivar: _updateTimeWindow


+(id)logCategory;
-(BOOL)evaluate;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessory:(id)arg0 timeWindow:(id)arg1 workQueue:(id)arg2 ;
-(void)_startReevaluateTimer:(id)arg0 ;
-(void)_stopReevaluateTimer;
-(void)configure;
-(void)timerDidFire:(id)arg0 ;


@end


#endif