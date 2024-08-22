// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPPIPVIEWCONTROLLER_H
#define RPPIPVIEWCONTROLLER_H

@class UIViewController, AVCaptureSession, AVCaptureDevice, AVCaptureDeviceInput;



@interface RPPipViewController : UIViewController

@property (nonatomic) NSInteger cameraPosition; // ivar: _cameraPosition
@property (nonatomic) NSInteger initialOrientation; // ivar: _initialOrientation
@property (retain, nonatomic) AVCaptureSession *pipSession; // ivar: _pipSession
@property (nonatomic) NSInteger previousOrientation; // ivar: _previousOrientation
@property (nonatomic) CGFloat previousOrientationHeight; // ivar: _previousOrientationHeight
@property (nonatomic) CGFloat previousOrientationWidth; // ivar: _previousOrientationWidth
@property (retain, nonatomic) AVCaptureDevice *videoDevice; // ivar: _videoDevice
@property (retain, nonatomic) AVCaptureDeviceInput *videoInput; // ivar: _videoInput


-(NSInteger)_captureVideoOrientationForUIDeviceOrientation:(NSInteger)arg0 ;
-(id)_pipView;
-(id)cameraWithPosition:(NSInteger)arg0 ;
-(id)initWithOrientation:(NSInteger)arg0 position:(NSInteger)arg1 ;
-(void)_deviceOrientationDidChange;
-(void)_updateViewGeometry;
-(void)loadView;
-(void)setUpPipSession;
-(void)startPipSession;
-(void)stopPipSession;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif