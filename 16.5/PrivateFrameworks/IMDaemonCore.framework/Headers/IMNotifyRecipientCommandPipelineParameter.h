// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMNOTIFYRECIPIENTCOMMANDPIPELINEPARAMETER_H
#define IMNOTIFYRECIPIENTCOMMANDPIPELINEPARAMETER_H

@class NSString, NSArray, NSNumber;
@protocol IMNotifyRecipientCommandProcessingParameter, IMMessageFromStorageParameter;

#import <Foundation/Foundation.h>

#import "IMDChat.h"
#import "IMDiMessageIDSTrustedData.h"

@interface IMNotifyRecipientCommandPipelineParameter : NSObject <IMNotifyRecipientCommandProcessingParameter, IMMessageFromStorageParameter>



@property (readonly, nonatomic) NSString *GUID; // ivar: _GUID
@property (retain, nonatomic) IMDChat *chat; // ivar: _chat
@property (readonly, nonatomic) IMDiMessageIDSTrustedData *idsTrustedData; // ivar: _idsTrustedData
@property (readonly, nonatomic) BOOL isFromStorage; // ivar: _isFromStorage
@property (readonly, nonatomic) BOOL isLastFromStorage; // ivar: _isLastFromStorage
@property (copy, nonatomic) NSArray *messageItems; // ivar: _messageItems
@property (readonly, nonatomic) NSNumber *timestamp; // ivar: _timestamp


-(id)description;
-(id)initWithDefusedMessage:(id)arg0 idsTrustedData:(id)arg1 ;
-(id)initWithIdsTrustedData:(id)arg0 GUID:(id)arg1 timestamp:(id)arg2 isFromStorage:(BOOL)arg3 isLastFromStorage:(BOOL)arg4 ;


@end


#endif