// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNDOCUMENTCAMERAVIEWCONTROLLER_VIEWSERVICE_H
#define VNDOCUMENTCAMERAVIEWCONTROLLER_VIEWSERVICE_H

@class BKSAccelerometer, NSString;
@protocol BKSAccelerometerDelegate, DCDocumentCameraPublicViewController, DCDocumentCameraViewServiceViewController;


#import "VNDocumentCameraViewController.h"
#import "DCDocumentCameraRemoteViewController.h"
#import "DCDocumentCameraViewServiceSession.h"

@interface VNDocumentCameraViewController_ViewService : VNDocumentCameraViewController <BKSAccelerometerDelegate, DCDocumentCameraPublicViewController>



@property (retain, nonatomic) BKSAccelerometer *accelerometer; // ivar: _accelerometer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=remoteViewController) DCDocumentCameraRemoteViewController *remoteViewController;
@property (readonly) Class superclass;
@property (retain, nonatomic) DCDocumentCameraViewServiceSession *viewServiceSession; // ivar: _viewServiceSession
@property (readonly, nonatomic, getter=viewServiceViewController) NSObject<DCDocumentCameraViewServiceViewController> *viewServiceViewController;


-(id)castedChildViewController;
-(id)init;
-(void)accelerometer:(id)arg0 didAccelerateWithTimeStamp:(CGFloat)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 eventType:(int)arg5 ;
-(void)accelerometer:(id)arg0 didChangeDeviceOrientation:(NSInteger)arg1 ;
-(void)dealloc;
-(void)didCancel;
-(void)didFailWithError:(id)arg0 ;
-(void)didFinishWithDocumentInfoCollection:(id)arg0 ;
-(void)dismiss;
-(void)removeSaveActionBlockerForFiles;
-(void)viewDidLoad;
-(void)viewServicePreferredSizeDidChange:(struct CGSize )arg0 ;


@end


#endif