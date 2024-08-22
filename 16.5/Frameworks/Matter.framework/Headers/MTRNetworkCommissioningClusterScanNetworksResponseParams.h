// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRNETWORKCOMMISSIONINGCLUSTERSCANNETWORKSRESPONSEPARAMS_H
#define MTRNETWORKCOMMISSIONINGCLUSTERSCANNETWORKSRESPONSEPARAMS_H

@class NSString, NSNumber, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRNetworkCommissioningClusterScanNetworksResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSString *debugText; // ivar: _debugText
@property (copy, nonatomic) NSNumber *networkingStatus; // ivar: _networkingStatus
@property (copy, nonatomic) NSArray *threadScanResults; // ivar: _threadScanResults
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (copy, nonatomic) NSArray *wiFiScanResults; // ivar: _wiFiScanResults


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif