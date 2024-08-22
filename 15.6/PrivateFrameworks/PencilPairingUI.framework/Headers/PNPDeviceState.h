// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PNPDEVICESTATE_H
#define PNPDEVICESTATE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PNPDeviceState : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat batteryLevel; // ivar: _batteryLevel
@property (nonatomic) BOOL batteryLevelUnknown; // ivar: _batteryLevelUnknown
@property (nonatomic) NSUInteger edge; // ivar: _edge
@property (readonly, nonatomic) BOOL isLowPower;
@property (readonly, nonatomic) BOOL isOnLeftOrRightSide;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger orientation; // ivar: _orientation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif