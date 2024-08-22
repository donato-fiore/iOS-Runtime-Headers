// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSHOWWEATHERCONDITIONSREQUEST_H
#define STSHOWWEATHERCONDITIONSREQUEST_H

@class AFSiriRequest, STCity;


#import "STWeatherAttributes.h"

@interface STShowWeatherConditionsRequest : AFSiriRequest {
    STWeatherAttributes *_attributes;
    STCity *_city;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithAttributes:(id)arg0 city:(id)arg1 ;
-(id)attributes;
-(id)city;
-(id)createResponse;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif