// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCHOROSCONTROLLER_H
#define IMDCHOROSCONTROLLER_H

@class NSDictionary, CTStewieDataClient, NSString;
@protocol CTStewieDataClientDelegate;

#import <Foundation/Foundation.h>


@interface IMDChorosController : NSObject <CTStewieDataClientDelegate>



@property (copy, nonatomic) NSDictionary *conversationIDToConversationUUIDMap;
@property (retain, nonatomic) CTStewieDataClient *coreTelephonyStewieClient; // ivar: _coreTelephonyStewieClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isStewieActive) BOOL stewieActive; // ivar: _stewieActive
@property (readonly) Class superclass;


+(id)sharedController;
-(BOOL)_isMessageStewieEmergencyCompatible:(id)arg0 ;
-(id)_generateLocationUpdateSentStatusItemForChat:(id)arg0 ;
-(id)_generateStopTranscriptSharingStatusItemForChat:(id)arg0 ;
-(id)_simNumber;
-(id)_stringKeyForConversationID:(NSInteger)arg0 ;
-(id)conversationUUIDForConversationID:(NSInteger)arg0 ;
-(id)init;
-(void)_createChatIfNecessary:(id)arg0 ;
-(void)_openStewieChat;
-(void)_processMessageSendFailure:(id)arg0 forSession:(id)arg1 ;
-(void)_processMessageSent:(id)arg0 forSession:(id)arg1 ;
-(void)_processReceivedEmergencyMessage:(id)arg0 ;
-(void)connectedServicesChanged:(NSInteger)arg0 ;
-(void)locationUpdateSent;
-(void)messageReceived:(id)arg0 withMetadata:(id)arg1 completionBlock:(id)arg2 ;
-(void)processReceivedEmergencyMessageFromIMTool:(NSInteger)arg0 message:(id)arg1 ;
-(void)sendEmergencyQuestionnaire:(id)arg0 ;
-(void)sendStewieMessage:(id)arg0 forChat:(id)arg1 ;
-(void)setConversationUUID:(id)arg0 forConversationID:(NSInteger)arg1 ;
-(void)stateChanged:(id)arg0 ;
-(void)stopTranscriptSharingWithChat:(id)arg0 ;


@end


#endif