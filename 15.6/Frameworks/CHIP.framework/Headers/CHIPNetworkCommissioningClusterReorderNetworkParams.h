// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPNETWORKCOMMISSIONINGCLUSTERREORDERNETWORKPARAMS_H
#define CHIPNETWORKCOMMISSIONINGCLUSTERREORDERNETWORKPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface CHIPNetworkCommissioningClusterReorderNetworkParams : NSObject

@property (retain, nonatomic) NSNumber *breadcrumb; // ivar: _breadcrumb
@property (retain, nonatomic) NSData *networkID; // ivar: _networkID
@property (retain, nonatomic) NSNumber *networkIndex; // ivar: _networkIndex


-(id)init;


@end


#endif