// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISTACKEDBAR_H
#define SKUISTACKEDBAR_H

@class UIView, _UIBackdropView, NSArray;
@protocol SKUIStackedBarDelegate;



@interface SKUIStackedBar : UIView {
    _UIBackdropView *_backdropView;
    NSArray *_cells;
    UIView *_wrapperView;
    UIView *_maskView;
    CGFloat _newOffset;
}


@property (nonatomic) BOOL alwaysShowsBackButton; // ivar: _alwaysShowsBackButton
@property (weak) NSObject<SKUIStackedBarDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL hidesStatusBar; // ivar: _hidesStatusBar
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) BOOL lastItemExpanded; // ivar: _lastItemExpanded
@property (nonatomic) CGFloat offset; // ivar: _offset
@property (nonatomic) BOOL splitViewStyle; // ivar: _splitViewStyle
@property (nonatomic) BOOL zeroHeightWhenFirstChildExpanded; // ivar: _zeroHeightWhenFirstChildExpanded


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_backAction:(id)arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)_reload;
-(void)_resetNewOffset;
-(void)_selectItemAtIndex:(NSInteger)arg0 ;
-(void)animateToFullSizeIfNecessary;
-(void)layoutSubviews;
-(void)sizeToFit;


@end


#endif