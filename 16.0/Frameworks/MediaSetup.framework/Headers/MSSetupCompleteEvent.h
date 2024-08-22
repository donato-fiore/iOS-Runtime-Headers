// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSSETUPCOMPLETEEVENT_H
#define MSSETUPCOMPLETEEVENT_H

@class NSDate, NSString;


#import "MSBaseSetupEvent.h"

@interface MSSetupCompleteEvent : MSBaseSetupEvent

@property (nonatomic) BOOL didSwitchAccount; // ivar: _didSwitchAccount
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (nonatomic) NSUInteger numberOfHomeAdded; // ivar: _numberOfHomeAdded
@property (nonatomic) NSUInteger numberOfHomesWithVR; // ivar: _numberOfHomesWithVR
@property (nonatomic) BOOL openDefaultService; // ivar: _openDefaultService
@property (retain, nonatomic) NSString *serviceID; // ivar: _serviceID
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime


-(id)encoded;
-(id)init;
-(void)addHome:(id)arg0 ;


@end


#endif