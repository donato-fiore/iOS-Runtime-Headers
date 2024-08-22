// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef W5POWERSTATUS_H
#define W5POWERSTATUS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface W5PowerStatus : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) int batteryWarningLevel; // ivar: _batteryWarningLevel
@property (nonatomic) CGFloat internalBatteryLevel; // ivar: _internalBatteryLevel
@property (nonatomic) NSInteger powerSourceType; // ivar: _powerSourceType
@property (nonatomic) unsigned int powerStateCaps; // ivar: _powerStateCaps


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPowerStatus:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif