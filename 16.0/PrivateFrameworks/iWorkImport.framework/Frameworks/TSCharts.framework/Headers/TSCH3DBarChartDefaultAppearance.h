// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DBARCHARTDEFAULTAPPEARANCE_H
#define TSCH3DBARCHARTDEFAULTAPPEARANCE_H

@protocol TSCH3DBarChartAppearance;

#import <Foundation/Foundation.h>

#import "TSCH3DChartBarElementProperties.h"

@interface TSCH3DBarChartDefaultAppearance : NSObject <TSCH3DBarChartAppearance>

 {
    TSCH3DChartBarElementProperties *_properties;
}




+(int)shapeType;
+(struct BarExtrusionDetails )defaultDetails;
-(BOOL)isCircular;
-(float)chartMinZForScene:(id)arg0 ;
-(float)depthForScene:(id)arg0 ;
-(float)maxValueForSeries:(NSInteger)arg0 ;
-(float)signedValueForSeries:(id)arg0 index:(*void)arg1 ;
-(id)initWithProperties:(id)arg0 ;


@end


#endif