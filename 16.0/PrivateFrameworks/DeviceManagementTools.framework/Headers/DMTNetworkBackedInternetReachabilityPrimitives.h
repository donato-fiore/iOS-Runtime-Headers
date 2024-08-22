// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMTNETWORKBACKEDINTERNETREACHABILITYPRIMITIVES_H
#define DMTNETWORKBACKEDINTERNETREACHABILITYPRIMITIVES_H

@class NSString, NWPathEvaluator;
@protocol DMTInternetReachabilityPrimitives, OS_nw_path_monitor, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DMTNetworkBackedInternetReachabilityPrimitives : NSObject <DMTInternetReachabilityPrimitives>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NWPathEvaluator *pathEvaluator; // ivar: _pathEvaluator
@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor; // ivar: _pathMonitor
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *reachabilityMonitorQueue; // ivar: _reachabilityMonitorQueue
@property (nonatomic) BOOL reachable; // ivar: _reachable
@property (copy, nonatomic) id *statusChangedBlock; // ivar: _statusChangedBlock
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)pathDidChange:(id)arg0 ;


@end


#endif