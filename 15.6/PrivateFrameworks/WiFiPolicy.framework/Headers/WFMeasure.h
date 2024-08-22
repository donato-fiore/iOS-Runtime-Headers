// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMEASURE_H
#define WFMEASURE_H

@class NSMutableSet, NSString, NPTPerformanceTest;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "WFMeasureResult.h"

@interface WFMeasure : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // ivar: _dispatchGroup
@property (retain, nonatomic) NSMutableSet *dnsServers; // ivar: _dnsServers
@property (retain, nonatomic) NSString *gatewayAddress; // ivar: _gatewayAddress
@property (retain, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (nonatomic) BOOL isInProgress; // ivar: _isInProgress
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) NPTPerformanceTest *performanceTest; // ivar: _performanceTest
@property (retain, nonatomic) NSString *publicDNSAddress; // ivar: _publicDNSAddress
@property (retain, nonatomic) WFMeasureResult *result; // ivar: _result
@property (retain, nonatomic) NSString *testDNSHostname; // ivar: _testDNSHostname
@property (retain, nonatomic) NSString *testReason; // ivar: _testReason


-(BOOL)doDNSResolution:(id)arg0 timeout:(NSInteger)arg1 ;
-(BOOL)doPing:(id)arg0 count:(NSInteger)arg1 timeout:(NSInteger)arg2 size:(NSInteger)arg3 class:(NSInteger)arg4 minRTT:(*NSInteger)arg5 maxRTT:(*NSInteger)arg6 successCount:(*NSInteger)arg7 ;
// -(BOOL)start:(id)arg0 withCompletionQueue:(unk)arg1  ;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 andReason:(id)arg1 andInterfaceName:(id)arg2 ;
-(void)abort;
-(void)dispatchDNSTest:(id)arg0 ;
-(void)dispatchPingTest:(NSUInteger)arg0 ;
-(void)dispatchThroughputTest;
-(void)doThroughputTest;
-(void)retrieveNetworkConfigurations;


@end


#endif