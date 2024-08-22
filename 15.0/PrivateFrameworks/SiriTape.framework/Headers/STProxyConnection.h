// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STPROXYCONNECTION_H
#define STPROXYCONNECTION_H

@class SiriCoreDataDecompressor;
@protocol OS_dispatch_queue, OS_dispatch_data, STAceObjectHandler;

#import <Foundation/Foundation.h>

#import "GCDAsyncSocket.h"

@interface STProxyConnection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_data> *_bufferedInputData;
    id<STAceObjectHandler> *_handler;
    GCDAsyncSocket *_socket;
    BOOL _isOpened;
    BOOL _isCanceled;
    BOOL _isFinished;
    SiriCoreDataDecompressor *_inputDecompressor;
    *__CFHTTPMessage _httpRequestHeader;
}




-(BOOL)_consumeAceDataWithData:(id)arg0 bytesRead:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_consumeAceHeaderWithData:(id)arg0 bytesRead:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_consumeHTTPHeaderWithData:(id)arg0 bytesRead:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_hasReadAceHeader;
-(BOOL)_hasReadHTTPHeader;
-(BOOL)_tryReadingParsedDataFromBytes:(*void)arg0 length:(NSUInteger)arg1 packet:(struct ? *)arg2 object:(*id)arg3 bytesParsed:(*NSUInteger)arg4 error:(*id)arg5 ;
-(id)_aceHeaderData;
-(id)_httpHeaderData;
-(id)_tryReadingAceHeaderFromData:(id)arg0 bytesParsed:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithSocket:(id)arg0 handler:(id)arg1 replayFileURL:(id)arg2 ;
-(void)_cancelWithError:(id)arg0 ;
-(void)_connectionHasBytesAvailable:(id)arg0 ;
-(void)handleAceObject:(id)arg0 ;
-(void)handlePacket:(struct ? *)arg0 ;
-(void)parseData:(id)arg0 ;


@end


#endif