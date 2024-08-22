// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXXPCPROVIDER_H
#define CXXPCPROVIDER_H

@class NSXPCConnection;


#import "CXProvider.h"

@interface CXXPCProvider : CXProvider

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) int notifyToken; // ivar: _notifyToken


-(BOOL)requiresProxyingAVAudioSessionState;
-(id)hostProtocolDelegate;
-(id)initWithConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif