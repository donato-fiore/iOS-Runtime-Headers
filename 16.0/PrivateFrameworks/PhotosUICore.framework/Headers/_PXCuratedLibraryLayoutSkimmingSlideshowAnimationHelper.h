// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXCURATEDLIBRARYLAYOUTSKIMMINGSLIDESHOWANIMATIONHELPER_H
#define _PXCURATEDLIBRARYLAYOUTSKIMMINGSLIDESHOWANIMATIONHELPER_H



#import "PXCuratedLibraryLayoutAnimationHelper.h"

@interface _PXCuratedLibraryLayoutSkimmingSlideshowAnimationHelper : PXCuratedLibraryLayoutAnimationHelper {
    NSUInteger _userInterfaceDirection;
    PXSimpleIndexPath _fromIndexPath;
    PXSimpleIndexPath _toIndexPath;
}




-(BOOL)_shoulAnimateSpriteWithInfo:(struct ? *)arg0 matchingSectionIndexPath:(struct PXSimpleIndexPath )arg1 spriteKind:(*unsigned char)arg2 ;
-(BOOL)wantsDoubleSidedAnimations;
-(CGFloat)animationDuration;
-(NSInteger)animationCurve;
-(id)animation:(id)arg0 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)arg1 rootLayout:(id)arg2 presentedGeometries:(struct ? *)arg3 styles:(struct ? *)arg4 infos:(struct ? *)arg5 ;
-(id)initWithLayout:(id)arg0 ;
-(void)_adjustGeometries:(struct ? *)arg0 styles:(struct ? *)arg1 infos:(struct ? *)arg2 spriteIndexRange:(struct _PXGSpriteIndexRange )arg3 appearing:(BOOL)arg4 ;
-(void)animation:(id)arg0 adjustGeometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange )arg4 ;
-(void)animation:(id)arg0 adjustGeometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange )arg4 ;
-(void)setUserData:(id)arg0 ;


@end


#endif