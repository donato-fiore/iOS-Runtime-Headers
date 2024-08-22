// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMBATTERYSTATUS_H
#define IMBATTERYSTATUS_H

@protocol IMBatteryStatusTestDelegate;

#import <Foundation/Foundation.h>


@interface IMBatteryStatus : NSObject

@property (readonly, getter=isCharging) BOOL charging;
@property (weak, nonatomic) NSObject<IMBatteryStatusTestDelegate> *testDelegate; // ivar: _testDelegate




@end


#endif