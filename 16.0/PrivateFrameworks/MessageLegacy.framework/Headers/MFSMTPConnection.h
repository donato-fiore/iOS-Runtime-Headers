// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFSMTPCONNECTION_H
#define MFSMTPCONNECTION_H

@class NSMutableArray, NSMutableData, NSString;


#import "MFConnection.h"
#import "MFSMTPResponse.h"

@interface MFSMTPConnection : MFConnection {
    MFSMTPResponse *_lastResponse;
    NSMutableArray *_serviceExtensions;
    NSMutableData *_mdata;
    NSString *_domainName;
    NSString *_saveSentMbox;
    int _originalSocketTimeout;
    NSInteger _lastCommandTimestamp;
    id *_delegate;
    BOOL _hideLoggedData;
    BOOL _useSaveSent;
    BOOL _dislikesSaveSentMbox;
}




-(BOOL)_connectUsingAccount:(id)arg0 ;
-(BOOL)_hasParameter:(id)arg0 forKeyword:(id)arg1 ;
-(BOOL)_supportsExtension:(id)arg0 ;
-(BOOL)_supportsSaveSentExtension;
-(BOOL)authenticateUsingAccount:(id)arg0 ;
-(BOOL)authenticateUsingAccount:(id)arg0 authenticator:(id)arg1 ;
-(BOOL)connectUsingAccount:(id)arg0 ;
-(BOOL)supports8BitMime;
-(BOOL)supportsBinaryMime;
-(BOOL)supportsChunking;
-(BOOL)supportsEnhancedStatusCodes;
-(BOOL)supportsOutboxCopy;
-(BOOL)supportsPipelining;
-(NSInteger)mailFrom:(id)arg0 recipients:(id)arg1 withData:(id)arg2 host:(id)arg3 errorTitle:(*id)arg4 errorMessage:(*id)arg5 serverResponse:(*id)arg6 displayError:(*BOOL)arg7 errorCode:(*int)arg8 errorUserInfo:(*id)arg9 ;
-(NSInteger)timeLastCommandWasSent;
-(NSUInteger)maximumMessageBytes;
-(id)_dataForCommand:(char *)arg0 length:(NSUInteger)arg1 argument:(id)arg2 trailer:(char *)arg3 ;
-(id)authenticationMechanisms;
-(id)dataForDataCmd;
-(id)dataForMailFrom:(id)arg0 ;
-(id)dataForRcptTo:(id)arg0 ;
-(id)domainName;
-(id)init;
-(id)lastResponse;
-(id)lastResponseLine;
-(int)_doHandshakeUsingAccount:(id)arg0 ;
-(int)_getReply;
-(int)_readResponseRange:(struct _NSRange *)arg0 isContinuation:(*BOOL)arg1 ;
-(int)_sendBytes:(char *)arg0 length:(NSUInteger)arg1 progressHandler:(id)arg2 ;
-(int)_sendCommand:(char *)arg0 length:(NSUInteger)arg1 argument:(id)arg2 trailer:(char *)arg3 ;
-(int)_sendData:(id)arg0 ;
-(int)_sendData:(id)arg0 progressHandler:(id)arg1 ;
-(int)mailFrom:(id)arg0 ;
-(int)noop;
-(int)quit;
-(int)rcptTo:(id)arg0 ;
-(int)sendBData:(id)arg0 ;
-(int)sendData:(id)arg0 ;
-(int)state;
-(void)_setLastResponse:(id)arg0 ;
-(void)abort;
-(void)dealloc;
-(void)setDelegate:(id)arg0 ;
-(void)setDomainName:(id)arg0 ;
-(void)setUseSaveSent:(BOOL)arg0 toFolder:(id)arg1 ;


@end


#endif