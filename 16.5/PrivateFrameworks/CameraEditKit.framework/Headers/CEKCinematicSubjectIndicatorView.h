// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEKCINEMATICSUBJECTINDICATORVIEW_H
#define CEKCINEMATICSUBJECTINDICATORVIEW_H

@class UIView, UIImageView, NSString;
@protocol CAAnimationDelegate;



@interface CEKCinematicSubjectIndicatorView : UIView <CAAnimationDelegate>



@property (nonatomic) int _activeAnimationToActiveRoundedRectCount; // ivar: __activeAnimationToActiveRoundedRectCount
@property (readonly, nonatomic) UIImageView *_bottomCrosshairView; // ivar: __bottomCrosshairView
@property (readonly, nonatomic) UIImageView *_bottomLeftCornerView; // ivar: __bottomLeftCornerView
@property (readonly, nonatomic) UIImageView *_bottomRightCornerView; // ivar: __bottomRightCornerView
@property (readonly, nonatomic) UIView *_containerView; // ivar: __containerView
@property (nonatomic) BOOL _crosshairsVisible; // ivar: __crosshairsVisible
@property (readonly, nonatomic) UIImageView *_leftCrosshairView; // ivar: __leftCrosshairView
@property (readonly, nonatomic) UIImageView *_rightCrosshairView; // ivar: __rightCrosshairView
@property (readonly, nonatomic) UIImageView *_topCrosshairView; // ivar: __topCrosshairView
@property (readonly, nonatomic) UIImageView *_topLeftCornerView; // ivar: __topLeftCornerView
@property (readonly, nonatomic) UIImageView *_topRightCornerView; // ivar: __topRightCornerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger shape; // ivar: _shape
@property (readonly) Class superclass;


+(id)_cornerImageWithResizableCapInsetsNamed:(id)arg0 ;
+(struct CGRect )minimumSuggestedBounds;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_performAnimationToActiveCorners;
-(void)_performAnimationToActiveRoundedRect;
-(void)_updateCornerImageViewsForThickness:(NSInteger)arg0 duration:(CGFloat)arg1 delay:(CGFloat)arg2 ;
-(void)_updateCornerViews;
-(void)_updateCrossHairViewsWithHeight:(CGFloat)arg0 ;
-(void)_updateVisibility;
-(void)layoutSubviews;


@end


#endif