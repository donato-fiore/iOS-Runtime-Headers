// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDANIMATIONCHARTTARGET_H
#define PDANIMATIONCHARTTARGET_H



#import "PDAnimationShapeTarget.h"

@interface PDAnimationChartTarget : PDAnimationShapeTarget {
    BOOL mHasCatagoryIndex;
    int mCatagoryIndex;
    BOOL mHasSeriesIndex;
    int mSeriesIndex;
    BOOL mHasBuildStep;
    int mBuildStep;
    int mChartSubElementType;
}




-(BOOL)hasBuildStep;
-(BOOL)hasCatagoryIndex;
-(BOOL)hasSeriesIndex;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(int)buildStep;
-(int)catagoryIndex;
-(int)chartSubElementType;
-(int)seriesIndex;
-(void)setBuildStep:(int)arg0 ;
-(void)setCatagoryIndex:(int)arg0 ;
-(void)setChartSubElementType:(int)arg0 ;
-(void)setSeriesIndex:(int)arg0 ;


@end


#endif