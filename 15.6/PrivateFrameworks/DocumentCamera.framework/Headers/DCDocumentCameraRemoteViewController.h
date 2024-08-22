// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCDOCUMENTCAMERAREMOTEVIEWCONTROLLER_H
#define DCDOCUMENTCAMERAREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, UIViewController<DCDocumentCameraPublicViewController>;
@protocol DCDocumentCameraRemoteViewController, DCDocumentCameraViewServiceViewController;



@interface DCDocumentCameraRemoteViewController : UIRemoteViewController <DCDocumentCameraRemoteViewController>



@property (weak, nonatomic) UIViewController<DCDocumentCameraPublicViewController> *publicViewController; // ivar: _publicViewController
@property (readonly, nonatomic, getter=viewServiceViewController) NSObject<DCDocumentCameraViewServiceViewController> *viewServiceViewController;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)didCancel:(id)arg0 ;
-(void)didFinishWithDocumentInfoCollection:(id)arg0 ;
-(void)dismiss;
-(void)viewControllerWasDismissed;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)viewServicePreferredSizeDidChange:(struct CGSize )arg0 ;


@end


#endif