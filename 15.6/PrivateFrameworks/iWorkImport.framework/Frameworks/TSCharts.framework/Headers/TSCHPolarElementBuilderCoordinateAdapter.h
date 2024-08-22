// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHPOLARELEMENTBUILDERCOORDINATEADAPTER_H
#define TSCHPOLARELEMENTBUILDERCOORDINATEADAPTER_H



#import "TSCHElementBuilderCoordinateAdapter.h"

@interface TSCHPolarElementBuilderCoordinateAdapter : TSCHElementBuilderCoordinateAdapter



-(struct ? *)cartesianPointsWithSeries:(id)arg0 groupIndexSet:(id)arg1 nullsUseIntercept:(BOOL)arg2 plotAreaFrame:(struct CGRect )arg3 ;
-(struct CGRect )constrainedRectWithSeries:(id)arg0 elementBoundingBox:(struct CGRect )arg1 seriesAreaFrame:(struct CGRect )arg2 ;


@end


#endif