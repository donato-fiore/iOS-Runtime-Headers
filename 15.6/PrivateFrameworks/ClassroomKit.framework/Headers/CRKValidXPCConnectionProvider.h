// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKVALIDXPCCONNECTIONPROVIDER_H
#define CRKVALIDXPCCONNECTIONPROVIDER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CRKValidXPCConnectionProvider : NSObject

@property (retain, nonatomic) NSXPCConnection *backingConnection; // ivar: _backingConnection
@property (readonly, nonatomic) id *builder; // ivar: _builder
@property (readonly) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)captureConnection;
-(id)initWithBuilder:(id)arg0 ;
-(id)invokeBuilder;
-(id)makeConnection;
-(id)unprotectedConnection;
-(void)connectionDied:(id)arg0 ;
-(void)dealloc;
-(void)tearDownConnection;


@end


#endif