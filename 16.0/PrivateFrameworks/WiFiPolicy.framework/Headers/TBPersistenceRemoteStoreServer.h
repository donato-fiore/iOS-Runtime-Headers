// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TBPERSISTENCEREMOTESTORESERVER_H
#define TBPERSISTENCEREMOTESTORESERVER_H

@class NSURL, NSDictionary, NSXPCStoreServer;

#import <Foundation/Foundation.h>


@interface TBPersistenceRemoteStoreServer : NSObject

@property (retain, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (retain, nonatomic) NSDictionary *serverOptions; // ivar: _serverOptions
@property (retain, nonatomic) NSURL *storeURL; // ivar: _storeURL
@property (retain, nonatomic) NSXPCStoreServer *xpcStoreServer; // ivar: _xpcStoreServer


-(id)initWithStoreURL:(id)arg0 modelURL:(id)arg1 options:(id)arg2 ;
-(void)startListening;


@end


#endif