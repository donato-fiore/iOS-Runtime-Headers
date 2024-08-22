// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSLIDEOVERTONGUEVIEW_H
#define SBSLIDEOVERTONGUEVIEW_H

@class UIView, UIImageView, MTMaterialView, UITapGestureRecognizer;
@protocol SBSlideOverTongueViewDelegate;



@interface SBSlideOverTongueView : UIView {
    UIView *_tongueContainerView;
    UIImageView *_chevronImageView;
    UIView *_tongueMaskView;
    MTMaterialView *_materialView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    CGSize _bitmapMaskSize;
}


@property (weak, nonatomic) NSObject<SBSlideOverTongueViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger direction; // ivar: _direction
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_updateContainerPosition;
-(void)_updateContainerTransform;
-(void)_updateSubviewCollapsedExpandedState;
-(void)layoutSubviews;


@end


#endif