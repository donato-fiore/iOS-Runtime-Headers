// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLDSERVICECENTER_H
#define SLDSERVICECENTER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface SLDServiceCenter : NSObject

@property (retain, nonatomic) NSXPCConnection *conn; // ivar: _conn
@property (nonatomic) BOOL shouldAutoReconnect; // ivar: _shouldAutoReconnect
@property (nonatomic) BOOL waitingForConnection; // ivar: _waitingForConnection


+(id)sharedCenter;
-(id)_synchronousRemoteObjectProxy;
-(id)init;
-(void)_establishNewConnection;
-(void)_invalidateAndDestroyConnection;
-(void)connectionForServiceClass:(Class)arg0 reply:(id)arg1 ;


@end


#endif