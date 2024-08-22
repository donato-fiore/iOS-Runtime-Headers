// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPOTENTIALPERSONOVERTIMEMEMORY_H
#define PGPOTENTIALPERSONOVERTIMEMEMORY_H

@class NSArray;


#import "PGPotentialMemory.h"
#import "PGGraphPersonNode.h"

@interface PGPotentialPersonOverTimeMemory : PGPotentialMemory

@property (retain) NSArray *bestAssetLocalIdentifiers; // ivar: _bestAssetLocalIdentifiers
@property (retain) NSArray *facedAssetLocalIdentifiers; // ivar: _facedAssetLocalIdentifiers
@property (readonly) PGGraphPersonNode *personNode; // ivar: _personNode


-(NSUInteger)memoryCategory;
-(id)initWithPersonNode:(id)arg0 momentNodes:(id)arg1 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;
-(id)uuid;


@end


#endif