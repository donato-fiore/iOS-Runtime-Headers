// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAWEATHERWINDSPEED_H
#define SAWEATHERWINDSPEED_H

@class NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAWeatherWindSpeed : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *windDirection;
@property (copy, nonatomic) NSNumber *windDirectionDegree;


+(id)windSpeed;
+(id)windSpeedWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif