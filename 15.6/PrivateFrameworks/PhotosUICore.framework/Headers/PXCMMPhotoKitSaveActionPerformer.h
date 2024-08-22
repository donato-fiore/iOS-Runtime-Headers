// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMPHOTOKITSAVEACTIONPERFORMER_H
#define PXCMMPHOTOKITSAVEACTIONPERFORMER_H

@protocol PXCMMPhotoKitActionPerformer;


#import "PXCMMActionPerformer.h"
#import "PXCMMPhotoKitSession.h"

@interface PXCMMPhotoKitSaveActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>



@property (readonly, nonatomic) PXCMMPhotoKitSession *session;


+(id)sharedSavingWorkerQueue;
-(BOOL)isCancellable;
-(id)createActionProgress;
-(void)_completeSavingForAssets:(id)arg0 count:(NSInteger)arg1 ;
-(void)performUserInteractionTask;


@end


#endif