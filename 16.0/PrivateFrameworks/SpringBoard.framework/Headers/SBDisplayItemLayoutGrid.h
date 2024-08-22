// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDISPLAYITEMLAYOUTGRID_H
#define SBDISPLAYITEMLAYOUTGRID_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SBDisplayItemLayoutGrid : NSObject {
    NSMutableDictionary *_gridCache;
}




-(id)_gridForBounds:(struct CGRect )arg0 contentOrientation:(NSInteger)arg1 layoutRestrictionInfo:(id)arg2 screenScale:(CGFloat)arg3 chamoisLayoutAttributes:(id)arg4 ;
-(id)allGridHeightsForBounds:(struct CGRect )arg0 contentOrientation:(NSInteger)arg1 layoutRestrictionInfo:(id)arg2 screenScale:(CGFloat)arg3 chamoisLayoutAttributes:(id)arg4 ;
-(id)allGridWidthsForBounds:(struct CGRect )arg0 contentOrientation:(NSInteger)arg1 layoutRestrictionInfo:(id)arg2 screenScale:(CGFloat)arg3 chamoisLayoutAttributes:(id)arg4 ;
-(id)init;
-(struct CGSize )gridSizeAtIndexFromFullWidth:(NSUInteger)arg0 forBounds:(struct CGRect )arg1 contentOrientation:(NSInteger)arg2 layoutRestrictionInfo:(id)arg3 screenScale:(CGFloat)arg4 chamoisLayoutAttributes:(id)arg5 ;
-(struct CGSize )maxGridSizeForBounds:(struct CGRect )arg0 contentOrientation:(NSInteger)arg1 layoutRestrictionInfo:(id)arg2 screenScale:(CGFloat)arg3 chamoisLayoutAttributes:(id)arg4 ;
-(struct CGSize )minGridSizeForBounds:(struct CGRect )arg0 contentOrientation:(NSInteger)arg1 layoutRestrictionInfo:(id)arg2 screenScale:(CGFloat)arg3 chamoisLayoutAttributes:(id)arg4 ;
-(struct CGSize )nearestGridSizeForProposedSize:(struct CGSize )arg0 inBounds:(struct CGRect )arg1 contentOrientation:(NSInteger)arg2 layoutRestrictionInfo:(id)arg3 screenScale:(CGFloat)arg4 chamoisLayoutAttributes:(id)arg5 ;
-(void)clearCachedGrids;


@end


#endif