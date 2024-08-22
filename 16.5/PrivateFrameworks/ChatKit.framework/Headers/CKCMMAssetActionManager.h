// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCMMASSETACTIONMANAGER_H
#define CKCMMASSETACTIONMANAGER_H

@class PXPhotoKitAssetActionManager, PXCMMSession;


#import "CKMediaObjectAssetActionManager.h"

@interface CKCMMAssetActionManager : PXPhotoKitAssetActionManager

@property (retain, nonatomic) CKMediaObjectAssetActionManager *messagesAssetActionManager; // ivar: _messagesAssetActionManager
@property (retain, nonatomic) id *photosAssetActionManager; // ivar: _photosAssetActionManager
@property (nonatomic) BOOL presentedFromInlineReply; // ivar: _presentedFromInlineReply
@property (retain, nonatomic) PXCMMSession *session; // ivar: _session


+(id)assetActionManagerWithCMMSession:(id)arg0 chatItem:(id)arg1 presentedFromInlineReply:(BOOL)arg2 chatActionHelper:(id)arg3 performerDelegate:(id)arg4 ;
-(BOOL)canPerformActionType:(id)arg0 ;
-(BOOL)shouldEnableActionType:(id)arg0 onAsset:(id)arg1 ;
-(BOOL)supportsActionType:(id)arg0 ;
-(NSUInteger)presentationSource;
-(id)_destinationActionManagerForActionType:(id)arg0 ;
-(id)actionPerformerForActionType:(id)arg0 ;
-(id)barButtonItemForActionType:(id)arg0 ;
-(id)previewActionForActionType:(id)arg0 image:(id)arg1 ;
-(void)_propagateObjectReference:(id)arg0 ;
-(void)_propagatePerformerDelegate:(id)arg0 ;
-(void)executeActionForActionType:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setAdditionalPropertiesFromActionManager:(id)arg0 ;
-(void)setObjectReference:(id)arg0 ;
-(void)setPerformerDelegate:(id)arg0 ;


@end


#endif