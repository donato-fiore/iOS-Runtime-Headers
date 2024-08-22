// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8ROOMPLAN15ROOMCAPTUREVIEW_H
#define _TTC8ROOMPLAN15ROOMCAPTUREVIEW_H

@class UIView, NSArray;



@interface _TtC8RoomPlan15RoomCaptureView : UIView {
    ? captureSession;
    ? delegate;
    ? isModelEnabled;
    ? $__lazy_storage_$_settingsManager;
    ? roomCaptureARView;
    ? worldSpaceManager;
    ? coachingOverlayView;
    ? roomCaptureSessionObserver;
    ? deltaTimeArray;
    ? isEndingCaptureSession;
    ? logPerimeterDirectoryPath;
    ? completeTransitionTime;
    ? sceneObserver;
    ? sceneShaderRenderer;
    ? viewOrientation;
    ? viewportSize;
    ? currentCameraTransform;
    ? roomBuilder;
    ? gradientLayer;
    ? isEncoding;
    ? strutPoints;
    ? $__lazy_storage_$_frameProcessor;
}


@property (nonatomic, retain) id *ibDelegate;
@property (nonatomic, readonly) NSArray *subviews;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif