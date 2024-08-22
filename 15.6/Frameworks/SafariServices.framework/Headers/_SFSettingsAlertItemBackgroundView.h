// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFSETTINGSALERTITEMBACKGROUNDVIEW_H
#define _SFSETTINGSALERTITEMBACKGROUNDVIEW_H

@class UIView, UIVisualEffectView, NSLayoutConstraint;



@interface _SFSettingsAlertItemBackgroundView : UIView {
    UIVisualEffectView *_highlightView;
    NSLayoutConstraint *_highlightToTopConstraint;
    NSLayoutConstraint *_highlightToBottomConstraint;
    NSLayoutConstraint *_highlightToLeadingConstraint;
    NSLayoutConstraint *_highlightToLeadingWithSpaceConstraint;
    NSLayoutConstraint *_highlightPixelWidthConstraint;
    NSLayoutConstraint *_highlightPixelHeightConstraint;
}


@property (nonatomic) NSInteger mode; // ivar: _mode


-(id)_highlightEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateConstraints;


@end


#endif