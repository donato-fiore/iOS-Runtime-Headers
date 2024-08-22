// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPRODUCTPAGEHEADERFLOATINGVIEW_H
#define SKUIPRODUCTPAGEHEADERFLOATINGVIEW_H

@class UIView, _UIBackdropView, UIControl;


#import "SKUIColorScheme.h"

@interface SKUIProductPageHeaderFloatingView : UIView {
    UIView *_separatorView;
    UIView *_backdropAlphaView;
    _UIBackdropView *_backdropView;
    BOOL _isPad;
}


@property (nonatomic) CGFloat backdropAlpha;
@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (readonly, nonatomic) UIControl *sectionControl; // ivar: _sectionControl
@property (nonatomic) NSInteger selectedSectionIndex;


-(id)initWithSectionTitles:(id)arg0 isPad:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_reloadBackdropView;
-(void)layoutSubviews;


@end


#endif