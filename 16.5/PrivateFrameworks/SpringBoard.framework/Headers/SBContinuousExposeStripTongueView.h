// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSESTRIPTONGUEVIEW_H
#define SBCONTINUOUSEXPOSESTRIPTONGUEVIEW_H

@class UIView, UIImageView, _UIBackdropView, UITapGestureRecognizer;
@protocol SBContinuousExposeStripTongueViewDelegate;



@interface SBContinuousExposeStripTongueView : UIView {
    UIView *_tongueContainerView;
    UIImageView *_chevronImageView;
    UIView *_tongueMaskView;
    _UIBackdropView *_backdropView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    CGSize _bitmapMaskSize;
}


@property (readonly, nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (readonly, nonatomic) SBSwitcherContinuousExposeStripTongueAttributes attributes; // ivar: _attributes
@property (weak, nonatomic) NSObject<SBContinuousExposeStripTongueViewDelegate> *delegate; // ivar: _delegate


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_updateContainerPosition;
-(void)_updateContainerTransform;
-(void)_updateSubviewLayoutForCollapsedOrExpandedState;
-(void)_updateSubviewOpacityForCollapsedOrExpandedState;
-(void)layoutSubviews;


@end


#endif