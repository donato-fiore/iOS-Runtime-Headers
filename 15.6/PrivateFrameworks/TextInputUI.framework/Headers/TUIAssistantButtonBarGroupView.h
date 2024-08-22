// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUIASSISTANTBUTTONBARGROUPVIEW_H
#define TUIASSISTANTBUTTONBARGROUPVIEW_H

@class UIView, NSMutableArray, UIBarButtonItemGroup, NSString, NSArray, _UIButtonBarButtonVisualProvider;
@protocol _UIBarButtonItemViewOwner, TUIButtonBarViewProvider;



@interface TUIAssistantButtonBarGroupView : UIView <_UIBarButtonItemViewOwner>

 {
    NSMutableArray *_visibleButtons;
    BOOL _collapsed;
}


@property (retain, nonatomic) UIBarButtonItemGroup *barButtonItemGroup; // ivar: _barButtonItemGroup
@property (weak, nonatomic) NSObject<TUIButtonBarViewProvider> *buttonProvider; // ivar: _buttonProvider
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (readonly, nonatomic) BOOL containsFlexibleItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat itemSpacing; // ivar: _itemSpacing
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *visibleButtons;
@property (retain, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // ivar: _visualProvider


-(BOOL)_canBeCollapsed;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_buttonBarItemViewForBarButtonItem:(id)arg0 ;
-(id)_visibleItems;
-(id)_visibleItemsAllowingCollapse:(BOOL)arg0 ;
-(id)initWithBarButtonItemGroup:(id)arg0 visualProvider:(id)arg1 buttonProvider:(id)arg2 ;
-(struct CGSize )_preferredSizeForItems:(id)arg0 fittingWidth:(CGFloat)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_ensureVisibleButtonsForVisibleItems;
-(void)_itemCustomViewDidChange:(id)arg0 fromView:(id)arg1 ;
-(void)_itemDidChangeEnabledState:(id)arg0 ;
-(void)_itemDidChangeHiddenState:(id)arg0 ;
-(void)_itemDidChangeSelectionState:(id)arg0 ;
-(void)_itemDidChangeWidth:(id)arg0 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg0 ;
-(void)_updateViewForBarButtonItem:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif