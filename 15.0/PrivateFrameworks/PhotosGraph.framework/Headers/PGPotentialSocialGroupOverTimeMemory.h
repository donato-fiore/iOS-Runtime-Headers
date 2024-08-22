// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPOTENTIALSOCIALGROUPOVERTIMEMEMORY_H
#define PGPOTENTIALSOCIALGROUPOVERTIMEMEMORY_H

@class NSArray, NSSet, NSString;


#import "PGPotentialMemory.h"
#import "PGGraphSocialGroupNode.h"

@interface PGPotentialSocialGroupOverTimeMemory : PGPotentialMemory

@property (retain) NSArray *curatedAssetLocalIdentifiers; // ivar: _curatedAssetLocalIdentifiers
@property (retain) NSArray *facedAssetLocalIdentifiers; // ivar: _facedAssetLocalIdentifiers
@property (readonly) NSSet *personNodes; // ivar: _personNodes
@property (readonly) PGGraphSocialGroupNode *socialGroupNode; // ivar: _socialGroupNode
@property (readonly) NSString *uuid; // ivar: _uuid


-(NSUInteger)memoryCategory;
-(id)initWithSocialGroupNode:(id)arg0 momentNodes:(id)arg1 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;


@end


#endif