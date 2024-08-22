// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXEXITSHAREDLIBRARYACTIONPERFORMER_H
#define PXEXITSHAREDLIBRARYACTIONPERFORMER_H

@class NSString;
@protocol PXAssistantControllerDelegate, PXSharedLibrary;


#import "PXActionPerformer.h"

@interface PXExitSharedLibraryActionPerformer : PXActionPerformer <PXAssistantControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSInteger exitRetentionPolicy; // ivar: _exitRetentionPolicy
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PXSharedLibrary> *sharedLibraryOrPreview; // ivar: _sharedLibraryOrPreview
@property BOOL shouldConfirmExit; // ivar: _shouldConfirmExit
@property (readonly) Class superclass;


-(id)init;
-(void)_beginExitWithContext:(id)arg0 dismissalHandler:(id)arg1 ;
-(void)_handlePresentationErrorWithDismissalHandler:(id)arg0 ;
-(void)_handleUserCancellationWithDismissalHandler:(id)arg0 ;
-(void)_performExitWithContext:(id)arg0 dismissalHandler:(id)arg1 ;
-(void)_presentFailureAlertForSharedLibraryOrPreview:(id)arg0 error:(id)arg1 dismissalHandler:(id)arg2 ;
-(void)assistantController:(id)arg0 completedWithError:(id)arg1 ;
-(void)performActionWithSharedLibraryOrPreview:(id)arg0 shouldConfirmExit:(BOOL)arg1 exitRetentionPolicy:(NSInteger)arg2 presentationEnvironment:(id)arg3 completionHandler:(id)arg4 ;
-(void)performUserInteractionTask;


@end


#endif