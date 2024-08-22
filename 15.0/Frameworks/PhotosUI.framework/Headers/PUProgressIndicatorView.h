// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPROGRESSINDICATORVIEW_H
#define PUPROGRESSINDICATORVIEW_H

@class UIView, UIActivityIndicatorView, PLRoundProgressView, UIVisualEffectView, UILabel, NSArray, NSString;



@interface PUProgressIndicatorView : UIView {
    UIActivityIndicatorView *_spinnerView;
    PLRoundProgressView *_pieProgressView;
    UIVisualEffectView *_visualEffectView;
    UILabel *_messageLabel;
    NSArray *_spinnerViewConstraints;
    NSArray *_pieProgressViewConstraints;
    NSArray *_backgroundViewConstraints;
    NSArray *_messageLabelConstraints;
    NSArray *_labelAndSpinnerConstraints;
    NSArray *_labelAndPieProgressConstraints;
    BOOL _wantsImmediateHide;
    BOOL _wantsAnimatedHide;
    id *_completionHandler;
}


@property (nonatomic, setter=_setCurrentState:) NSInteger _currentState; // ivar: __currentState
@property (nonatomic, setter=_setTimestampBeganShowing:) CGFloat _timestampBeganShowing; // ivar: __timestampBeganShowing
@property (nonatomic) CGFloat currentProgress; // ivar: _currentProgress
@property (readonly) CGFloat defaultProgressIndicatorDelay;
@property (nonatomic, setter=setDeterminate:) BOOL isDeterminate; // ivar: _isDeterminate
@property (readonly) BOOL isStyleCompactBackground;
@property (readonly) BOOL isStyleDark;
@property (copy, nonatomic) NSString *localizedMessage; // ivar: _localizedMessage
@property (readonly, nonatomic, getter=isShowingProgress) BOOL showingProgress;
@property (nonatomic) BOOL showsBackground; // ivar: _showsBackground
@property (readonly, nonatomic) NSInteger style; // ivar: _style


-(id)_newVisualEffectBackgroundView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_endShowingProgressIfReady;
-(void)_handleBeginShowingAnimated:(BOOL)arg0 wasImmediate:(BOOL)arg1 ;
-(void)_updatePieProgress;
-(void)_updateProgressViewsAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_updateProgressViewsWithAnimation:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_updateSubviewsOrdering;
-(void)beginShowingProgressImmediately:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)beginShowingProgressWithDelay:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)endShowingProgressImmediately:(BOOL)arg0 animated:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)updateConstraints;


@end


#endif