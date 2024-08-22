// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDSERVICECENTER_H
#define SLDSERVICECENTER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SLDServiceCenter : NSObject

@property (retain, nonatomic) NSXPCConnection *conn; // ivar: _conn
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mainConnectionSetupQueue; // ivar: _mainConnectionSetupQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyConcurrentQueue; // ivar: _propertyConcurrentQueue


+(id)sharedCenter;
-(id)_synchronousRemoteObjectProxy;
-(id)connectionForServiceClass:(Class)arg0 ;
-(id)init;
-(void)_ensureMainConnectionSynchronously;


@end


#endif