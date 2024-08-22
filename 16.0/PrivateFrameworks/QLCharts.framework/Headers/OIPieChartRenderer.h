// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OIPIECHARTRENDERER_H
#define OIPIECHARTRENDERER_H

@protocol OIPieSliceRenderer;

#import <Foundation/Foundation.h>


@interface OIPieChartRenderer : NSObject

@property *__OIChart chart; // ivar: _chart
@property (retain) NSObject<OIPieSliceRenderer> *sliceRenderer; // ivar: _sliceRenderer


-(id)initWithChart:(struct __OIChart *)arg0 ;
-(id)initWithChart:(struct __OIChart *)arg0 sliceRenderer:(id)arg1 ;
-(void)dealloc;
-(void)renderThreeDimensional:(BOOL)arg0 pieFromSeriesArray:(struct __CFArray *)arg1 ;


@end


#endif