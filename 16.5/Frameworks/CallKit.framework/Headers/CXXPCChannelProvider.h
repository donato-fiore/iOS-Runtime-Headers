// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXXPCCHANNELPROVIDER_H
#define CXXPCCHANNELPROVIDER_H

@class BSServiceConnection;
@protocol OS_dispatch_queue;


#import "CXChannelProvider.h"
#import "CXChannelServiceDefinition.h"

@interface CXXPCChannelProvider : CXChannelProvider

@property (retain, nonatomic) BSServiceConnection *connection; // ivar: _connection
@property (readonly, nonatomic) CXChannelServiceDefinition *definition; // ivar: _definition
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)requiresProxyingAVAudioSessionState;
-(id)hostProtocolDelegate;
-(id)initWithConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif