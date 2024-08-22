// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKINTERACTIVECHARTAUDIODATA_H
#define HKINTERACTIVECHARTAUDIODATA_H

@class NSString;
@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>

#import "HKInteractiveChartAudioData.h"

@interface HKInteractiveChartAudioData : NSObject <HKGraphSeriesChartData>



@property (nonatomic) CGFloat averageLEQ; // ivar: _averageLEQ
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKInteractiveChartAudioData *overviewData; // ivar: _overviewData
@property (readonly) Class superclass;


-(id)_durationString:(CGFloat)arg0 ;


@end


#endif