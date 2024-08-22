// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDOWNLOADSBARBUTTONITEMVIEW_H
#define SFDOWNLOADSBARBUTTONITEMVIEW_H

@class UIButton, UIProgressView, UIBarButtonItem, NSString;
@protocol UIPointerInteractionDelegate, SFDeferrableUpdateView;


#import "_SFDownloadsIconView.h"

@interface SFDownloadsBarButtonItemView : UIButton <UIPointerInteractionDelegate, SFDeferrableUpdateView>

 {
    UIProgressView *_progressView;
    ? deferrableUpdateViewState;
    _SFDownloadsIconView *_iconView;
}


@property (weak, nonatomic) UIBarButtonItem *barButtonItem; // ivar: _barButtonItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (readonly) Class superclass;


+(id)buttonWithBarButtonItem:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(struct ? *)deferrableUpdateViewState;
-(struct CGRect )_barButtonHitRect;
-(struct CGRect )_selectedIndicatorBounds;
-(struct CGSize )intrinsicContentSize;
-(void)_buttonPressed;
-(void)_installSubviews;
-(void)_updateIcon;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)pulse;
-(void)setEnabled:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContents;


@end


#endif