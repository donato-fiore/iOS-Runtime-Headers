// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PFMODELMAP_H
#define _PFMODELMAP_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "NSManagedObjectModel.h"

@interface _PFModelMap : NSObject {
    NSArray *_models;
    *id _indexedEntities;
    NSUInteger _entityCount;
    *NSUInteger _modelEntityCounts;
}


@property (readonly, nonatomic) NSArray *allEntities; // ivar: _allEntities
@property (readonly, nonatomic) NSUInteger clientEntityCount; // ivar: _clientEntityCount
@property (readonly, nonatomic) NSManagedObjectModel *clientModel; // ivar: _clientModel
@property (readonly, nonatomic) NSDictionary *entitiesByPath; // ivar: _entitiesByPath


+(id)ancillaryModelFactoryClasses;
-(void)dealloc;


@end


#endif