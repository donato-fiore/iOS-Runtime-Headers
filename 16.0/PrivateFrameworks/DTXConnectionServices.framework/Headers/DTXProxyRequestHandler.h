// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTXPROXYREQUESTHANDLER_H
#define DTXPROXYREQUESTHANDLER_H

@class NSString, Protocol;

#import <Foundation/Foundation.h>


@interface DTXProxyRequestHandler : NSObject

@property (readonly, copy) NSString *channelIdentifier;
@property (readonly, copy) id *handlerBlock; // ivar: _handlerBlock
@property (readonly) Protocol *peerProtocol; // ivar: _peerProtocol
@property (readonly, copy) NSString *peerProtocolName; // ivar: _peerProtocolName
@property (readonly) Protocol *publishedProtocol; // ivar: _publishedProtocol
@property (readonly, copy) NSString *publishedProtocolName; // ivar: _publishedProtocolName


-(BOOL)matchesPublishedProtocolName:(id)arg0 peerProtocolName:(id)arg1 ;
-(id)initWithPublishedProtocol:(id)arg0 publishedProtocolName:(id)arg1 peerProtocol:(id)arg2 peerProtocolName:(id)arg3 handlerBlock:(id)arg4 ;


@end


#endif