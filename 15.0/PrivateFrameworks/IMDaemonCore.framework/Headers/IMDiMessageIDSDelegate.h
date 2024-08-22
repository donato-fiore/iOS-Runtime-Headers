// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDIMESSAGEIDSDELEGATE_H
#define IMDIMESSAGEIDSDELEGATE_H

@class IDSService, NSString;
@protocol IDSServiceDelegatePrivate;

#import <Foundation/Foundation.h>

#import "IMDAccountController.h"
#import "IMDChatRegistry.h"
#import "IMDiMessageIncomingMessageHandler.h"
#import "IMDMessageFromStorageController.h"
#import "IMDMessageStore.h"
#import "IMDMessageSuppressionController.h"
#import "IMDRecentsController.h"

@interface IMDiMessageIDSDelegate : NSObject <IDSServiceDelegatePrivate>



@property (readonly, retain) IMDAccountController *accountController; // ivar: _accountController
@property (readonly, retain) IDSService *bizChatService; // ivar: _bizChatService
@property (readonly, retain) IMDChatRegistry *chatRegistry; // ivar: _chatRegistry
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain) IMDiMessageIncomingMessageHandler *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly, retain) IDSService *idsService; // ivar: _idsService
@property (readonly, retain) IMDMessageFromStorageController *messageFromStorageController; // ivar: _messageFromStorageController
@property (readonly, retain) IMDMessageStore *messageStore; // ivar: _messageStore
@property (readonly, retain) IMDMessageSuppressionController *messageSuppressionController; // ivar: _messageSuppressionController
@property (readonly, retain) IMDRecentsController *recentsController; // ivar: _recentsController
@property BOOL runningInAutomation; // ivar: _runningInAutomation
@property (readonly) Class superclass;


+(BOOL)isDefaultPairedDevice:(id)arg0 withAccount:(id)arg1 ;
+(id)commandToHandlerBlock;
-(id)broadcaster;
-(id)init;
-(id)initWithiMessageService:(id)arg0 bizChatService:(id)arg1 incomingMessageHandler:(id)arg2 messageStore:(id)arg3 chatRegistry:(id)arg4 accountController:(id)arg5 messageSuppressionController:(id)arg6 storageController:(id)arg7 recentsController:(id)arg8 ;
-(void)service:(id)arg0 account:(id)arg1 incomingTopLevelMessage:(id)arg2 fromID:(id)arg3 messageContext:(id)arg4 ;


@end


#endif