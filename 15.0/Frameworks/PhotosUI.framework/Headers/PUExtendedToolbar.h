// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUEXTENDEDTOOLBAR_H
#define PUEXTENDEDTOOLBAR_H

@class UIToolbar, UIView, NSMutableSet, NSArray, NSString;
@protocol PUToolbarViewModelChangeObserver;


#import "PUToolbarViewModel.h"

@interface PUExtendedToolbar : UIToolbar <PUToolbarViewModelChangeObserver>



@property (retain, nonatomic, setter=_setAccessoryView:) UIView *_accessoryView; // ivar: __accessoryView
@property (retain, nonatomic, setter=_setAccessoryViewContainer:) UIView *_accessoryViewContainer; // ivar: __accessoryViewContainer
@property (readonly, nonatomic) NSMutableSet *_accessoryViewContainers; // ivar: __accessoryViewContainers
@property (nonatomic, setter=_setAccessoryViewTopOutset:) CGFloat _accessoryViewTopOutset; // ivar: __accessoryViewTopOutset
@property (retain, nonatomic, setter=_setContainedToolbar:) UIToolbar *_containedToolbar; // ivar: __containedToolbar
@property (nonatomic, setter=_setContainedToolbarHeight:) CGFloat _containedToolbarHeight; // ivar: __containedToolbarHeight
@property (nonatomic, setter=_setUpdating:) BOOL _isUpdating; // ivar: __isUpdating
@property (nonatomic, setter=_setMinimumBackgroundHeight:) CGFloat _minimumBackgroundHeight; // ivar: __minimumBackgroundHeight
@property (nonatomic, setter=_setNeedsUpdateAccessoryView:) BOOL _needsUpdateAccessoryView; // ivar: __needsUpdateAccessoryView
@property (nonatomic, setter=_setNeedsUpdateAccessoryViewContainer:) BOOL _needsUpdateAccessoryViewContainer; // ivar: __needsUpdateAccessoryViewContainer
@property (nonatomic, setter=_setNeedsUpdateAccessoryViewTopOutset:) BOOL _needsUpdateAccessoryViewTopOutset; // ivar: __needsUpdateAccessoryViewTopOutset
@property (nonatomic, setter=_setNeedsUpdateContainedToolbar:) BOOL _needsUpdateContainedToolbar; // ivar: __needsUpdateContainedToolbar
@property (nonatomic, setter=_setNeedsUpdateToolbarItems:) BOOL _needsUpdateToolbarItems; // ivar: __needsUpdateToolbarItems
@property (nonatomic, setter=_setNumberOfNestedChanges:) NSInteger _numberOfNestedChanges; // ivar: __numberOfNestedChanges
@property (copy, nonatomic, setter=_setToolbarItems:) NSArray *_toolbarItems; // ivar: __toolbarItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PUToolbarViewModel *toolbarViewModel; // ivar: _toolbarViewModel


-(BOOL)_needsUpdate;
-(BOOL)_shouldStretchDuringCrossfadeTransition;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_assertInsideChangeBlock;
-(void)_assertInsideUpdate;
-(void)_getContainedToolbarFrame:(struct CGRect *)arg0 accessoryViewContainerFrame:(struct CGRect *)arg1 forBounds:(struct CGRect )arg2 ;
-(void)_invalidateAccessoryView;
-(void)_invalidateAccessoryViewContainer;
-(void)_invalidateAccessoryViewTopOutset;
-(void)_invalidateContainedToolbar;
-(void)_invalidateSize;
-(void)_invalidateToolbarItems;
-(void)_performChanges:(id)arg0 ;
// -(void)_performChanges:(id)arg0 withAnimatorBlock:(unk)arg1  ;
-(void)_setNeedsUpdate;
-(void)_updateAccessoryTopOutsetViewIfNeeded;
-(void)_updateAccessoryViewIfNeeded;
-(void)_updateIfNeededWithAnimatorBlock:(id)arg0 ;
-(void)_updateToolbarItemsIfNeeded;
-(void)_updateViewsIfNeededWithAnimatorBlock:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBarStyle:(NSInteger)arg0 ;
-(void)tintColorDidChange;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif