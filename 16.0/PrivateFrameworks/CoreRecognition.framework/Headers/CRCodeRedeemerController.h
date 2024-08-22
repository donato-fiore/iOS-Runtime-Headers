// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRCODEREDEEMERCONTROLLER_H
#define CRCODEREDEEMERCONTROLLER_H

@class NSString;
@protocol CRCameraReaderDelegate, CRCodeRedeemerControllerDelegate;


#import "CRCameraReader.h"

@interface CRCodeRedeemerController : CRCameraReader <CRCameraReaderDelegate>



@property (copy) NSString *cameraMode;
@property NSInteger cameraPosition;
@property NSUInteger captureCount;
@property (getter=isCaptureMode) BOOL captureMode;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<CRCodeRedeemerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property NSInteger exposureMode;
@property NSInteger focusMode;
@property (readonly) NSUInteger hash;
@property CGFloat sessionTimeout;
@property BOOL showDiagnosticHUD;
@property (readonly) Class superclass;
@property NSInteger torchMode;
@property NSInteger whiteBalanceMode;


+(NSUInteger)isCRCodeRedeemerAvailable;
+(id)findCodeInImage:(struct vImage_Buffer )arg0 maxStage:(NSUInteger)arg1 ;
+(id)findCodeInImage:(struct vImage_Buffer )arg0 maxStage:(NSUInteger)arg1 roi:(struct CGRect )arg2 ;
-(id)init;
-(void)cameraReader:(id)arg0 didFailWithError:(id)arg1 ;
-(void)cameraReader:(id)arg0 didRecognizeObjects:(id)arg1 ;
-(void)cameraReaderDidCancel:(id)arg0 ;
-(void)cameraReaderDidDisplayMessage:(id)arg0 ;
-(void)cameraReaderDidEnd:(id)arg0 ;
-(void)cameraReaderDidFindTarget:(id)arg0 ;
-(void)showMessage:(id)arg0 color:(id)arg1 style:(NSUInteger)arg2 duration:(CGFloat)arg3 ;


@end


#endif