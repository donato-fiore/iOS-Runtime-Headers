// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCONCRETESTUDENTCONNECTION_H
#define CRKCONCRETESTUDENTCONNECTION_H

@class NSString, NSHashTable;
@protocol CRKStudentDaemonProxyObserver, CRKStudentConnection;

#import <Foundation/Foundation.h>

#import "CRKStudentDaemonProxy.h"

@interface CRKConcreteStudentConnection : NSObject <CRKStudentDaemonProxyObserver, CRKStudentConnection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) NSHashTable *notificationObservations; // ivar: _notificationObservations
@property (readonly, nonatomic) CRKStudentDaemonProxy *studentDaemonProxy; // ivar: _studentDaemonProxy
@property (readonly) Class superclass;


+(id)connectionWithStudentDaemonProxy:(id)arg0 invalidationHandler:(id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg0 invalidationHandler:(id)arg1 ;
-(id)observeNotificationWithName:(id)arg0 handler:(id)arg1 ;
-(id)operationForRequest:(id)arg0 ;
-(void)daemonProxy:(id)arg0 didReceiveNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)daemonProxyDidDisconnect:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif