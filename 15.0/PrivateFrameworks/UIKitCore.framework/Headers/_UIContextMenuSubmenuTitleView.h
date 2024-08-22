// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTEXTMENUSUBMENUTITLEVIEW_H
#define _UICONTEXTMENUSUBMENUTITLEVIEW_H



#import "UICollectionReusableView.h"
#import "UIVisualEffectView.h"
#import "_UIContextMenuCellContentView.h"
#import "UIView.h"

@interface _UIContextMenuSubmenuTitleView : UICollectionReusableView

@property (nonatomic) BOOL allowsFocus; // ivar: _allowsFocus
@property (retain, nonatomic) UIVisualEffectView *bgView; // ivar: _bgView
@property (readonly, nonatomic) _UIContextMenuCellContentView *contentView; // ivar: _contentView
@property (nonatomic) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIView *highlightedBgView; // ivar: _highlightedBgView
@property (retain, nonatomic) UIVisualEffectView *obscuringMaterialView; // ivar: _obscuringMaterialView
@property (retain, nonatomic) UIView *separator; // ivar: _separator


-(BOOL)_wantsKeyEventsWhenDeferred;
-(BOOL)canBecomeFocused;
-(NSInteger)_focusItemDeferralMode;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addObscuringMaterialViewWithGroupName:(id)arg0 ;
-(void)didMoveToWindow;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setBackgroundMaterialGroupName:(id)arg0 ;


@end


#endif