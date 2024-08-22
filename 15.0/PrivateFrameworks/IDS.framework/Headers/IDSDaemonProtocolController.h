// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSDAEMONPROTOCOLCONTROLLER_H
#define IDSDAEMONPROTOCOLCONTROLLER_H

@class NSXPCConnection;
@protocol IDSGroupContextCacheMiddlewareDaemonProtocol, IDSGroupContextDataSourceDaemonProtocol;

#import <Foundation/Foundation.h>

#import "IDSGroupContextNotifyingObserver.h"

@interface IDSDaemonProtocolController : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSObject<IDSGroupContextCacheMiddlewareDaemonProtocol> *groupContextCacheMiddleware;
@property (readonly, nonatomic) NSObject<IDSGroupContextDataSourceDaemonProtocol> *groupContextDataSource;
@property (retain, nonatomic) IDSGroupContextNotifyingObserver *observer; // ivar: _observer


+(id)sharedInstance;
-(id)init;


@end


#endif