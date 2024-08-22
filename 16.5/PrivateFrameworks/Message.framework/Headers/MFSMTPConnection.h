// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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




+(id)log;
-(BOOL)_connectUsingAccount:(id)arg0 ;
-(BOOL)_hasParameter:(id)arg0 forKeyword:(id)arg1 ;
-(BOOL)_supportsExtension:(id)arg0 ;
-(BOOL)_supportsSaveSentExtension;
-(BOOL)authenticateUsingAccount:(id)arg0 ;
-(BOOL)authenticateUsingAccount:(id)arg0 authenticator:(id)arg1 ;
-(BOOL)connectUsingAccount:(id)arg0 ;
-(BOOL)supportsChunking;
-(BOOL)supportsEnhancedStatusCodes;
-(BOOL)supportsOutboxCopy;
-(BOOL)supportsPipelining;
-(BOOL)supportsSMTPUTF8;
-(NSInteger)mailFrom:(id)arg0 recipients:(id)arg1 withData:(id)arg2 host:(id)arg3 emailFormatStyle:(NSInteger)arg4 errorTitle:(*id)arg5 errorMessage:(*id)arg6 serverResponse:(*id)arg7 displayError:(*BOOL)arg8 errorCode:(*int)arg9 errorUserInfo:(*id)arg10 ;
-(NSInteger)timeLastCommandWasSent;
-(NSUInteger)_doHandshakeUsingAccount:(id)arg0 ;
-(NSUInteger)_getReply;
-(NSUInteger)_readResponseRange:(struct _NSRange *)arg0 isContinuation:(*BOOL)arg1 ;
-(NSUInteger)_sendBytes:(char *)arg0 length:(NSUInteger)arg1 progressHandler:(id)arg2 ;
-(NSUInteger)_sendCommand:(char *)arg0 length:(NSUInteger)arg1 argument:(id)arg2 trailer:(char *)arg3 ;
-(NSUInteger)_sendData:(id)arg0 ;
-(NSUInteger)_sendData:(id)arg0 progressHandler:(id)arg1 ;
-(NSUInteger)mailFrom:(id)arg0 emailFormatStyle:(NSInteger)arg1 ;
-(NSUInteger)maximumMessageBytes;
-(NSUInteger)noop;
-(NSUInteger)quit;
-(NSUInteger)rcptTo:(id)arg0 ;
-(NSUInteger)sendBData:(id)arg0 ;
-(NSUInteger)sendData:(id)arg0 ;
-(NSUInteger)state;
-(char *)_trailerForMailFromWithEmailAddressFormatStyle:(NSInteger)arg0 ;
-(id)_dataForCommand:(char *)arg0 length:(NSUInteger)arg1 argument:(id)arg2 trailer:(char *)arg3 ;
-(id)authenticationMechanisms;
-(id)dataForDataCmd;
-(id)dataForMailFrom:(id)arg0 emailFormatStyle:(NSInteger)arg1 ;
-(id)dataForRcptTo:(id)arg0 ;
-(id)domainName;
-(id)init;
-(id)lastResponse;
-(id)lastResponseLine;
-(void)_setLastResponse:(id)arg0 ;
-(void)abort;
-(void)setDelegate:(id)arg0 ;
-(void)setDomainName:(id)arg0 ;
-(void)setUseSaveSent:(BOOL)arg0 toFolder:(id)arg1 ;


@end


#endif