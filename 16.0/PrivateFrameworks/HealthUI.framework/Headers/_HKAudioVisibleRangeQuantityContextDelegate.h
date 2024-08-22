// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKAUDIOVISIBLERANGEQUANTITYCONTEXTDELEGATE_H
#define _HKAUDIOVISIBLERANGEQUANTITYCONTEXTDELEGATE_H

@class HKAudioStandardQuantityContextDelegate;


#import "HKLineSeries.h"

@interface _HKAudioVisibleRangeQuantityContextDelegate : HKAudioStandardQuantityContextDelegate

@property (readonly, nonatomic) HKLineSeries *audioOverlayLineSeries; // ivar: _audioOverlayLineSeries


-(id)alternateLineSeries;
-(id)formatterForTimescope:(NSInteger)arg0 ;
-(id)initWithCustomDataSource:(id)arg0 primaryDisplayType:(id)arg1 ;
-(id)valueContextString:(id)arg0 applicationItems:(id)arg1 representativeDisplayType:(id)arg2 ;
-(id)valueString:(id)arg0 applicationItems:(id)arg1 representativeDisplayType:(id)arg2 ;
-(void)_enumerateAudioExposureChartPoints:(id)arg0 withBlock:(id)arg1 ;


@end


#endif