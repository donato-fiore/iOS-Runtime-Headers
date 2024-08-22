// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DBARCHARTCIRCULARAPPEARANCE_H
#define TSCH3DBARCHARTCIRCULARAPPEARANCE_H



#import "TSCH3DBarChartDefaultAppearance.h"

@interface TSCH3DBarChartCircularAppearance : TSCH3DBarChartDefaultAppearance



+(int)shapeType;
+(struct BarExtrusionDetails )defaultDetails;
-(BOOL)isCircular;
-(float)chartMinZForScene:(id)arg0 ;
-(float)depthForScene:(id)arg0 ;


@end


#endif