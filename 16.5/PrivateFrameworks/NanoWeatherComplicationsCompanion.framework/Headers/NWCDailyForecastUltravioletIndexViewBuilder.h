// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCDAILYFORECASTULTRAVIOLETINDEXVIEWBUILDER_H
#define NWCDAILYFORECASTULTRAVIOLETINDEXVIEWBUILDER_H

@class NSString, CLKDevice;
@protocol NWCDailyForecastViewBuildable;

#import <Foundation/Foundation.h>


@interface NWCDailyForecastUltravioletIndexViewBuilder : NSObject <NWCDailyForecastViewBuildable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createDailyForecastView;
-(id)initWithDevice:(id)arg0 ;


@end


#endif