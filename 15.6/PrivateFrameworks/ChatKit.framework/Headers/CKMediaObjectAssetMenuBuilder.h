// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMEDIAOBJECTASSETMENUBUILDER_H
#define CKMEDIAOBJECTASSETMENUBUILDER_H

@protocol CKMediaObjectAssetMenuBuilderDelegate;

#import <Foundation/Foundation.h>


@interface CKMediaObjectAssetMenuBuilder : NSObject

@property (weak, nonatomic) NSObject<CKMediaObjectAssetMenuBuilderDelegate> *delegate; // ivar: _delegate


-(id)_copyActionForChatItems:(id)arg0 ;
-(id)_deleteMenuForChatItems:(id)arg0 ;
-(id)_exportActionForChatItems:(id)arg0 ;
-(id)_exportMenuForChatItem:(id)arg0 ;
-(id)_forwardActionForChatItems:(id)arg0 ;
-(id)_forwardAndCopyMenuForChatItems:(id)arg0 ;
-(id)_openActionForChatItems:(id)arg0 ;
-(id)_quickLookActionForChatItems:(id)arg0 cursorChatItem:(id)arg1 ;
-(id)_quickLookAndOpenActionsForChatItems:(id)arg0 cursorChatItem:(id)arg1 ;
-(id)_quickLookAndOpenMenuForChatItems:(id)arg0 cursorChatItem:(id)arg1 ;
-(id)_replyActionForChatItem:(id)arg0 ;
-(id)_tapbackActionForChatItem:(id)arg0 ;
-(id)_tapbackAndReplyMenuForChatItems:(id)arg0 ;
-(id)contextMenuForChatItems:(id)arg0 cursorChatItem:(id)arg1 isCMM:(BOOL)arg2 ;
-(void)_copyChatItems:(id)arg0 ;
-(void)_deleteChatItems:(id)arg0 ;
-(void)_forwardChatItems:(id)arg0 ;
-(void)_openFile:(id)arg0 ;
-(void)_openFiles:(id)arg0 ;
-(void)_quickLookChatItem:(id)arg0 ;
-(void)_replyToChatItem:(id)arg0 ;
-(void)_tapbackChatItem:(id)arg0 ;


@end


#endif