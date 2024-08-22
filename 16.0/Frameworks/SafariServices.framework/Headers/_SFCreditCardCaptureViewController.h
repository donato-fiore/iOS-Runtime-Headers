// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFCREDITCARDCAPTUREVIEWCONTROLLER_H
#define _SFCREDITCARDCAPTUREVIEWCONTROLLER_H

@class UINavigationController, CRCameraReader, WBSCreditCardData, NSString;
@protocol CRCameraReaderDelegate, _SFCreditCardCaptureViewControllerDelegate;



@interface _SFCreditCardCaptureViewController : UINavigationController <CRCameraReaderDelegate>

 {
    CRCameraReader *_reader;
    WBSCreditCardData *_receivedCardData;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFCreditCardCaptureViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canCapture;
-(id)init;
-(void)_cancel:(id)arg0 ;
-(void)cameraReader:(id)arg0 didFailWithError:(id)arg1 ;
-(void)cameraReader:(id)arg0 didRecognizeObjects:(id)arg1 ;
-(void)cameraReaderDidCancel:(id)arg0 ;
-(void)cameraReaderDidEnd:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif