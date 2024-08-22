// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPADDKEEPLOCALCONTROL_H
#define MPADDKEEPLOCALCONTROL_H

@class UIControl, UILabel, UIView, UIImageView, NSMutableDictionary, UIColor;


#import "MPDownloadProgressView.h"

@interface MPAddKeepLocalControl : UIControl {
    UILabel *_controlTitleLabel;
    UIView *_backgroundView;
    UIImageView *_controlImageView;
    NSMutableDictionary *_controlStatusTypeToTitle;
    NSInteger _controlStatusRevision;
    MPDownloadProgressView *_downloadProgressView;
    BOOL _hadFirstTouchHighlight;
    UIEdgeInsets _controlImageEdgeInsets;
    UIView *_transientContentView;
    NSInteger _transientContentViewTransactionCount;
    BOOL _traitCollectionDidChangeWasCalled;
}


@property (nonatomic) BOOL allowsAddImage; // ivar: _allowsAddImage
@property (nonatomic) MPAddKeepLocalControlStatus controlStatus; // ivar: _controlStatus
@property (nonatomic) NSInteger displayStyle; // ivar: _displayStyle
@property (retain, nonatomic) UIColor *filledTintColor; // ivar: _filledTintColor
@property (nonatomic) BOOL scaleImageForAccessibility; // ivar: _scaleImageForAccessibility


+(id)_imageNamed:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
+(id)_newControlTitleLabel;
+(id)controlTitleFontForControlStatusType:(NSInteger)arg0 ;
+(struct CGSize )_expectedSizeForControlStatusType:(NSInteger)arg0 controlTitle:(id)arg1 hasControlImage:(BOOL)arg2 displayScale:(CGFloat)arg3 preferredHeight:(CGFloat)arg4 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_currentContentSuperview;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)titleForControlStatusType:(NSInteger)arg0 ;
-(struct CGSize )maximumSizeWithPreferredHeight:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)_beginTransientContentViewTransaction;
-(void)_endTransientContentViewTransaction;
-(void)_removeAllAnimations:(BOOL)arg0 ;
-(void)_updateBackgroundViewCornerRadius;
-(void)_updateControlImageViewAnimation;
-(void)_updateControlStatusProperties;
-(void)_updateControlTitleLabelVisualProperties;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setContentHorizontalAlignment:(NSInteger)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 forControlStatusType:(NSInteger)arg1 ;
-(void)tintColorDidChange;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif