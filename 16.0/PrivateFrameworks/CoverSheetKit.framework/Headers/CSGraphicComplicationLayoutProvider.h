// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSGRAPHICCOMPLICATIONLAYOUTPROVIDER_H
#define CSGRAPHICCOMPLICATIONLAYOUTPROVIDER_H


#import <Foundation/Foundation.h>


@interface CSGraphicComplicationLayoutProvider : NSObject



+(BOOL)canAddElement:(id)arg0 toElements:(id)arg1 ;
+(CGFloat)complicationContainerHeight;
+(CGFloat)complicationEdgeInset;
+(CGFloat)complicationHeight;
+(CGFloat)containerEdgeInset;
+(CGFloat)interComplicationSpacing;
+(CGFloat)interComplicationSpacingExcludingInnerInset;
+(NSInteger)_insertionIndexForElement:(id)arg0 withExistingElements:(id)arg1 proposedInsertionIndex:(NSInteger)arg2 ;
+(NSInteger)insertionIndexForElement:(id)arg0 withExistingElements:(id)arg1 ;
+(id)_framesForLayoutElements:(id)arg0 containerSize:(struct CGSize )arg1 ;
+(id)complicationLayoutForElements:(id)arg0 containerSize:(struct CGSize )arg1 ;
+(id)complicationLayoutForElements:(id)arg0 containerSize:(struct CGSize )arg1 draggedElement:(id)arg2 draggedElementPosition:(struct CGPoint )arg3 ;


@end


#endif