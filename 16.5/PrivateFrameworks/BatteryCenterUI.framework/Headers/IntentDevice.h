// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INTENTDEVICE_H
#define INTENTDEVICE_H

@class INObject, NSString, NSNumber;



@interface IntentDevice : INObject

@property (copy, nonatomic) NSString *accessoryIdentifier;
@property (copy, nonatomic) NSNumber *isCharging;
@property (copy, nonatomic) NSNumber *isCustomImage;
@property (copy, nonatomic) NSNumber *isInternal;
@property (copy, nonatomic) NSNumber *isLowBattery;
@property (copy, nonatomic) NSNumber *isLowPowerModeActive;
@property (copy, nonatomic) NSNumber *isSynthesized;
@property (copy, nonatomic) NSNumber *parts;
@property (copy, nonatomic) NSNumber *percentCharge;
@property (copy, nonatomic) NSString *systemImageName;




@end


#endif