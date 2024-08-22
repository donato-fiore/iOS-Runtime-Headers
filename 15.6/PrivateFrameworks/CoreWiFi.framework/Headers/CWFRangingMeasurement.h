// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFRANGINGMEASUREMENT_H
#define CWFRANGINGMEASUREMENT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFRangingMeasurement : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger RSSI; // ivar: _RSSI
@property (nonatomic) NSInteger SNR; // ivar: _SNR
@property (nonatomic) NSUInteger channel; // ivar: _channel
@property (nonatomic) NSUInteger coreID; // ivar: _coreID
@property (nonatomic) NSInteger roundTripTime; // ivar: _roundTripTime


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRangingMeasurement:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif