// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFWEBPAGESTATUSBARVIEW_H
#define SFWEBPAGESTATUSBARVIEW_H

@class UIView, UILabel, NSTimer;
@protocol SFWebPageStatusBarMessage;



@interface SFWebpageStatusBarView : UIView {
    UILabel *_statusLabel;
    UIView *_statusBarContentView;
    BOOL _shouldDodgeHoverPoint;
    NSTimer *_dismissStatusBarEnabledTimer;
}


@property (nonatomic) CGPoint hoverPoint; // ivar: _hoverPoint
@property (retain, nonatomic) NSObject<SFWebPageStatusBarMessage> *statusMessage; // ivar: _statusMessage
@property (nonatomic) BOOL suppressShowingStatusBar; // ivar: _suppressShowingStatusBar


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_originForStatusBarContentViewForContentHeight:(CGFloat)arg0 ;
-(void)_cancelPendingStatusBarHideIfNeeded;
-(void)_clearStatusBarIsEnabledMessage;
-(void)_hideStatusBar;
-(void)_showStatusBar;
-(void)clearStatus;
-(void)displayStatusBarIsEnabledMessage;
-(void)layoutSubviews;


@end


#endif