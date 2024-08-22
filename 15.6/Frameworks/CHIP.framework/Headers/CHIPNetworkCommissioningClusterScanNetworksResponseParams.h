// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPNETWORKCOMMISSIONINGCLUSTERSCANNETWORKSRESPONSEPARAMS_H
#define CHIPNETWORKCOMMISSIONINGCLUSTERSCANNETWORKSRESPONSEPARAMS_H

@class NSString, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface CHIPNetworkCommissioningClusterScanNetworksResponseParams : NSObject

@property (retain, nonatomic) NSString *debugText; // ivar: _debugText
@property (retain, nonatomic) NSNumber *networkingStatus; // ivar: _networkingStatus
@property (retain, nonatomic) NSArray *threadScanResults; // ivar: _threadScanResults
@property (retain, nonatomic) NSArray *wiFiScanResults; // ivar: _wiFiScanResults


-(id)init;


@end


#endif