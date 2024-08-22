// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKPRESENTATIONVIEWCONTROLLER_H
#define OKPRESENTATIONVIEWCONTROLLER_H

@class CMMotionManager, NSOperationQueue, CMAttitude;


#import "OKPresentationViewControllerProxy.h"
#import "OKRoundProgressView.h"
#import "OKUILabelHUDView.h"

@interface OKPresentationViewController : OKPresentationViewControllerProxy {
    CMMotionManager *_motionManager;
    NSInteger _motionOrientationReference;
    NSOperationQueue *_motionQueue;
    BOOL _shouldForwardMotion;
    CGFloat _motionLastRotationX;
    CGFloat _motionLastRotationY;
    CGFloat _motionLastRotationZ;
    OKRoundProgressView *_roundProgressView;
}


@property (retain, nonatomic) OKUILabelHUDView *couchLabelHUDView; // ivar: _couchLabelHUDView
@property (retain) CMAttitude *motionAttitudeReference; // ivar: _motionAttitudeReference


-(BOOL)isActivityIndicatorVisible;
-(id)colorSpace;
-(void)_startMotion;
-(void)_startPresentation;
-(void)_updateMotion:(NSInteger)arg0 ;
-(void)commonInit;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)motionBegan:(NSInteger)arg0 withEvent:(id)arg1 ;
-(void)motionCancelled:(NSInteger)arg0 withEvent:(id)arg1 ;
-(void)motionEnded:(NSInteger)arg0 withEvent:(id)arg1 ;
-(void)orientationChanged:(id)arg0 ;
-(void)setActivityIndicatorVisible:(BOOL)arg0 ;
-(void)updateActivityIndicatorWithProgress:(CGFloat)arg0 ;
-(void)updateMotion;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif