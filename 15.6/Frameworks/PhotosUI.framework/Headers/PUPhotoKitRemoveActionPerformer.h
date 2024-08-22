// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOKITREMOVEACTIONPERFORMER_H
#define PUPHOTOKITREMOVEACTIONPERFORMER_H

@class NSString, NSDictionary;
@protocol PUAssetActionPerformerDelegate;


#import "PUPhotoKitActionPerformer.h"
#import "PUPhotoKitTrashActionPerformer.h"

@interface PUPhotoKitRemoveActionPerformer : PUPhotoKitActionPerformer <PUAssetActionPerformerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *fetchResultsByAssetCollection; // ivar: _fetchResultsByAssetCollection
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldShowConfirmation;
@property (readonly) Class superclass;
@property (retain, nonatomic) PUPhotoKitTrashActionPerformer *trashActionPerformer; // ivar: _trashActionPerformer


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(BOOL)assetActionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)assetActionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(void)_performTrashTask;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif