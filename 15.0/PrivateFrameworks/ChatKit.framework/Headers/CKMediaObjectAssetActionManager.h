// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMEDIAOBJECTASSETACTIONMANAGER_H
#define CKMEDIAOBJECTASSETACTIONMANAGER_H

@class PXAssetActionManager, UIMenu, NSString, NSMutableDictionary;
@protocol CKMediaObjectAssetMenuBuilderDelegate, CKMediaObjectAssetActionHelper;


#import "CKMediaObjectAssetMenuBuilder.h"
#import "CKMessagePartChatItem.h"

@interface CKMediaObjectAssetActionManager : PXAssetActionManager <CKMediaObjectAssetMenuBuilderDelegate>

 {
    CKMediaObjectAssetMenuBuilder *_menuBuilder;
}


@property (readonly, nonatomic) UIMenu *actionContextMenu;
@property (readonly, weak, nonatomic) NSObject<CKMediaObjectAssetActionHelper> *chatActionHelper; // ivar: _chatActionHelper
@property (readonly, nonatomic) CKMessagePartChatItem *chatItem; // ivar: _chatItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *performerClassByType; // ivar: _performerClassByType
@property (readonly) Class superclass;


-(BOOL)canPerformActionType:(id)arg0 ;
-(BOOL)supportsActionType:(id)arg0 ;
-(BOOL)supportsContextMenu;
-(SEL)_barButtonSelectorByActionType:(id)arg0 ;
-(id)_contextMenuForChatItems:(id)arg0 cursorChatItem:(id)arg1 ;
-(id)_selectionSnapshotForPerformerClass:(Class)arg0 ;
-(id)actionPerformerForActionType:(id)arg0 ;
-(id)barButtonItemForActionType:(id)arg0 ;
-(id)contextMenu;
-(id)initWithChatItem:(id)arg0 chatActionHelper:(id)arg1 selectionManager:(id)arg2 ;
-(id)previewActionForActionType:(id)arg0 ;
-(id)previewActionForActionType:(id)arg0 image:(id)arg1 ;
-(void)_handleAddToLibraryBarButtonItem:(id)arg0 ;
-(void)_handleDeleteBarButtonItem:(id)arg0 ;
-(void)_handlePreviewAction:(id)arg0 actionType:(id)arg1 ;
-(void)_handleReplyBarButtonItem:(id)arg0 ;
-(void)executeActionForActionType:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)menuBuilder:(id)arg0 copyChatItems:(id)arg1 ;
-(void)menuBuilder:(id)arg0 forwardChatItems:(id)arg1 ;
-(void)menuBuilder:(id)arg0 quickLookChatItem:(id)arg1 ;
-(void)menuBuilder:(id)arg0 replyChatItem:(id)arg1 ;
-(void)menuBuilder:(id)arg0 tapbackChatItem:(id)arg1 ;


@end


#endif