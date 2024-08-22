// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFWEBPAGESTATUSBARVIEW_H
#define SFWEBPAGESTATUSBARVIEW_H

@class UIView, UILabel, UIVisualEffectView;


#import "SFLinkHoverEvent.h"

@interface SFWebpageStatusBarView : UIView {
    UILabel *_statusLabel;
    UIVisualEffectView *_statusBarBackgroundView;
    UIView *_statusBarContentView;
    SFLinkHoverEvent *_currentHoverEvent;
    BOOL _isShowingStatus;
}


@property (nonatomic) CGPoint hoverPoint; // ivar: _hoverPoint
@property (nonatomic) BOOL suppressShowingStatusBar; // ivar: _suppressShowingStatusBar


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_originForStatusBarContentView;
-(void)hideStatusBar;
-(void)layoutSubviews;
-(void)showStatusBar;
-(void)updateWithHoverEvent:(id)arg0 ;


@end


#endif