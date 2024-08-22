// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPOTENTIALBUSINESSMEMORY_H
#define PGPOTENTIALBUSINESSMEMORY_H

@class NSMutableSet, NSString;


#import "PGPotentialMemory.h"
#import "PGGraphBusinessNode.h"

@interface PGPotentialBusinessMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}


@property (readonly) NSString *business;
@property (readonly) PGGraphBusinessNode *businessNode; // ivar: _businessNode
@property (readonly) NSInteger year; // ivar: _year


-(NSUInteger)memoryCategory;
-(id)initWithBusinessNode:(id)arg0 year:(NSInteger)arg1 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;
-(void)addMomentNode:(id)arg0 ;


@end


#endif