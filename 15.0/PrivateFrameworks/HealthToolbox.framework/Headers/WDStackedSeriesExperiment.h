// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDSTACKEDSERIESEXPERIMENT_H
#define WDSTACKEDSERIESEXPERIMENT_H

@class HKDateGraphViewController, NSArray;


#import "WDProfile.h"

@interface WDStackedSeriesExperiment : HKDateGraphViewController

@property (readonly, nonatomic) WDProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSArray *series; // ivar: _series


-(NSInteger)stackCountForGraphView:(id)arg0 ;
-(id)graphView:(id)arg0 graphSeriesForZoom:(NSInteger)arg1 stackOffset:(NSInteger)arg2 ;
-(id)initWithProfile:(id)arg0 ;
-(id)seriesSelectionLineColorForGraphView:(id)arg0 ;
-(id)testSeries:(NSInteger)arg0 color:(id)arg1 hourOffset:(CGFloat)arg2 yAxis:(id)arg3 annotateLastValue:(BOOL)arg4 ;
-(void)_buildSeries;
-(void)viewDidLoad;


@end


#endif