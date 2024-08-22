// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRNETWORKCOMMISSIONINGCLUSTERSCANNETWORKSRESPONSEPARAMS_H
#define MTRNETWORKCOMMISSIONINGCLUSTERSCANNETWORKSRESPONSEPARAMS_H

@class NSString, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface MTRNetworkCommissioningClusterScanNetworksResponseParams : NSObject

@property (retain, nonatomic) NSString *debugText; // ivar: _debugText
@property (retain, nonatomic) NSNumber *networkingStatus; // ivar: _networkingStatus
@property (retain, nonatomic) NSArray *threadScanResults; // ivar: _threadScanResults
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSArray *wiFiScanResults; // ivar: _wiFiScanResults


-(id)description;
-(id)init;


@end


#endif