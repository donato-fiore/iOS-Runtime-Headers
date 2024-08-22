// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _COCLUSTERROLEMONITORCONNECTIONPROVIDER_H
#define _COCLUSTERROLEMONITORCONNECTIONPROVIDER_H

@class NSXPCConnection, NSString;
@protocol COClusterRoleMonitorConnectionProvider;

#import <Foundation/Foundation.h>


@interface _COClusterRoleMonitorConnectionProvider : NSObject <COClusterRoleMonitorConnectionProvider>



@property (readonly, nonatomic) NSXPCConnection *clusterRoleMonitorServiceConnection; // ivar: _clusterRoleMonitorServiceConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif