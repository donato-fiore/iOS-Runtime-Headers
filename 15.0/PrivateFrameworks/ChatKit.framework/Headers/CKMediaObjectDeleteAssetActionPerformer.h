// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMEDIAOBJECTDELETEASSETACTIONPERFORMER_H
#define CKMEDIAOBJECTDELETEASSETACTIONPERFORMER_H



#import "CKMediaObjectAssetActionPerformer.h"

@interface CKMediaObjectDeleteAssetActionPerformer : CKMediaObjectAssetActionPerformer



+(BOOL)canPerformOnImplicitSelection;
+(BOOL)canPerformWithActionManager:(id)arg0 ;
+(id)createPreviewActionWithActionManager:(id)arg0 handler:(id)arg1 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)systemImageNameForActionManager:(id)arg0 ;
-(void)_presentDeleteConfirmationDialogForItemCount:(NSInteger)arg0 mediaSuffix:(id)arg1 completionHandler:(id)arg2 ;
-(void)performUserInteractionTask;


@end


#endif