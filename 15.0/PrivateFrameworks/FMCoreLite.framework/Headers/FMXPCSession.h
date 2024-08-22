// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMXPCSESSION_H
#define FMXPCSESSION_H

@class NSXPCConnection, NSUUID;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FMXPCServiceDescription.h"

@interface FMXPCSession : NSObject

@property (retain, nonatomic) id *_proxy; // ivar: __proxy
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) id *proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription


-(id)initWithServiceDescription:(id)arg0 ;
-(id)syncProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)destroyXPCConnection;
-(void)invalidate;
-(void)resume;
-(void)suspend;


@end


#endif