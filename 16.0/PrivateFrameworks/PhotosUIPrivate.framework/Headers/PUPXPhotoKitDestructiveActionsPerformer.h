// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPXPHOTOKITDESTRUCTIVEACTIONSPERFORMER_H
#define PUPXPHOTOKITDESTRUCTIVEACTIONSPERFORMER_H

@class PXPhotoKitAssetActionPerformer, NSString;
@protocol PUDeletePhotosActionControllerDelegate;



@interface PUPXPhotoKitDestructiveActionsPerformer : PXPhotoKitAssetActionPerformer <PUDeletePhotosActionControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isCancellable;
-(NSInteger)destructivePhotosAction;
-(void)_logCompletionAnalyticsForAssets:(id)arg0 withAction:(NSInteger)arg1 ;
-(void)_presentAllDuplicatesDeletionAlertWithCompletion:(id)arg0 ;
-(void)deletePhotosActionController:(id)arg0 presentConfirmationViewController:(id)arg1 ;
-(void)performUserInteractionTask;


@end


#endif