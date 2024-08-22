// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRNETWORKCOMMISSIONINGCLUSTERSCANNETWORKSPARAMS_H
#define MTRNETWORKCOMMISSIONINGCLUSTERSCANNETWORKSPARAMS_H

@class NSNumber, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRNetworkCommissioningClusterScanNetworksParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *breadcrumb; // ivar: _breadcrumb
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSData *ssid; // ivar: _ssid
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif