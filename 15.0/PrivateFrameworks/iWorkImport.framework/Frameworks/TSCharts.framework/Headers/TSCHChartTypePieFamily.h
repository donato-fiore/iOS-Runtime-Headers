// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTTYPEPIEFAMILY_H
#define TSCHCHARTTYPEPIEFAMILY_H



#import "TSCH2DChartType.h"

@interface TSCHChartTypePieFamily : TSCH2DChartType



-(BOOL)explosionAffectsChartBodyBounds;
-(BOOL)layoutFrameShouldEncloseInfoGeometry;
-(BOOL)shouldChangeExplosionWithPreviousChartType:(id)arg0 chartInfo:(id)arg1 seriesList:(id)arg2 ;
-(BOOL)supportsAxisLabelAngle;
-(Class)repClass;
-(id)animationDeliveryStylesForFilter:(id)arg0 ;


@end


#endif