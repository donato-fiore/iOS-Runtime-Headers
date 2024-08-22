// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMINTERACTIONLOGGER_H
#define EMINTERACTIONLOGGER_H

@class NSString, NSMutableDictionary;
@protocol EFLoggable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EMRemoteConnection.h"

@interface EMInteractionLogger : NSObject <EFLoggable>



@property BOOL appLaunched; // ivar: _appLaunched
@property (retain) EMRemoteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *messageListMessages; // ivar: _messageListMessages
@property (nonatomic) _NSRange messageListVisibleRows; // ivar: _messageListVisibleRows
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateTrackingQueue; // ivar: _stateTrackingQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *viewedMessages; // ivar: _viewedMessages


+(id)log;
+(id)remoteInterface;
-(id)_rescopedMessageObjectID:(id)arg0 ;
-(id)_stateForObjectID:(id)arg0 container:(id)arg1 ;
-(id)initWithRemoteConnection:(id)arg0 ;
-(id)messageListTypeForMailboxes:(id)arg0 ;
-(void)_appDidEnterBackground;
-(void)_appWillEnterForeground;
-(void)_logMessageListDisplayEndedForState:(id)arg0 now:(id)arg1 ;
-(void)_logMessageListDisplayStartedMessageID:(id)arg0 now:(id)arg1 type:(id)arg2 row:(NSInteger)arg3 cellStyle:(id)arg4 ;
-(void)_viewingEndedForAllMessages;
-(void)_xpcLogEvent:(id)arg0 date:(id)arg1 data:(id)arg2 ;
-(void)_xpcLogEvent:(id)arg0 date:(id)arg1 messageID:(id)arg2 data:(id)arg3 ;
-(void)applicationLaunched;
-(void)clickedLinkInMessage:(id)arg0 scheme:(id)arg1 ;
-(void)composeFowardStartedForMessage:(id)arg0 ;
-(void)composeReplyStartedForMessage:(id)arg0 ;
-(void)messageListDisplayEndedForAllListItems;
-(void)messageListDisplayEndedForListItem:(id)arg0 cellStyle:(id)arg1 ;
-(void)messageListDisplayStartedForListItem:(id)arg0 messageListType:(id)arg1 row:(NSInteger)arg2 cellStyle:(id)arg3 ;
-(void)scrolledToEndOfMessage:(id)arg0 ;
-(void)viewingEndedForMessage:(id)arg0 ;
-(void)viewingStartedForMessage:(id)arg0 messageListScope:(id)arg1 ;


@end


#endif