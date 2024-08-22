// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPRESULTROOTNODE_H
#define UPRESULTROOTNODE_H

@class NSArray;


#import "UPResultNode.h"

@interface UPResultRootNode : UPResultNode

@property (readonly, copy) NSArray *directLeafNodes; // ivar: _directLeafNodes
@property (readonly, copy) NSArray *intermediateNodes; // ivar: _intermediateNodes


-(id)_dictionaryRepresentation;
-(id)initWithLabel:(id)arg0 intermediateNodes:(id)arg1 directLeafNodes:(id)arg2 ;


@end


#endif