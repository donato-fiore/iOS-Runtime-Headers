// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9COREIDVUI18IDSCANCAMERAREADER_H
#define _TTC9COREIDVUI18IDSCANCAMERAREADER_H

@class CRCameraReader;
@protocol CRCameraReaderDelegate;



@interface _TtC9CoreIDVUI18IDScanCameraReader : CRCameraReader <CRCameraReaderDelegate>

 {
    ? timer;
    ? fallBackTimeInSeconds;
    ? eligibilityHelper;
    ? didCaptureImage;
    ? shouldReturnImage;
    ? onError;
}




-(BOOL)cameraReader:(id)arg0 shouldReturnIDImage:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithOptions:(id)arg0 ;
-(void)cameraReader:(id)arg0 didFailWithError:(id)arg1 ;
-(void)cameraReader:(id)arg0 didRecognizeObjects:(id)arg1 ;
-(void)cameraReaderDidCancel:(id)arg0 ;
-(void)cameraReaderDidEnd:(id)arg0 ;
-(void)timerAction;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif