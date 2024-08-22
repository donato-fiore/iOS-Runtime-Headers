// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTTYPEPIE3D_H
#define TSCHCHARTTYPEPIE3D_H



#import "TSCH3DChartType.h"

@interface TSCHChartTypePie3D : TSCH3DChartType



-(BOOL)approximatesTitleAccommodationUsingLegendSize;
-(BOOL)supportsBevels;
-(BOOL)supportsGroupedShadows;
-(NSInteger)userInterfaceTag;
-(id)categoryLabelPositioner;
-(id)defaultSeriesType:(NSUInteger)arg0 ;
-(id)imageWithPreset:(id)arg0 target:(int)arg1 imageSize:(struct CGSize )arg2 imageScale:(CGFloat)arg3 swatchFrame:(struct CGRect )arg4 documentRoot:(id)arg5 shouldCache:(*BOOL)arg6 ;
-(id)init;
-(id)name;
-(id)titlePositionerWithInfo:(id)arg0 scene:(id)arg1 ;
-(id)userInterfaceName;
-(id)valueLabelPositioner;
-(struct TSCH3DChartRotationLimit )rotation3DLimit;


@end


#endif