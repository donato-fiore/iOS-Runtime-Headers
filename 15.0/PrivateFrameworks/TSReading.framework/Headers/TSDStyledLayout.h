// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDSTYLEDLAYOUT_H
#define TSDSTYLEDLAYOUT_H



#import "TSDDrawableLayout.h"

@interface TSDStyledLayout : TSDDrawableLayout {
    BOOL mIsUpdatingOpacity;
    CGFloat mDynamicOpacity;
}


@property (readonly, nonatomic) CGFloat opacity;


-(BOOL)canFlip;
-(BOOL)isInvisible;
-(id)styledInfo;
-(struct CGRect )aliasedAlignmentFrameForScale:(CGFloat)arg0 ;
-(struct CGRect )alignmentFrameInRoot;
-(struct CGRect )frameForCulling;
-(struct CGRect )i_baseFrame;
-(struct CGRect )reflectionBoundsForRect:(struct CGRect )arg0 ;
-(struct CGRect )reflectionFrame;
-(struct CGRect )reflectionFrameForSubRect:(struct CGRect )arg0 ;
-(struct CGRect )reflectionFrameInRoot;
-(struct CGRect )shadowedNaturalBoundsWithoutOffset;
-(void)dynamicOpacityChangeDidBegin;
-(void)dynamicOpacityChangeDidEnd;
-(void)dynamicOpacityUpdateToValue:(CGFloat)arg0 ;


@end


#endif