// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDELEGATIONSERVICECONNECTION_H
#define ICDELEGATIONSERVICECONNECTION_H

@class MSVMessageParser, NSMutableDictionary, MSVStreamReader, MSVStreamWriter, NSString;
@protocol ICDelegationServicePairingSessionDelegate, MSVMessageParserDelegate, OS_dispatch_queue, ICDelegationServiceConnectionDelegate;

#import <Foundation/Foundation.h>

#import "ICDelegationServicePairingSession.h"
#import "ICDelegationServiceSecuritySettings.h"

@interface ICDelegationServiceConnection : NSObject <ICDelegationServicePairingSessionDelegate, MSVMessageParserDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    id<ICDelegationServiceConnectionDelegate> *_delegate;
    BOOL _isPaired;
    BOOL _isStarted;
    MSVMessageParser *_messageParser;
    unsigned int _nextRequestID;
    ICDelegationServicePairingSession *_pairingSession;
    NSMutableDictionary *_pendingRequestIDToRequestContext;
    MSVStreamReader *_streamReader;
    NSObject<OS_dispatch_queue> *_streamReaderQueue;
    MSVStreamWriter *_streamWriter;
    NSObject<OS_dispatch_queue> *_streamWriterQueue;
}


@property (readonly, nonatomic) NSInteger connectionRole; // ivar: _connectionRole
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICDelegationServiceConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ICDelegationServiceSecuritySettings *securitySettings; // ivar: _securitySettings
@property (readonly) Class superclass;


-(id)initWithConnectionRole:(NSInteger)arg0 inputStream:(id)arg1 outputStream:(id)arg2 securitySettings:(id)arg3 ;
-(unsigned int)_nextRequestUniqueID;
-(void)_finishPendingRequestsWithError:(id)arg0 ;
-(void)_sendMessage:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_sendRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)_sendResponse:(id)arg0 forRequest:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_streamDidClose;
-(void)_streamDidParseMessage:(id)arg0 ;
-(void)_streamEncounteredError:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)delegationServicePairingSession:(id)arg0 sendData:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)parser:(id)arg0 didParseMessage:(id)arg1 ;
-(void)sendRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)sendResponse:(id)arg0 forRequest:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif