// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTXPROXYCHANNEL_H
#define DTXPROXYCHANNEL_H

@class Protocol, NSSet;

#import <Foundation/Foundation.h>

#import "DTXChannel.h"

@interface DTXProxyChannel : NSObject {
    Protocol *_exportedInterface;
    uint8_t _hasProcessedMessage;
}


@property (retain, nonatomic) NSSet *additionalAllowedClassesForProtocolMethods; // ivar: _additionalAllowedClassesForProtocolMethods
@property (retain, nonatomic) DTXChannel *channel; // ivar: _channel
@property (retain) Protocol *remoteInterface; // ivar: _remoteInterface
@property (readonly) id *remoteObjectProxy;


-(id)_allowedClassesForArgumentsOfRemoteInterfaceSelector:(SEL)arg0 methodSignature:(id)arg1 ;
-(id)_allowedClassesForReturnValues;
-(id)_validateDispatch:(id)arg0 ;
-(id)initWithChannel:(id)arg0 remoteProtocol:(id)arg1 localProtocol:(id)arg2 ;
-(void)_sendInvocationMessage:(id)arg0 ;
-(void)cancel;
-(void)setExportedObject:(id)arg0 queue:(id)arg1 ;


@end


#endif