// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPOTENTIALFEATUREVECTORBASEDMEMORY_H
#define PGPOTENTIALFEATUREVECTORBASEDMEMORY_H

@class NSDictionary, NSSet, NSIndexSet;


#import "PGPotentialMemory.h"

@interface PGPotentialFeatureVectorBasedMemory : PGPotentialMemory

@property CGFloat contentScore; // ivar: _contentScore
@property BOOL isBirthday; // ivar: _isBirthday
@property (retain) NSDictionary *matchingKeywords; // ivar: _matchingKeywords
@property CGFloat matchingScore; // ivar: _matchingScore
@property (retain) NSDictionary *momentKeywords; // ivar: _momentKeywords
@property CGFloat neighborScore; // ivar: _neighborScore
@property (retain) NSSet *personNodes; // ivar: _personNodes
@property (retain) NSDictionary *referenceKeywords; // ivar: _referenceKeywords
@property (retain) NSIndexSet *sortedCriteria; // ivar: _sortedCriteria




@end


#endif