// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCREDITCARDREADERVIEWCONTROLLER_H
#define SUCREDITCARDREADERVIEWCONTROLLER_H

@class UIViewController, CRCameraReader, NSString;
@protocol CRCameraReaderDelegate;


#import "SUCreditCardReaderInfoView.h"
#import "SUCreditCardReaderOutput.h"

@interface SUCreditCardReaderViewController : UIViewController <CRCameraReaderDelegate>

 {
    CRCameraReader *cameraController;
    SUCreditCardReaderInfoView *captureInfoView;
    SUCreditCardReaderOutput *pendingOutput;
}


@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)cameraSupported;
-(void)_cancelButtonPressed;
-(void)_returnCameraOutput:(id)arg0 error:(id)arg1 ;
-(void)cameraReader:(id)arg0 didFailWithError:(id)arg1 ;
-(void)cameraReader:(id)arg0 didRecognizeObjects:(id)arg1 ;
-(void)cameraReaderDidCancel:(id)arg0 ;
-(void)cameraReaderDidEnd:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif