// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRTHREADNETWORKDIAGNOSTICSCLUSTERROUTETABLE_H
#define MTRTHREADNETWORKDIAGNOSTICSCLUSTERROUTETABLE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRThreadNetworkDiagnosticsClusterRouteTable : NSObject

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


-(id)description;
-(id)init;


@end


#endif