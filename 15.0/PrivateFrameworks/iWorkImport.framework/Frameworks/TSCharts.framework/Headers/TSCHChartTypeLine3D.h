// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTTYPELINE3D_H
#define TSCHCHARTTYPELINE3D_H



#import "TSCH3DChartType.h"

@interface TSCHChartTypeLine3D : TSCH3DChartType



-(BOOL)supportsElementChunking;
-(NSInteger)userInterfaceTag;
-(id)defaultDataFileName;
-(id)defaultSeriesType:(NSUInteger)arg0 ;
-(id)imageWithPreset:(id)arg0 target:(int)arg1 imageSize:(struct CGSize )arg2 imageScale:(CGFloat)arg3 swatchFrame:(struct CGRect )arg4 documentRoot:(id)arg5 shouldCache:(*BOOL)arg6 ;
-(id)init;
-(id)name;
-(id)userInterfaceName;
-(struct TSCH3DChartRotationLimit )rotation3DLimit;


@end


#endif