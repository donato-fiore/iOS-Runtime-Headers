// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMOMENTNODECACHEDVALUES_H
#define PGMOMENTNODECACHEDVALUES_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "PGGraphMomentNode.h"

@interface PGMomentNodeCachedValues : NSObject

@property (nonatomic) CLLocationCoordinate2D bestLocationCoordinate; // ivar: _bestLocationCoordinate
@property (nonatomic) BOOL hasAddressNodes; // ivar: _hasAddressNodes
@property (nonatomic) BOOL hasAddressNodesIsSet; // ivar: _hasAddressNodesIsSet
@property (nonatomic) CGFloat neighborScore; // ivar: _neighborScore
@property (retain, nonatomic) PGGraphMomentNode *nextMomentNode; // ivar: _nextMomentNode
@property (retain, nonatomic) NSSet *personLocalIdentifiers; // ivar: _personLocalIdentifiers
@property (retain, nonatomic) PGGraphMomentNode *previousMomentNode; // ivar: _previousMomentNode


-(id)init;


@end


#endif