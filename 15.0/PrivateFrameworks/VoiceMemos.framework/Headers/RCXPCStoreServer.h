// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCXPCSTORESERVER_H
#define RCXPCSTORESERVER_H

@class NSXPCStoreServer;



@interface RCXPCStoreServer : NSXPCStoreServer

@property (copy, nonatomic) id *shouldAcceptDatabaseConnection; // ivar: _shouldAcceptDatabaseConnection


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;


@end


#endif