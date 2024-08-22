// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPOTENTIALSOCIALGROUPMEMORY_H
#define PGPOTENTIALSOCIALGROUPMEMORY_H

@class NSMutableSet, NSArray, NSSet;


#import "PGPotentialMemory.h"
#import "PGGraphSocialGroupNode.h"

@interface PGPotentialSocialGroupMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}


@property (retain) NSArray *facedAssetLocalIdentifiers; // ivar: _facedAssetLocalIdentifiers
@property (retain) NSSet *peopleUUIDs; // ivar: _peopleUUIDs
@property (readonly) PGGraphSocialGroupNode *socialGroupNode; // ivar: _socialGroupNode
@property (readonly) NSInteger year; // ivar: _year


-(NSUInteger)memoryCategory;
-(id)initWithSocialGroupNode:(id)arg0 year:(NSInteger)arg1 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;
-(void)addMomentNode:(id)arg0 ;


@end


#endif