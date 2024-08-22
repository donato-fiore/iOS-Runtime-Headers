// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPUMARQUEEVIEW_H
#define MPUMARQUEEVIEW_H

@class UIView, NSUUID, NSPointerArray, NSArray, NSString, CAGradientLayer;
@protocol CAAnimationDelegate, MPUMarqueeViewDelegate;


#import "MPUMarqueeView.h"

@interface MPUMarqueeView : UIView <CAAnimationDelegate>

 {
    NSUUID *_currentAnimationID;
    NSInteger _options;
    NSPointerArray *_coordinatedMarqueeViews;
    MPUMarqueeView *_primaryMarqueeView;
}


@property (nonatomic) NSInteger animationDirection; // ivar: _animationDirection
@property (weak, nonatomic) UIView *animationReferenceView; // ivar: _animationReferenceView
@property (nonatomic) CGFloat contentGap; // ivar: _contentGap
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) NSArray *coordinatedMarqueeViews;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPUMarqueeViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets fadeEdgeInsets; // ivar: _fadeEdgeInsets
@property (readonly, nonatomic) CAGradientLayer *gradientLayer;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat marqueeDelay; // ivar: _marqueeDelay
@property (nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled; // ivar: _marqueeEnabled
@property (nonatomic) CGFloat marqueeScrollRate; // ivar: _marqueeScrollRate
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *viewForContentSize; // ivar: _viewForContentSize


-(BOOL)_contentFits;
-(CGFloat)_duration;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(void)_applyMarqueeFade;
-(void)_createMarqueeAnimationIfNeeded;
-(void)_createMarqueeAnimationIfNeededWithMaximumDuration:(CGFloat)arg0 beginTime:(CGFloat)arg1 ;
-(void)_tearDownMarqueeAnimation;
-(void)addCoordinatedMarqueeView:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)invalidateIntrinsicContentSize;
-(void)layoutSubviews;
-(void)resetMarqueePosition;
-(void)sceneDidEnterBackgroundNotification:(id)arg0 ;
-(void)sceneWillEnterForegroundNotification:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif