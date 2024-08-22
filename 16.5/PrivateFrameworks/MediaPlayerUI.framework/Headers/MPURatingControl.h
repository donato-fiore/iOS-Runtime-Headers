// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPURATINGCONTROL_H
#define MPURATINGCONTROL_H

@class UIControl, UITapGestureRecognizer, UIPanGestureRecognizer, NSMutableArray;
@protocol MPURatingControlDelegate;



@interface MPURatingControl : UIControl {
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSMutableArray *_imageViews;
}


@property (weak, nonatomic) NSObject<MPURatingControlDelegate> *delegate; // ivar: _delegate
@property (nonatomic) UIEdgeInsets hitTestEdgeInsets; // ivar: _hitTestEdgeInsets
@property (nonatomic) CGFloat rating; // ivar: _rating


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)ratingValueForLocationInView:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_handleTapGesture:(id)arg0 ;
-(void)_updateImageView:(id)arg0 proposedImage:(id)arg1 filled:(BOOL)arg2 ;
-(void)_updateImageViewsForRatingAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)viewDidMoveToSuperview;


@end


#endif