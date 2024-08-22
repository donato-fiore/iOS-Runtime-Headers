// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTHREADNETWORKDIAGNOSTICSCLUSTERROUTETABLE_H
#define CHIPTHREADNETWORKDIAGNOSTICSCLUSTERROUTETABLE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPThreadNetworkDiagnosticsClusterRouteTable : NSObject

@property (retain, nonatomic) NSNumber *age; // ivar: _age
@property (retain, nonatomic) NSNumber *allocated; // ivar: _allocated
@property (retain, nonatomic) NSNumber *extAddress; // ivar: _extAddress
@property (retain, nonatomic) NSNumber *linkEstablished; // ivar: _linkEstablished
@property (retain, nonatomic) NSNumber *lqiIn; // ivar: _lqiIn
@property (retain, nonatomic) NSNumber *lqiOut; // ivar: _lqiOut
@property (retain, nonatomic) NSNumber *nextHop; // ivar: _nextHop
@property (retain, nonatomic) NSNumber *pathCost; // ivar: _pathCost
@property (retain, nonatomic) NSNumber *rloc16; // ivar: _rloc16
@property (retain, nonatomic) NSNumber *routerId; // ivar: _routerId


-(id)init;


@end


#endif