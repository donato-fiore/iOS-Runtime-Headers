// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COCLUSTERROLEMONITORCLIENTINTERFACEMEDIATOR_H
#define COCLUSTERROLEMONITORCLIENTINTERFACEMEDIATOR_H

@class NSString;
@protocol COClusterRoleMonitorClientInterface;

#import <Foundation/Foundation.h>

#import "COClusterRoleMonitor.h"

@interface COClusterRoleMonitorClientInterfaceMediator : NSObject <COClusterRoleMonitorClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) COClusterRoleMonitor *monitor; // ivar: _monitor
@property (readonly) Class superclass;


-(id)initWithClusterRoleMonitor:(id)arg0 ;
-(void)roleOfMember:(id)arg0 inCluster:(id)arg1 didChangeTo:(id)arg2 ;


@end


#endif