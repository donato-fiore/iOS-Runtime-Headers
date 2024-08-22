// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCHATSESSIONCLOSEPIPELINEPARAMETER_H
#define IMCHATSESSIONCLOSEPIPELINEPARAMETER_H

@class NSString, NSArray, NSNumber;
@protocol IMChatSessionCloseProcessingParameter, IMMessageFromStorageParameter;

#import <Foundation/Foundation.h>

#import "IMDChat.h"

@interface IMChatSessionClosePipelineParameter : NSObject <IMChatSessionCloseProcessingParameter, IMMessageFromStorageParameter>



@property (copy, nonatomic) NSString *GUID; // ivar: _GUID
@property (retain, nonatomic) IMDChat *chat; // ivar: _chat
@property (copy, nonatomic) NSString *conversationID; // ivar: _conversationID
@property (nonatomic) BOOL isFromStorage; // ivar: _isFromStorage
@property (nonatomic) BOOL isLastFromStorage; // ivar: _isLastFromStorage
@property (retain, nonatomic) NSArray *messageItems; // ivar: _messageItems
@property (copy, nonatomic) NSString *senderHandle; // ivar: _senderHandle
@property (copy, nonatomic) NSString *senderName; // ivar: _senderName
@property (retain, nonatomic) NSNumber *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSNumber *version; // ivar: _version


-(id)description;
-(id)initWithDefusedMessage:(id)arg0 ;


@end


#endif