// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDIMESSAGEPIPELINERESOURCES_H
#define IMDIMESSAGEPIPELINERESOURCES_H

@class IDSService;
@protocol IMDaemonListenerProtocol;

#import <Foundation/Foundation.h>

#import "IMDChatRegistry.h"
#import "IMDAccount.h"
#import "IMDMessageStore.h"
#import "IMDMessageSuppressionController.h"
#import "IMDRecentsController.h"
#import "IMDMessageFromStorageController.h"

@interface IMDiMessagePipelineResources : NSObject

@property (readonly, nonatomic) NSObject<IMDaemonListenerProtocol> *broadcaster; // ivar: _broadcaster
@property (readonly, nonatomic) IMDChatRegistry *chatRegistry; // ivar: _chatRegistry
@property (readonly, nonatomic) IMDAccount *imdAccount; // ivar: _imdAccount
@property (readonly, nonatomic) IMDMessageStore *messageStore; // ivar: _messageStore
@property (readonly, nonatomic) IMDMessageSuppressionController *messageSuppressionController; // ivar: _messageSuppressionController
@property (readonly, nonatomic) IMDRecentsController *recentsController; // ivar: _recentsController
@property (readonly, nonatomic) IDSService *service; // ivar: _service
@property (readonly, nonatomic) IMDMessageFromStorageController *storageController; // ivar: _storageController


-(id)initWithIMDAccount:(id)arg0 service:(id)arg1 messageStore:(id)arg2 storageController:(id)arg3 broadcaster:(id)arg4 messageSuppressionController:(id)arg5 recentsController:(id)arg6 chatRegistry:(id)arg7 ;


@end


#endif