// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVFIGCOMMCHANNELUUIDCOMMUNICATIONCHANNELMANAGER_H
#define AVFIGCOMMCHANNELUUIDCOMMUNICATIONCHANNELMANAGER_H

@class NSString;
@protocol AVFigRoutingContextCommunicationChannelManager, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVOutputContextCommunicationChannel.h"
#import "AVFigRoutingContextOutputContextImpl.h"

@interface AVFigCommChannelUUIDCommunicationChannelManager : NSObject <AVFigRoutingContextCommunicationChannelManager>

 {
    *OpaqueFigRoutingContext _routingContext;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    *__CFString _outgoingCommChannelUUID;
    *__CFDictionary _communicationChannelsForUUIDs;
    AVWeakReference *_weakObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;
@property (weak) AVFigRoutingContextOutputContextImpl *parentOutputContextImpl; // ivar: _parentOutputContextImpl
@property (readonly) Class superclass;


-(id)init;
-(id)initWithRoutingContext:(struct OpaqueFigRoutingContext *)arg0 ;
-(id)openCommunicationChannelWithOptions:(id)arg0 error:(*id)arg1 ;
-(void)_didReceiveData:(struct __CFData *)arg0 fromCommChannelUUID:(struct __CFString *)arg1 ;
-(void)dealloc;
-(void)didCloseCommChannelUUID:(struct __CFString *)arg0 ;


@end


#endif