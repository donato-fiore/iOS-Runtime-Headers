// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPUARTWORKVIEW_H
#define MPUARTWORKVIEW_H

@class UIImageView, NSLayoutConstraint, UIView, UIImage;



@interface MPUArtworkView : UIImageView {
    NSLayoutConstraint *_aspectConstraint;
    UIView *_highlightView;
    BOOL _isDeallocating;
}


@property (readonly, nonatomic) UIImage *_externalImage; // ivar: _externalImage
@property (nonatomic, getter=_aspectConstraintMultiplier, setter=_setAspectConstraintMultiplier:) CGFloat aspectConstraintMultiplier;
@property (nonatomic) BOOL automaticallyApplyAspectConstraints; // ivar: _automaticallyApplyAspectConstraints
@property (nonatomic) BOOL dimsWhenHighlighted; // ivar: _dimsWhenHighlighted
@property (nonatomic, getter=isDisplayingPlaceholder) BOOL displayingPlaceholder; // ivar: _displayingPlaceholder
@property (nonatomic) BOOL forcesAnimatedUnhighlighting; // ivar: _forcesAnimatedUnhighlighting
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (readonly, nonatomic) BOOL shouldDisplayPlaceholder;


-(BOOL)_shouldShowHighlightView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 ;
-(void)_imageDidChange;
-(void)_setPlaceholderHidden:(BOOL)arg0 ;
-(void)_updateHighlightViewAnimated:(BOOL)arg0 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setHighlightedAnimationImages:(id)arg0 ;
-(void)setHighlightedImage:(id)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)updateConstraints;


@end


#endif