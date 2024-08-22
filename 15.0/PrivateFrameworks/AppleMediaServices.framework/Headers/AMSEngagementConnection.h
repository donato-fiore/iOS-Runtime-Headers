// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSENGAGEMENTCONNECTION_H
#define AMSENGAGEMENTCONNECTION_H

@class NSXPCConnection, NSNotificationCenter;
@protocol AMSEngagementClientProtocol, AMSEngagementServiceProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSEngagementConnection : NSObject <AMSEngagementClientProtocol>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (retain, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain, nonatomic) NSObject<AMSEngagementServiceProtocol> *proxy; // ivar: _proxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)_makeExportedClientConnectionInterface;
-(id)_makeRemoteConnectionInterface;
-(id)_newRemoteConnection;
-(id)initWithNotificationCenter:(id)arg0 ;
-(void)_removeRemoteConnection;
-(void)dealloc;
-(void)handlePushedEvent:(id)arg0 ;


@end


#endif