// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFBATTERYINFO_H
#define SFBATTERYINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFBatteryInfo : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat batteryLevel; // ivar: _batteryLevel
@property (nonatomic) NSInteger batteryState; // ivar: _batteryState
@property (nonatomic) NSInteger batteryType; // ivar: _batteryType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif