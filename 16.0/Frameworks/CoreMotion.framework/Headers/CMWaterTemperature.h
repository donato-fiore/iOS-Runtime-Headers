// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMWATERTEMPERATURE_H
#define CMWATERTEMPERATURE_H

@class NSDate, NSMeasurement;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMWaterTemperature : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSMeasurement *temperature; // ivar: _temperature
@property (readonly, nonatomic) NSMeasurement *temperatureUncertainty; // ivar: _temperatureUncertainty


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTemperature:(id)arg0 andTemperatureUncertainty:(id)arg1 andDate:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif