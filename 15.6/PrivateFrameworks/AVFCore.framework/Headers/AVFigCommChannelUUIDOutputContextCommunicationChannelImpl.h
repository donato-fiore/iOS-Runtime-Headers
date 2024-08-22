// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVFIGCOMMCHANNELUUIDOUTPUTCONTEXTCOMMUNICATIONCHANNELIMPL_H
#define AVFIGCOMMCHANNELUUIDOUTPUTCONTEXTCOMMUNICATIONCHANNELIMPL_H

@class NSString;
@protocol AVOutputContextCommunicationChannelImpl;

#import <Foundation/Foundation.h>

#import "AVOutputContextCommunicationChannel.h"

@interface AVFigCommChannelUUIDOutputContextCommunicationChannelImpl : NSObject <AVOutputContextCommunicationChannelImpl>

 {
    *OpaqueFigRoutingContext _routingContext;
}


@property (readonly, nonatomic) *__CFString commChannelUUID; // ivar: _commChannelUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) AVOutputContextCommunicationChannel *parentCommunicationChannel; // ivar: _parentChannel
@property (readonly) Class superclass;


-(id)init;
-(id)initWithRoutingContext:(struct OpaqueFigRoutingContext *)arg0 commChannelUUID:(struct __CFString *)arg1 ;
-(void)dealloc;
-(void)sendData:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif