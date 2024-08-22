// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKWEATHERCOMPLICATIONDATASOURCE_H
#define NTKWEATHERCOMPLICATIONDATASOURCE_H



#import "NTKWeatherProxiedComplicationDataSource.h"

@interface NTKWeatherComplicationDataSource : NTKWeatherProxiedComplicationDataSource



+(BOOL)acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(Class)proxyClass;


@end


#endif