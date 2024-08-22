// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAWEATHERUNITS_H
#define SAWEATHERUNITS_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAWeatherUnits : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *distanceUnits;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *precipitationUnits;
@property (copy, nonatomic) NSString *pressureUnits;
@property (copy, nonatomic) NSString *speedUnits;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *temperatureUnits;


+(id)units;
+(id)unitsWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif