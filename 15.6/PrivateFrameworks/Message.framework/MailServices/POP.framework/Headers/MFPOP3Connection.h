// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPOP3CONNECTION_H
#define MFPOP3CONNECTION_H

@class MFConnection, NSMutableData, NSMutableDictionary, NSData, NSString;



@interface MFPOP3Connection : MFConnection {
    NSMutableData *_sendBuffer;
    NSMutableDictionary *_listResults;
    NSMutableDictionary *_messageIdsByNumber;
    NSMutableDictionary *_numbersByMessageId;
    NSData *_apopTimeStamp;
    NSUInteger _numberOfMessagesAvailable;
    BOOL _state;
    BOOL _hidingPassword;
    NSString *_accountURL;
}




+(id)log;
-(BOOL)_doBasicConnectionWithAccount:(id)arg0 ;
-(BOOL)authenticateUsingAccount:(id)arg0 ;
-(BOOL)authenticateUsingAccount:(id)arg0 authenticator:(id)arg1 ;
-(BOOL)connectUsingAccount:(id)arg0 ;
-(BOOL)messagesAvailable;
-(BOOL)startTLSForAccount:(id)arg0 ;
-(BOOL)supportsAPOP;
-(NSUInteger)numberOfMessagesAvailable;
-(NSUInteger)serverMessageCount;
-(NSUInteger)sizeOfMessageNumber:(NSUInteger)arg0 ;
-(id)authenticationMechanisms;
-(id)capabilities;
-(id)copyMessageHeaderForMessageNumber:(NSUInteger)arg0 ;
-(id)copyReplyLineData;
-(id)idForMessageNumber:(NSInteger)arg0 ;
-(id)init;
-(int)_apopWithUsername:(id)arg0 password:(id)arg1 ;
-(int)_getListResults;
-(int)_getStatusFromReply;
-(int)_getUidlResults;
-(int)_pass:(id)arg0 ;
-(int)_readMultilineResponseWithMaxSize:(NSUInteger)arg0 consumer:(id)arg1 ;
-(int)_retrieveMessage:(NSUInteger)arg0 ofSize:(NSUInteger)arg1 consumer:(id)arg2 ;
-(int)_sendCommand:(char *)arg0 withArguments:(id)arg1 ;
-(int)_user:(id)arg0 ;
-(int)dele:(NSUInteger)arg0 ;
-(int)deleteMessagesOnServer:(id)arg0 ;
-(int)doStat;
-(int)fetchMessages:(id)arg0 ;
-(int)fetchMessages:(id)arg0 intoQueue:(id)arg1 serverIDsByNumber:(id)arg2 ;
-(int)getMessageNumbers:(*id)arg0 andMessageIdsByNumber:(*id)arg1 ;
-(int)getMessageNumbers:(*id)arg0 messageIdsByNumber:(*id)arg1 numbersByMessageId:(*id)arg2 ;
-(int)getTop:(int)arg0 ofMessageNumber:(NSUInteger)arg1 intoMutableData:(id)arg2 ;
-(int)getTopOfMessageNumber:(NSUInteger)arg0 intoMutableData:(id)arg1 ;
-(int)list:(int)arg0 ;
-(int)quit;
-(int)retr:(NSUInteger)arg0 consumer:(id)arg1 intoQueue:(id)arg2 idsByNumber:(id)arg3 allowIncomplete:(BOOL)arg4 queueStatus:(*BOOL)arg5 ;
-(int)retr:(NSUInteger)arg0 data:(*id)arg1 ;
-(int)retr:(NSUInteger)arg0 dataConsumer:(id)arg1 ;
-(void)disableAPOP;


@end


#endif