// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOKITREMOVESHARINGSUGGESTIONASSETACTIONPERFORMER_H
#define PUPHOTOKITREMOVESHARINGSUGGESTIONASSETACTIONPERFORMER_H

@class NSString;
@protocol PUAssetActionPerformerDelegate;


#import "PUPXPhotoKitActionPerformerAdapter.h"
#import "PUPhotoKitTrashActionPerformer.h"

@interface PUPhotoKitRemoveSharingSuggestionAssetActionPerformer : PUPXPhotoKitActionPerformerAdapter <PUAssetActionPerformerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PUPhotoKitTrashActionPerformer *trashActionPerformer; // ivar: _trashActionPerformer


+(Class)pxActionPerformerClass;
-(BOOL)assetActionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)assetActionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(id)pxActionType;
-(id)undoManagerForAssetActionPerformer:(id)arg0 ;
-(void)_performTrashTask;
-(void)performUserInteractionTask;


@end


#endif