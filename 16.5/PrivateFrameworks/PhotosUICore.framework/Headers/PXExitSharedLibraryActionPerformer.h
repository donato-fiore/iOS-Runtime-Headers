// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXEXITSHAREDLIBRARYACTIONPERFORMER_H
#define PXEXITSHAREDLIBRARYACTIONPERFORMER_H

@class NSString;
@protocol PXSharedLibraryExitAssistantViewControllerDelegate, PXSharedLibrary;


#import "PXActionPerformer.h"

@interface PXExitSharedLibraryActionPerformer : PXActionPerformer <PXSharedLibraryExitAssistantViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger exitRetentionPolicy; // ivar: _exitRetentionPolicy
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PXSharedLibrary> *sharedLibraryOrPreview; // ivar: _sharedLibraryOrPreview
@property (nonatomic) BOOL shouldConfirmExit; // ivar: _shouldConfirmExit
@property (readonly) Class superclass;


-(id)init;
-(void)_beginExitWithExitAssistantViewController:(id)arg0 dismissalHandler:(id)arg1 ;
-(void)_handlePresentationErrorWithDismissalHandler:(id)arg0 ;
-(void)_performExitWithExitAssistantViewController:(id)arg0 dismissalHandler:(id)arg1 ;
-(void)_presentFailureAlertForSharedLibraryOrPreview:(id)arg0 error:(id)arg1 dismissalHandler:(id)arg2 ;
-(void)cancelExitAssistantViewController:(id)arg0 ;
-(void)completeExitAssistantViewController:(id)arg0 withExitRetentionPolicy:(NSInteger)arg1 ;
-(void)performActionWithSharedLibraryOrPreview:(id)arg0 shouldConfirmExit:(BOOL)arg1 exitRetentionPolicy:(NSInteger)arg2 presentationEnvironment:(id)arg3 completionHandler:(id)arg4 ;
-(void)performUserInteractionTask;


@end


#endif