// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNDOCUMENTCAMERAVIEWCONTROLLER_INPROCESS_H
#define VNDOCUMENTCAMERAVIEWCONTROLLER_INPROCESS_H

@class NSString;
@protocol ICDocCamViewControllerDelegate;


#import "VNDocumentCameraViewController.h"
#import "ICDocCamViewController.h"

@interface VNDocumentCameraViewController_InProcess : VNDocumentCameraViewController <ICDocCamViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) ICDocCamViewController *viewController; // ivar: _viewController


-(BOOL)documentCameraController:(id)arg0 canAddImages:(NSUInteger)arg1 ;
-(NSInteger)_preferredModalPresentationStyle;
-(id)documentCameraControllerCreateDataCryptorIfNecessary;
-(id)init;
-(id)scanDataDelegateWithIdentifier:(id)arg0 ;
-(void)_autoDismiss;
-(void)didReceiveMemoryWarning;
-(void)documentCameraController:(id)arg0 didFinishWithDocInfoCollection:(id)arg1 imageCache:(id)arg2 warnUser:(BOOL)arg3 ;
-(void)documentCameraController:(id)arg0 didFinishWithImage:(id)arg1 ;
-(void)documentCameraControllerDidCancel:(id)arg0 ;


@end


#endif