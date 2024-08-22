// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWEATHERAIRQUALITYPOLLUTANT_H
#define WFWEATHERAIRQUALITYPOLLUTANT_H

@class NSMeasurement, NSString;
@protocol WFNaming, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WFWeatherAirQualityPollutant : NSObject <WFNaming, NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSMeasurement *concentration; // ivar: _concentration
@property (readonly, copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAirPollutant:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif