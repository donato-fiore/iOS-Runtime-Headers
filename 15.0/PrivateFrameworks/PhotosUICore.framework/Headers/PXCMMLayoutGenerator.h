// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMLAYOUTGENERATOR_H
#define PXCMMLAYOUTGENERATOR_H



#import "PXLayoutGenerator.h"

@interface PXCMMLayoutGenerator : PXLayoutGenerator



+(id)_defaultEditorialLayoutGeneratorWithReferenceSize:(struct CGSize )arg0 headerHeight:(CGFloat)arg1 interItemSpacing:(struct CGSize )arg2 ;
+(id)_defaultGridLayoutGeneratorWithReferenceSize:(struct CGSize )arg0 additionalTileCount:(NSUInteger)arg1 headerHeight:(CGFloat)arg2 itemSize:(struct CGSize )arg3 interItemSpacing:(struct CGSize )arg4 contentInsets:(struct UIEdgeInsets )arg5 ;
+(id)_gridLayoutGeneratorWithReferenceSize:(struct CGSize )arg0 columnCount:(NSUInteger)arg1 additionalTileCount:(NSUInteger)arg2 headerHeight:(CGFloat)arg3 interItemSpacing:(struct CGSize )arg4 ;
+(id)layoutGeneratorForLayoutType:(NSInteger)arg0 withReferenceSize:(struct CGSize )arg1 additionalTileCount:(NSUInteger)arg2 headerHeight:(CGFloat)arg3 itemSize:(struct CGSize )arg4 interItemSpacing:(struct CGSize )arg5 contentInsets:(struct UIEdgeInsets )arg6 ;


@end


#endif