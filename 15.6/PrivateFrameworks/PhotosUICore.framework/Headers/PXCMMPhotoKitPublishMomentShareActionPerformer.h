// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMPHOTOKITPUBLISHMOMENTSHAREACTIONPERFORMER_H
#define PXCMMPHOTOKITPUBLISHMOMENTSHAREACTIONPERFORMER_H

@class UIAlertController, PHMomentShare, NSDate;


#import "PXCMMPublishActionPerformer.h"

@interface PXCMMPhotoKitPublishMomentShareActionPerformer : PXCMMPublishActionPerformer {
    UIAlertController *_progressAlertController;
    int _thumbnailRequestID;
    int _previewRequestID;
    PHMomentShare *_momentShare;
    BOOL _didFinalize;
    NSDate *_initialStartDate;
    NSDate *_previewRequestStartDate;
    NSDate *_creationRequestStartDate;
    NSDate *_publishStartDate;
    NSDate *_finishedDate;
}




-(void)_acceptSuggestion:(id)arg0 completionHandler:(id)arg1 ;
-(void)_budgetOverridePromptForMomentShare:(id)arg0 completedWithOutcome:(BOOL)arg1 error:(id)arg2 ;
-(void)_createMomentShare;
-(void)_createMomentShareWithCompletionHandler:(id)arg0 ;
-(void)_creatingMomentShareDidCompleteWithMomentShare:(id)arg0 error:(id)arg1 ;
-(void)_finalizePublishWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_handleSharingProgressCancellation;
-(void)_performCleanupIfNeeded;
-(void)_presentAlertControllerForCurrentCPLStateIfNeededWithCompletionHandler:(id)arg0 ;
-(void)_presentBudgetOverridePromptForMomentShare:(id)arg0 completionHandler:(id)arg1 ;
-(void)_presentInternalSharingAlert;
-(void)_publishMomentShare:(id)arg0 ;
-(void)_publishMomentShare:(id)arg0 completionHandler:(id)arg1 ;
-(void)_publishingMomentShare:(id)arg0 didCompleteWithShareURL:(id)arg1 error:(id)arg2 ;
-(void)_requestPreviewImageForAsset:(id)arg0 resultHandler:(id)arg1 ;
-(void)_setupSharingProgressController;
-(void)performUserInteractionTask;


@end


#endif