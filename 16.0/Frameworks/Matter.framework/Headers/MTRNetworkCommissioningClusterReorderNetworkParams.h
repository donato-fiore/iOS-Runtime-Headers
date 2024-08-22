// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRNETWORKCOMMISSIONINGCLUSTERREORDERNETWORKPARAMS_H
#define MTRNETWORKCOMMISSIONINGCLUSTERREORDERNETWORKPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface MTRNetworkCommissioningClusterReorderNetworkParams : NSObject

@property (retain, nonatomic) NSNumber *breadcrumb; // ivar: _breadcrumb
@property (retain, nonatomic) NSData *networkID; // ivar: _networkID
@property (retain, nonatomic) NSNumber *networkIndex; // ivar: _networkIndex
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif