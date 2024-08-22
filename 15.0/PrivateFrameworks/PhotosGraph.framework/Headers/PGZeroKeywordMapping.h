// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGZEROKEYWORDMAPPING_H
#define PGZEROKEYWORDMAPPING_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PGGraphMeaningNode.h"

@interface PGZeroKeywordMapping : NSObject

@property (readonly, nonatomic) PGGraphMeaningNode *displayNode; // ivar: _displayNode
@property (readonly, nonatomic) NSArray *mappedMeaningNodes; // ivar: _mappedMeaningNodes


-(id)initWithDisplayNode:(id)arg0 mappedMeaningNodes:(id)arg1 ;


@end


#endif