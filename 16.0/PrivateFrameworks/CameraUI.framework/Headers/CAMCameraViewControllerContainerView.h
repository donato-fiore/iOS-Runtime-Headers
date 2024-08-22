// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMCAMERAVIEWCONTROLLERCONTAINERVIEW_H
#define CAMCAMERAVIEWCONTROLLERCONTAINERVIEW_H

@class UIView;



@interface CAMCameraViewControllerContainerView : UIView

@property (retain, nonatomic) UIView *additionalContentView; // ivar: _additionalContentView
@property (retain, nonatomic) UIView *customOverlayView; // ivar: _customOverlayView
@property (retain, nonatomic) UIView *viewfinderView; // ivar: _viewfinderView


+(Class)layerClass;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)_commonCAMCameraViewControllerContainerViewInitialization;
-(void)layoutSubviews;
-(void)verifyViewOrdering;


@end


#endif