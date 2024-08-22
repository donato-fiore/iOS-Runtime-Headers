// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTFEATURECATEGORY_H
#define TSCHCHARTFEATURECATEGORY_H



#import "TSCHChartFeature.h"

@interface TSCHChartFeatureCategory : TSCHChartFeature



-(NSUInteger)styleIndexForAxisID:(id)arg0 ;
-(id)initWithChartType:(id)arg0 ;
-(id)valueLabelPositioner;
-(int)representativeGridValueAxisType;
-(void)updateTitlesForExportingModel:(id)arg0 info:(id)arg1 ;


@end


#endif