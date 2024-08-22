// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTASSETHTTPREQUESTHANDLER_H
#define DTASSETHTTPREQUESTHANDLER_H

@class NSSet, DTXChannel, NSString;
@protocol GCDAsyncSocketDelegate;

#import <Foundation/Foundation.h>

#import "_DT_GCDAsyncSocket.h"

@interface DTAssetHTTPRequestHandler : NSObject <GCDAsyncSocketDelegate>

 {
    *__CFHTTPMessage _httpMessage;
}


@property (retain, nonatomic) NSSet *allowedResources; // ivar: _allowedResources
@property (retain) DTXChannel *channel; // ivar: _channel
@property (copy) id *completion; // ivar: _completion
@property NSUInteger dataSent; // ivar: _dataSent
@property (readonly) NSString *identifier; // ivar: _identifier
@property BOOL sentHeader; // ivar: _sentHeader
@property (retain) _DT_GCDAsyncSocket *socket; // ivar: _socket


-(id)initWithSocket:(id)arg0 channel:(id)arg1 ;
-(void)dealloc;
-(void)receivedMessage:(id)arg0 ;
-(void)requestAssetAtPath:(id)arg0 ;
-(void)sendDataChunk:(id)arg0 ;
-(void)serveErrorMessageForError:(id)arg0 ;
-(void)serveResponseAndDisconnect:(struct __CFHTTPMessage *)arg0 ;
-(void)socket:(id)arg0 didReadData:(id)arg1 withTag:(NSInteger)arg2 ;
-(void)socketDidDisconnect:(id)arg0 withError:(id)arg1 ;
-(void)startReading;


@end


#endif