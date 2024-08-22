// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUVIDEOLISTASSETEXPUNGEACTIONPERFORMER_H
#define PUVIDEOLISTASSETEXPUNGEACTIONPERFORMER_H

@class NSString;
@protocol PUDeletePhotosActionControllerDelegate, PUVideoListAssetExpungeActionPerformerDelegate;


#import "PUAssetActionPerformer.h"

@interface PUVideoListAssetExpungeActionPerformer : PUAssetActionPerformer <PUDeletePhotosActionControllerDelegate>



@property (weak, nonatomic) NSObject<PUVideoListAssetExpungeActionPerformerDelegate> *actionPerformerDelegate; // ivar: _actionPerformerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
+(BOOL)shouldEnableOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(void)_performUserInteractionTask;
-(void)deletePhotosActionController:(id)arg0 dismissConfirmationViewController:(id)arg1 ;
-(void)deletePhotosActionController:(id)arg0 presentConfirmationViewController:(id)arg1 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif