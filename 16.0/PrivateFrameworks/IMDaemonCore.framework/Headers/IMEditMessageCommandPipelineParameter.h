// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMEDITMESSAGECOMMANDPIPELINEPARAMETER_H
#define IMEDITMESSAGECOMMANDPIPELINEPARAMETER_H

@class NSString, NSAttributedString, NSArray, NSNumber;
@protocol IMEditMessageCommandProcessingParameter, IMMessageFromStorageParameter;

#import <Foundation/Foundation.h>

#import "IMDChat.h"
#import "IMDiMessageIDSTrustedData.h"

@interface IMEditMessageCommandPipelineParameter : NSObject <IMEditMessageCommandProcessingParameter, IMMessageFromStorageParameter>



@property (retain, nonatomic) IMDChat *chat; // ivar: _chat
@property (readonly, nonatomic) NSString *editCommandGUID; // ivar: _editCommandGUID
@property (readonly, nonatomic) NSUInteger editType; // ivar: _editType
@property (readonly, nonatomic) NSString *editedMessageGUID; // ivar: _editedMessageGUID
@property (readonly, nonatomic) NSAttributedString *editedMessagePartBody; // ivar: _editedMessagePartBody
@property (readonly, nonatomic) NSArray *editedMessagePartFileTransferGUIDs; // ivar: _editedMessagePartFileTransferGUIDs
@property (readonly, nonatomic) NSInteger editedMessagePartIndex; // ivar: _editedMessagePartIndex
@property (readonly, nonatomic) NSAttributedString *fullMessageBody; // ivar: _fullMessageBody
@property (readonly, nonatomic) NSArray *fullMessageFileTransferGUIDs; // ivar: _fullMessageFileTransferGUIDs
@property (readonly, nonatomic) NSString *fullMessagePlainTextBody; // ivar: _fullMessagePlainTextBody
@property (readonly, nonatomic) NSString *fullMessagePlainTextSubject; // ivar: _fullMessagePlainTextSubject
@property (readonly, nonatomic) BOOL hasEditTypeAndPartIndex; // ivar: _hasEditTypeAndPartIndex
@property (readonly, nonatomic) IMDiMessageIDSTrustedData *idsTrustedData; // ivar: _idsTrustedData
@property (readonly, nonatomic) BOOL isFromStorage; // ivar: _isFromStorage
@property (readonly, nonatomic) BOOL isLastFromStorage; // ivar: _isLastFromStorage
@property (copy, nonatomic) NSArray *messageItems; // ivar: _messageItems
@property (readonly, nonatomic) BOOL shouldRetractMessageSubject; // ivar: _shouldRetractMessageSubject
@property (readonly, nonatomic) NSNumber *timestamp; // ivar: _timestamp


-(NSUInteger)_messageItemEditTypeForBlastdoorEditType:(NSInteger)arg0 ;
-(id)GUID;
-(id)_createSuperFormattedStringWithAttributedString:(id)arg0 ;
-(id)_existingFileTransfersForMessageGuid:(id)arg0 ;
-(id)description;
-(id)initWithDefusedMessage:(id)arg0 idsTrustedData:(id)arg1 ;
-(id)initWithIdsTrustedData:(id)arg0 editCommandGUID:(id)arg1 timestamp:(id)arg2 isFromStorage:(BOOL)arg3 isLastFromStorage:(BOOL)arg4 fullMessageBody:(id)arg5 fullMessagePlainTextBody:(id)arg6 fullMessagePlainTextSubject:(id)arg7 fullMessageFileTransferGUIDs:(id)arg8 editedMessageGUID:(id)arg9 editedMessagePartIndex:(NSInteger)arg10 editType:(NSUInteger)arg11 editedMessagePartBody:(id)arg12 editedMessagePartFileTransferGUIDs:(id)arg13 shouldRetractMessageSubject:(BOOL)arg14 hasEditTypeAndPartIndex:(BOOL)arg15 ;


@end


#endif