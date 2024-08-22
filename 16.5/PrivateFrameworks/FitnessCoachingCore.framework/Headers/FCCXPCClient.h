// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCXPCCLIENT_H
#define FCCXPCCLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FCCXPCClient : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}




-(id)init;
-(id)initWithQueue:(id)arg0 ;
// -(void)_remoteProxy:(id)arg0 errorHandler:(unk)arg1  ;
-(void)_setupXPCConnection;
-(void)_transportMessage:(NSUInteger)arg0 data:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)transportMessage:(NSUInteger)arg0 data:(id)arg1 completion:(id)arg2 ;


@end


#endif