// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCDEVICEBATTERY_H
#define GCDEVICEBATTERY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCDeviceBattery : NSObject <NSSecureCoding>



@property (nonatomic) float batteryLevel; // ivar: _batteryLevel
@property (nonatomic) NSInteger batteryState; // ivar: _batteryState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLevel:(float)arg0 batteryState:(NSInteger)arg1 ;
-(id)initWithLevel:(unsigned char)arg0 isCharging:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif