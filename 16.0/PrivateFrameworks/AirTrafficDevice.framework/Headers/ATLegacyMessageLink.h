// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATLEGACYMESSAGELINK_H
#define ATLEGACYMESSAGELINK_H

@class NSMutableData, NSMutableDictionary, NSString;
@protocol ATSocketDelegate, ATLegacyMessageLink, OS_dispatch_queue;


#import "ATLockdownMessageLink.h"

@interface ATLegacyMessageLink : ATLockdownMessageLink <ATSocketDelegate, ATLegacyMessageLink>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableData *_incomingData;
    NSInteger _expectedBytesRemaining;
    NSMutableDictionary *_requestHandlerTable;
    CGFloat _idleTimeoutInterval;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hostSupportsLocalCloudDownloads; // ivar: _hostSupportsLocalCloudDownloads
@property (readonly) Class superclass;


-(BOOL)_sendData:(char *)arg0 offset:(unsigned int)arg1 len:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)idleTimeoutEnabled;
-(BOOL)open;
-(CGFloat)_idleTimeoutInterval;
-(id)initWithSocket:(id)arg0 ;
-(void)_checkMessageTimeouts;
-(void)_handlePingMessage:(id)arg0 fromLink:(id)arg1 ;
-(void)_handlePongMessage:(id)arg0 fromLink:(id)arg1 ;
-(void)_sendPingMessage;
-(void)close;
-(void)removeHandlerForMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 withCompletion:(id)arg1 ;
-(void)setHandlerForMessage:(id)arg0 handler:(id)arg1 ;
-(void)socket:(id)arg0 hasDataAvailable:(char *)arg1 length:(NSInteger)arg2 ;
-(void)socketDidClose:(id)arg0 ;


@end


#endif