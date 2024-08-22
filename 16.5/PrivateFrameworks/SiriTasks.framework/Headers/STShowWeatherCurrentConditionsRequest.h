// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSHOWWEATHERCURRENTCONDITIONSREQUEST_H
#define STSHOWWEATHERCURRENTCONDITIONSREQUEST_H

@class AFSiriRequest, STCity;


#import "STWeatherCurrentConditions.h"
#import "STWeatherUnits.h"

@interface STShowWeatherCurrentConditionsRequest : AFSiriRequest {
    STWeatherCurrentConditions *_currentConditions;
    STCity *_city;
    STWeatherUnits *_units;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithCurrentConditions:(id)arg0 city:(id)arg1 units:(id)arg2 ;
-(id)city;
-(id)createResponse;
-(id)currentConditions;
-(id)initWithCoder:(id)arg0 ;
-(id)units;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif