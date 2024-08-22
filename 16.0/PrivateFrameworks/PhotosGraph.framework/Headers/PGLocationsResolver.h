// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGLOCATIONSRESOLVER_H
#define PGLOCATIONSRESOLVER_H

@class NSSet, NSArray, NSMapTable;

#import <Foundation/Foundation.h>

#import "PGGraphLocationHelper.h"
#import "PGIncompleteLocationResolver.h"

@interface PGLocationsResolver : NSObject {
    PGGraphLocationHelper *_locationHelper;
}


@property (retain, nonatomic) NSSet *ignoredAddressNodes; // ivar: _ignoredAddressNodes
@property (retain, nonatomic) NSSet *ignoredLocationNodes; // ivar: _ignoredLocationNodes
@property (retain, nonatomic) PGIncompleteLocationResolver *incompleteLocationResolver; // ivar: _incompleteLocationResolver
@property (nonatomic) float maximumMissingLocationsThreshold; // ivar: _maximumMissingLocationsThreshold
@property (retain, nonatomic) NSArray *resolvedLocationNodes; // ivar: _resolvedLocationNodes
@property (readonly, nonatomic) NSMapTable *resolvedLocationNodesToAddressNodesMapTable; // ivar: _resolvedLocationNodesToAddressNodesMapTable
@property (retain, nonatomic) NSArray *resolvedMomentNodes; // ivar: _resolvedMomentNodes
@property (nonatomic) BOOL shouldCreateLocationToAddressMapTable; // ivar: _shouldCreateLocationToAddressMapTable
@property (retain, nonatomic) NSArray *sortedMoments; // ivar: _sortedMoments


-(id)initWithMomentNodes:(id)arg0 incompleteLocationResolver:(id)arg1 locationHelper:(id)arg2 ;
-(id)initWithSortedMomentNodes:(id)arg0 incompleteLocationResolver:(id)arg1 locationHelper:(id)arg2 ;
-(void)_resolve;
-(void)setCreateLocationToAddressMapTable:(BOOL)arg0 ;


@end


#endif