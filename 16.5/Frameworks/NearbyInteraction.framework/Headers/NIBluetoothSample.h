// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NIBLUETOOTHSAMPLE_H
#define NIBLUETOOTHSAMPLE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NIBluetoothSample : NSObject <NSCopying, NSSecureCoding>



@property (readonly) int channel; // ivar: _channel
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) CGFloat machContinuousTimeSeconds; // ivar: _machContinuousTimeSeconds
@property (readonly) NSString *model; // ivar: _model
@property (readonly) CGFloat rssi; // ivar: _rssi


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBluetoothSample:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRSSI:(CGFloat)arg0 identifier:(id)arg1 model:(id)arg2 channel:(int)arg3 machContinuousTimeSeconds:(CGFloat)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif