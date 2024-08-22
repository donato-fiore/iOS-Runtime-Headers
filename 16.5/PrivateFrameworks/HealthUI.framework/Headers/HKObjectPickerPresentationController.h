// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKOBJECTPICKERPRESENTATIONCONTROLLER_H
#define HKOBJECTPICKERPRESENTATIONCONTROLLER_H

@class NSString, _UIAsyncInvocation;
@protocol HKHealthPrivacyHostObjectPickerViewControllerDelegate, _HKObjectPickerPresentationController;

#import <Foundation/Foundation.h>

#import "HKHealthPrivacyHostObjectPickerViewController.h"

@interface HKObjectPickerPresentationController : NSObject <HKHealthPrivacyHostObjectPickerViewControllerDelegate, _HKObjectPickerPresentationController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPresent; // ivar: _didPresent
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthPrivacyHostObjectPickerViewController *hostViewController; // ivar: _hostViewController
@property (retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation; // ivar: _requestCancellationInvocation
@property (readonly) Class superclass;


-(void)_dismissViewControllerAnimated:(BOOL)arg0 ;
-(void)_makeRemoteViewControllerVisible:(id)arg0 ;
-(void)_presentWithPromptSession:(id)arg0 completion:(id)arg1 ;
// -(void)_requestAndConfigureHostViewController:(id)arg0 completion:(unk)arg1  ;
-(void)cancelPresentation;
-(void)dealloc;
-(void)healthPrivacyHostObjectPickerViewController:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)presentWithSession:(id)arg0 completion:(id)arg1 ;


@end


#endif