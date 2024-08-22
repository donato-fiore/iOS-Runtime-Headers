// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DICLIENT2IODAEMONXPCHANDLER_H
#define DICLIENT2IODAEMONXPCHANDLER_H

@class NSXPCListenerEndpoint;


#import "DIBaseXPCHandler.h"

@interface DIClient2IODaemonXPCHandler : DIBaseXPCHandler

@property (retain, nonatomic) NSXPCListenerEndpoint *xpcListenerEndpoint; // ivar: _xpcListenerEndpoint


-(BOOL)addToRefCountWithError:(*id)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(id)remoteObjectInterface;
-(void)createConnection;


@end


#endif