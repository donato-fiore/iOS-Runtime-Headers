// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCUNENROLLMENTFLOWUIPRESENTER_H
#define DMCUNENROLLMENTFLOWUIPRESENTER_H

@class NSString;
@protocol DMCUnenrollmentFlowPresenter;


#import "DMCEnrollmentFlowUIPresenterBase.h"

@interface DMCUnenrollmentFlowUIPresenter : DMCEnrollmentFlowUIPresenterBase <DMCUnenrollmentFlowPresenter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dismissUnenrollmentScene;
-(void)presentActivityPageForAppleMAID:(BOOL)arg0 ;
-(void)requestDevicePasscodeWithCompletionHandler:(id)arg0 ;
-(void)requestUserConfirmationIsAppleMAID:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif