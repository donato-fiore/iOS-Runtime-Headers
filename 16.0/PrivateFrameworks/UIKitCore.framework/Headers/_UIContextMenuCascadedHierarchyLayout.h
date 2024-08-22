// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTEXTMENUCASCADEDHIERARCHYLAYOUT_H
#define _UICONTEXTMENUCASCADEDHIERARCHYLAYOUT_H

@protocol _UIContextMenuHierarchyLayout;

#import <Foundation/Foundation.h>

#import "_UIContextMenuView.h"

@interface _UIContextMenuCascadedHierarchyLayout : NSObject <_UIContextMenuHierarchyLayout>



@property (nonatomic) BOOL isAnimatingMenuAddition; // ivar: _isAnimatingMenuAddition
@property (weak, nonatomic) _UIContextMenuView *menuView; // ivar: _menuView


-(id)_metrics;
-(id)initWithMenuView:(id)arg0 ;
-(struct CAPoint3D )_submenuOffsetForCascadingLeft:(BOOL)arg0 ;
-(struct CGRect )_cascadingAreaBounds;
-(struct CGSize )encompassingSize;
// -(void)navigateDownFromNode:(id)arg0 toNode:(id)arg1 alongsideAnimations:(id)arg2 completion:(unk)arg3  ;
// -(void)navigateUpFromNode:(id)arg0 toNode:(id)arg1 alongsideAnimations:(id)arg2 completion:(unk)arg3  ;
-(void)performLayoutForComputingPreferredContentSize:(BOOL)arg0 withMaxContainerSize:(struct CGSize )arg1 ;


@end


#endif