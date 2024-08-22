// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCONNECTEDSTUDENTDAEMONPROXYFACTORY_H
#define CRKCONNECTEDSTUDENTDAEMONPROXYFACTORY_H

@class NSString;
@protocol CRKStudentDaemonProxyObserver;

#import <Foundation/Foundation.h>

#import "CRKConnectedStudentDaemonProxyFactory.h"
#import "CRKStudentDaemonProxy.h"

@interface CRKConnectedStudentDaemonProxyFactory : NSObject <CRKStudentDaemonProxyObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didConnectHandler; // ivar: _didConnectHandler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CRKConnectedStudentDaemonProxyFactory *selfReference; // ivar: _selfReference
@property (readonly, nonatomic) CRKStudentDaemonProxy *studentDaemonProxy; // ivar: _studentDaemonProxy
@property (readonly) Class superclass;


+(void)makeConnectedStudentDaemonProxyWithCompletion:(id)arg0 ;
-(id)initWithStudentDaemonProxy:(id)arg0 didConnectHandler:(id)arg1 ;
-(void)beginConnection;
-(void)daemonProxyDidConnect:(id)arg0 ;


@end


#endif