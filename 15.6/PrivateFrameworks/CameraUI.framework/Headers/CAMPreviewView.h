// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMPREVIEWVIEW_H
#define CAMPREVIEWVIEW_H

@class UIView, UILabel, CEKSubjectIndicatorView, AVCaptureVideoPreviewLayer;


#import "CAMFocusIndicatorView.h"
#import "CAMGridView.h"
#import "CAMInterfaceModulationView.h"
#import "CAMLevelIndicatorView.h"
#import "CAMStageLightOverlayView.h"
#import "CAMVideoPreviewView.h"

@interface CAMPreviewView : UIView

@property (nonatomic) int _exposureBiasSide; // ivar: __exposureBiasSide
@property (readonly, nonatomic) UILabel *_simulatorLabel; // ivar: __simulatorLabel
@property (nonatomic) CGFloat bottomContentInset; // ivar: _bottomContentInset
@property (retain, nonatomic) CEKSubjectIndicatorView *centeredSubjectIndicatorView; // ivar: _centeredSubjectIndicatorView
@property (retain, nonatomic) CAMFocusIndicatorView *continuousIndicator; // ivar: _continuousIndicator
@property (nonatomic) CAMGridView *gridView; // ivar: _gridView
@property (nonatomic) NSInteger indicatorClippingStyle; // ivar: _indicatorClippingStyle
@property (readonly, nonatomic) CAMInterfaceModulationView *indicatorContainerView; // ivar: _indicatorContainerView
@property (nonatomic) CAMLevelIndicatorView *levelView; // ivar: _levelView
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) CGRect overlayFrame; // ivar: _overlayFrame
@property (retain, nonatomic) CAMFocusIndicatorView *pointIndicator; // ivar: _pointIndicator
@property (retain, nonatomic) CAMStageLightOverlayView *stageLightOverlayView; // ivar: _stageLightOverlayView
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (readonly, nonatomic) CAMVideoPreviewView *videoPreviewView; // ivar: _videoPreviewView
@property (nonatomic) CGRect viewportFrame; // ivar: _viewportFrame


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(int)_faceOrientationForRollAngle:(CGFloat)arg0 ;
-(struct CGPoint )captureDevicePointOfInterestForPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )pointForCaptureDevicePointOfInterest:(struct CGPoint )arg0 ;
-(struct CGRect )_aspectFaceRectFromSquareFaceRect:(struct CGRect )arg0 angle:(CGFloat)arg1 ;
-(struct CGRect )_frameClampedToBounds:(struct CGRect )arg0 ;
-(struct CGRect )_frameForAVMetadataObject:(id)arg0 ;
-(struct CGRect )faceIndicatorFrameForFaceResult:(id)arg0 ;
-(struct CGRect )fixedSizeSubjectIndicatorFrameForBodyResult:(id)arg0 ;
-(struct CGRect )fixedSizeSubjectIndicatorFrameForFaceResult:(id)arg0 ;
-(struct CGRect )frameForMetadataObjectResult:(id)arg0 ;
-(struct CGRect )frameForMetadataObjectResult:(id)arg0 fixedSize:(struct CGSize )arg1 ;
-(struct CGRect )frameForSubjectGroupResult:(id)arg0 minimumSize:(struct CGSize )arg1 ;
-(struct CGRect )frameForTextRegionResult:(id)arg0 ;
-(void)dealloc;
-(void)indicatePointOfInterest:(struct CGPoint )arg0 ;
-(void)layoutSubviews;


@end


#endif