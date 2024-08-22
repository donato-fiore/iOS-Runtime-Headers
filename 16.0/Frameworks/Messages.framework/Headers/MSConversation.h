// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCONVERSATION_H
#define MSCONVERSATION_H

@class NSString, NSArray, NSData, NSUUID;
@protocol MSConversationDelegate;

#import <Foundation/Foundation.h>

#import "_MSMessageAppContext.h"
#import "MSMessage.h"

@interface MSConversation : NSObject

@property (retain, nonatomic) _MSMessageAppContext *context; // ivar: _context
@property (readonly, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (weak, nonatomic) NSObject<MSConversationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSArray *draftAssetArchives; // ivar: _draftAssetArchives
@property (readonly, nonatomic) NSData *engramID; // ivar: _engramID
@property (readonly, nonatomic) NSString *iMessageLoginID; // ivar: _iMessageLoginID
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUUID *localParticipantIdentifier; // ivar: _localParticipantIdentifier
@property (readonly, nonatomic) NSArray *recipientAddresses; // ivar: _recipientAddresses
@property (retain, nonatomic) NSArray *remoteParticipantIdentifiers; // ivar: _remoteParticipantIdentifiers
@property (retain, nonatomic) MSMessage *selectedMessage; // ivar: _selectedMessage
@property (readonly, nonatomic) NSString *senderAddress; // ivar: _senderAddress


+(id)activeConversation;
-(id)_initWithState:(id)arg0 context:(id)arg1 ;
-(id)inputMessagePayload;
-(id)recipientIdentifiers;
-(id)senderIdentifier;
-(void)_insertAssetArchive:(id)arg0 completionHandler:(id)arg1 ;
-(void)_insertAssetArchive:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_insertAttachment:(id)arg0 adamID:(id)arg1 appName:(id)arg2 completionHandler:(id)arg3 ;
-(void)_insertAttachment:(id)arg0 withAlternateFilename:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_insertMessage:(id)arg0 localizedChangeDescription:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_insertMessage:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_insertRichLink:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_insertSticker:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_insertText:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_removeAssetArchiveWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)_sendAssetArchive:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateWithState:(id)arg0 ;
-(void)insertAttachment:(id)arg0 withAlternateFilename:(id)arg1 completionHandler:(id)arg2 ;
-(void)insertImage:(id)arg0 completionHandler:(id)arg1 ;
-(void)insertMediaAtURL:(id)arg0 attributionURL:(id)arg1 attributionIcon:(id)arg2 completionHandler:(id)arg3 ;
-(void)insertMediaAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)insertMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)insertMessage:(id)arg0 localizedChangeDescription:(id)arg1 completionHandler:(id)arg2 ;
-(void)insertRichLink:(id)arg0 completionHandler:(id)arg1 ;
-(void)insertSticker:(id)arg0 completionHandler:(id)arg1 ;
-(void)insertStickerWithImage:(id)arg0 completionHandler:(id)arg1 ;
-(void)insertStickerWithMediaAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)insertText:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendAttachment:(id)arg0 withAlternateFilename:(id)arg1 completionHandler:(id)arg2 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendMessage:(id)arg0 localizedChangeDescription:(id)arg1 completionHandler:(id)arg2 ;
-(void)sendRichLink:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendSticker:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendText:(id)arg0 completionHandler:(id)arg1 ;
-(void)stageMessage:(id)arg0 localizedChangeDescription:(id)arg1 completionHandler:(id)arg2 ;
-(void)unstageAllItems;
-(void)updateMessagePayload:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif