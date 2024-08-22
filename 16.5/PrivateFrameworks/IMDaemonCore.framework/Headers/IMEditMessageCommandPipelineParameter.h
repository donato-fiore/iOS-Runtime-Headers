// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(id)initWithIdsTrustedData:(id)arg0 editCommandGUID:(id)arg1 timestamp:(id)arg2 isFromStorage:(BOOL)arg3 isLastFromStorage:(BOOL)arg4 editedMessageGUID:(id)arg5 editedMessagePartIndex:(NSInteger)arg6 editType:(NSUInteger)arg7 editedMessagePartBody:(id)arg8 editedMessagePartFileTransferGUIDs:(id)arg9 shouldRetractMessageSubject:(BOOL)arg10 hasEditTypeAndPartIndex:(BOOL)arg11 ;


@end


#endif