// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSERVERCONNECTION_H
#define STSERVERCONNECTION_H



#import "STProxyConnection.h"

@interface STServerConnection : STProxyConnection



-(id)initWithSocket:(id)arg0 handler:(id)arg1 replayFileURL:(id)arg2 ;
-(void)handleAceObject:(id)arg0 ;


@end


#endif