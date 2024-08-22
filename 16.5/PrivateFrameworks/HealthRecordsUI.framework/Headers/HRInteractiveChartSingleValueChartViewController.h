// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRINTERACTIVECHARTSINGLEVALUECHARTVIEWCONTROLLER_H
#define HRINTERACTIVECHARTSINGLEVALUECHARTVIEWCONTROLLER_H

@class HKInteractiveChartOverlayViewController;


#import "_TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource.h"

@interface HRInteractiveChartSingleValueChartViewController : HKInteractiveChartOverlayViewController

@property (retain, nonatomic) _TtC15HealthRecordsUI35SingleValueAnnotationViewDataSource *annotationViewDataSource; // ivar: _annotationViewDataSource


-(id)_colorForDisplayType:(id)arg0 ;
-(id)makeAnnotationDataSource;
-(id)makeStandardCurrentValueViewDataSource;
-(void)updateSelectionAnnotationDataSourceForContext:(id)arg0 displayType:(id)arg1 timeScope:(NSInteger)arg2 ;


@end


#endif