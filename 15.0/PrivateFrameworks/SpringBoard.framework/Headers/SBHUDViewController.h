// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHUDVIEWCONTROLLER_H
#define SBHUDVIEWCONTROLLER_H

@class SBFTouchPassThroughViewController, UIImageView, _UIBackdropView, UIView, NSString, UIImage;
@protocol UIViewControllerTransitioningDelegate, SBHUDViewControlling;



@interface SBHUDViewController : SBFTouchPassThroughViewController <UIViewControllerTransitioningDelegate, SBHUDViewControlling>



@property (readonly, nonatomic) UIImageView *backdropMaskImageView; // ivar: _backdropMaskImageView
@property (readonly, nonatomic) _UIBackdropView *backdropView; // ivar: _backdropView
@property (readonly, nonatomic) UIView *blockView; // ivar: _blockView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *hudView; // ivar: _hudView
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic) BOOL showsProgress; // ivar: _showsProgress
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) CGFloat visibilityProgress; // ivar: _visibilityProgress


-(BOOL)definesAnimatedDismissal;
-(BOOL)displaysLabel;
-(id)_blockColorForValue:(float)arg0 ;
-(void)_rotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)_updateBackdropMask;
-(void)_updateBlockView;
-(void)dismissAnimatedWithCompletion:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif