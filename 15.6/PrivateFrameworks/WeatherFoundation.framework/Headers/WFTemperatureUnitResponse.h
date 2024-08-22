// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTEMPERATUREUNITRESPONSE_H
#define WFTEMPERATUREUNITRESPONSE_H

@protocol NSSecureCoding;


#import "WFResponse.h"

@interface WFTemperatureUnitResponse : WFResponse <NSSecureCoding>



@property (nonatomic) int temperatureUnit; // ivar: _temperatureUnit


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif