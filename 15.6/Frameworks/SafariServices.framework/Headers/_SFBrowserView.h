// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFBROWSERVIEW_H
#define _SFBROWSERVIEW_H

@class UIView, SFPinnableBanner, WKWebView;
@protocol SFBrowserViewDelegate;


#import "_SFCrashBanner.h"
#import "SFNanoDomainContainerView.h"
#import "_SFNavigationBar.h"
#import "_SFLinkPreviewHeader.h"
#import "_SFToolbar.h"

@interface _SFBrowserView : UIView

@property (retain, nonatomic) SFPinnableBanner *appBannerPendingFirstPaint; // ivar: _appBannerPendingFirstPaint
@property (retain, nonatomic) UIView *appInfoOverlay; // ivar: _appInfoOverlay
@property (nonatomic) CGFloat bottomBarOffset; // ivar: _bottomBarOffset
@property (readonly, nonatomic) UIView *contentContainerView; // ivar: _contentContainerView
@property (retain, nonatomic) _SFCrashBanner *crashBanner; // ivar: _crashBanner
@property (nonatomic) CGFloat crashBannerOffset; // ivar: _crashBannerOffset
@property (readonly, weak, nonatomic) WKWebView *currentWebView; // ivar: _currentWebView
@property (weak, nonatomic) NSObject<SFBrowserViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasReceivedTouchEvents; // ivar: _hasReceivedTouchEvents
@property (readonly, nonatomic) BOOL isContentReadyForDisplay; // ivar: _contentReadyForDisplay
@property (nonatomic) CGFloat minimalUITopOffset; // ivar: _minimalUITopOffset
@property (retain, nonatomic) SFNanoDomainContainerView *nanoDomainContainerView; // ivar: _nanoDomainContainerView
@property (retain, nonatomic) _SFNavigationBar *navigationBar; // ivar: _navigationBar
@property (nonatomic) NSUInteger navigationBarBehavior; // ivar: _navigationBarBehavior
@property (nonatomic) UIEdgeInsets obscuredInsets; // ivar: _obscuredInsets
@property (retain, nonatomic) SFPinnableBanner *pinnableBanner; // ivar: _pinnableBanner
@property (nonatomic) CGPoint pinnableBannerOffset; // ivar: _pinnableBannerOffset
@property (retain, nonatomic) _SFLinkPreviewHeader *previewHeader; // ivar: _previewHeader
@property (retain, nonatomic) UIView *quickLookDocumentView; // ivar: _quickLookDocumentView
@property (readonly, nonatomic) UIView *scrollToTopView; // ivar: _scrollToTopView
@property (nonatomic) BOOL shouldUseScrollToTopView; // ivar: _shouldUseScrollToTopView
@property (retain, nonatomic) UIView *statusBarBackgroundView; // ivar: _statusBarBackgroundView
@property (retain, nonatomic) _SFToolbar *toolbar; // ivar: _toolbar
@property (nonatomic) CGFloat topBarHeight; // ivar: _topBarHeight
@property (nonatomic) CGFloat unscaledWebViewWidth; // ivar: _unscaledWebViewWidth


-(CGFloat)previewScaleFactor;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )unscaledWebViewBounds;
-(void)_scaleContentInset;
-(void)addWebView:(id)arg0 ;
-(void)layoutSubviews;
-(void)setContentReadyForDisplay;
-(void)updateDismissButtonStyle:(NSInteger)arg0 ;
-(void)updatePreviewHeaderWithURLString:(id)arg0 ;


@end


#endif