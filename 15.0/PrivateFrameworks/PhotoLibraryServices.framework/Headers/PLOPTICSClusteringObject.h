// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLOPTICSCLUSTERINGOBJECT_H
#define PLOPTICSCLUSTERINGOBJECT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PLOPTICSClusteringObject : NSObject

@property (nonatomic) CGFloat coreDistance; // ivar: _coreDistance
@property NSUInteger index; // ivar: _index
@property (readonly, nonatomic) NSMutableArray *neighbors; // ivar: _neighbors
@property (readonly, nonatomic) id *object; // ivar: _object
@property (nonatomic) NSUInteger order; // ivar: _order
@property (nonatomic) BOOL processed; // ivar: _processed
@property (nonatomic) CGFloat reachabilityDistance; // ivar: _reachabilityDistance


+(id)clusterObjectWithObject:(id)arg0 index:(NSUInteger)arg1 epsilon:(CGFloat)arg2 ;
-(id)initWithObject:(id)arg0 index:(NSUInteger)arg1 epsilon:(CGFloat)arg2 ;
-(id)neighborAtIndex:(NSUInteger)arg0 ;
-(void)registerNeighbors:(id)arg0 deleteExisting:(BOOL)arg1 ;
-(void)sortNeighborsByDistance;
-(void)updateCoreDistanceForNeighbor:(NSUInteger)arg0 ;


@end


#endif