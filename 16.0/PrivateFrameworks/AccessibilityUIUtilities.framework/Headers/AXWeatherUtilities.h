// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXWEATHERUTILITIES_H
#define AXWEATHERUTILITIES_H


#import <Foundation/Foundation.h>


@interface AXWeatherUtilities : NSObject



+(id)sharedInstance;
-(NSUInteger)_weatherCodeForGenericIconName:(id)arg0 ;
-(id)descriptionForPrecipitation:(id)arg0 weatherConditionCode:(NSUInteger)arg1 ;
-(id)descriptionForWeatherConditionImageName:(id)arg0 ;
-(id)descriptionForWeatherWFConditionCode:(NSUInteger)arg0 ;


@end


#endif