// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRTHREADNETWORKDIAGNOSTICSCLUSTERROUTETABLE_H
#define MTRTHREADNETWORKDIAGNOSTICSCLUSTERROUTETABLE_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRThreadNetworkDiagnosticsClusterRouteTable : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *age; // ivar: _age
@property (copy, nonatomic) NSNumber *allocated; // ivar: _allocated
@property (copy, nonatomic) NSNumber *extAddress; // ivar: _extAddress
@property (copy, nonatomic) NSNumber *linkEstablished; // ivar: _linkEstablished
@property (copy, nonatomic) NSNumber *lqiIn; // ivar: _lqiIn
@property (copy, nonatomic) NSNumber *lqiOut; // ivar: _lqiOut
@property (copy, nonatomic) NSNumber *nextHop; // ivar: _nextHop
@property (copy, nonatomic) NSNumber *pathCost; // ivar: _pathCost
@property (copy, nonatomic) NSNumber *rloc16; // ivar: _rloc16
@property (copy, nonatomic) NSNumber *routerId; // ivar: _routerId


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif