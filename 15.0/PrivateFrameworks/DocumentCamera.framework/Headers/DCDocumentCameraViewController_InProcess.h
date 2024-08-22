// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCDOCUMENTCAMERAVIEWCONTROLLER_INPROCESS_H
#define DCDOCUMENTCAMERAVIEWCONTROLLER_INPROCESS_H

@class NSString;
@protocol ICDocCamViewControllerDelegate;


#import "DCDocumentCameraViewController.h"
#import "ICDocCamViewController.h"

@interface DCDocumentCameraViewController_InProcess : DCDocumentCameraViewController <ICDocCamViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) ICDocCamViewController *viewController; // ivar: _viewController


-(BOOL)documentCameraController:(id)arg0 canAddImages:(NSUInteger)arg1 ;
-(NSInteger)_preferredModalPresentationStyle;
-(id)documentCameraControllerCreateDataCryptorIfNecessary;
-(id)initWithDelegate:(id)arg0 ;
-(id)scanDataDelegateWithIdentifier:(id)arg0 ;
-(void)_autoDismiss;
-(void)didReceiveMemoryWarning;
-(void)documentCameraController:(id)arg0 didFinishWithDocInfoCollection:(id)arg1 imageCache:(id)arg2 warnUser:(BOOL)arg3 ;
-(void)documentCameraController:(id)arg0 didFinishWithImage:(id)arg1 ;
-(void)documentCameraControllerDidCancel:(id)arg0 ;


@end


#endif