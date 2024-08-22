// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCLUSTEROBSERVATION_H
#define VNCLUSTEROBSERVATION_H

@class NSData, NSSet, NSArray, NSNumber, NSDictionary;


#import "VNObservation.h"

@interface VNClusterObservation : VNObservation

@property (retain, nonatomic) NSData *clusterState; // ivar: _clusterState
@property (retain, nonatomic) NSSet *clusteredFaceIds; // ivar: _clusteredFaceIds
@property (retain, nonatomic) NSArray *clusters; // ivar: _clusters
@property (retain, nonatomic) NSNumber *distance; // ivar: _distance
@property (retain, nonatomic) NSDictionary *distancesById; // ivar: _distancesById
@property (retain, nonatomic) NSArray *groupedClusteredFaceIdsForCluster; // ivar: _groupedClusteredFaceIdsForCluster
@property (retain, nonatomic) NSArray *suggestionsForCluster; // ivar: _suggestionsForCluster


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif