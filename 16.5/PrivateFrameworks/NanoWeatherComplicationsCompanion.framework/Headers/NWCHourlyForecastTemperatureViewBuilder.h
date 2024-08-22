// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCHOURLYFORECASTTEMPERATUREVIEWBUILDER_H
#define NWCHOURLYFORECASTTEMPERATUREVIEWBUILDER_H

@class NSString, CLKDevice;
@protocol NWCHourlyForecastViewBuildable;

#import <Foundation/Foundation.h>


@interface NWCHourlyForecastTemperatureViewBuilder : NSObject <NWCHourlyForecastViewBuildable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createHourlyForecastView;
-(id)initWithDevice:(id)arg0 ;


@end


#endif