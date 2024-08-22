// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBDISPLAYITEMFIXEDASPECTGRID_H
#define _SBDISPLAYITEMFIXEDASPECTGRID_H

@class SBDisplayItemFlexibleGrid;



@interface _SBDisplayItemFixedAspectGrid : SBDisplayItemFlexibleGrid {
    CGSize _fixedSize;
    BOOL _maximizeSupported;
}




-(BOOL)_allowFullScreen;
-(id)allHeights;
-(id)allWidths;
-(id)initWithBounds:(struct CGRect )arg0 fixedSize:(struct CGSize )arg1 screenScale:(CGFloat)arg2 chamoisLayoutAttributes:(id)arg3 ;
-(struct CGSize )nearestGridSizeForSize:(struct CGSize )arg0 ;
-(void)_buildFixedGridWithScreenScale:(CGFloat)arg0 ;
-(void)_buildGridWithScreenScale:(CGFloat)arg0 ;


@end


#endif