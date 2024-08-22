// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGLOCATIONSFILTERER_H
#define PGLOCATIONSFILTERER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PGIncompleteLocationResolver.h"

@interface PGLocationsFilterer : NSObject

@property (readonly, nonatomic) NSArray *filteredLocationNodes; // ivar: _filteredLocationNodes
@property (nonatomic) NSUInteger filteringType; // ivar: _filteringType
@property (readonly) PGIncompleteLocationResolver *incompleteLocationResolver; // ivar: _incompleteLocationResolver
@property (readonly) NSArray *locationNodes; // ivar: _locationNodes
@property (readonly) NSArray *sortedMomentNodes; // ivar: _sortedMomentNodes


-(id)_filteredSignificantLocationNodes;
-(id)initWithSortedMomentNodes:(id)arg0 locationNodes:(id)arg1 incompleteLocationResolver:(id)arg2 ;


@end


#endif