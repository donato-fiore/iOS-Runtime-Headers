// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPOBJECTINFO_H
#define TSPOBJECTINFO_H

@class NSHashTable, NSMutableSet, NSArray, NSSet;

#import <Foundation/Foundation.h>

#import "TSPReferenceOrderedSet.h"

@interface TSPObjectInfo : NSObject {
    NSHashTable *_referencedDataHashTable;
    TSPReferenceOrderedSet *_referencedObjectsSet;
    NSMutableSet *_referencedObjectUUIDs;
    NSArray *_referencedData;
    NSArray *_referencedObjects;
}


@property (readonly, nonatomic) NSArray *referencedData;
@property (readonly, nonatomic) NSSet *referencedObjectUUIDs;
@property (readonly, nonatomic) NSArray *referencedObjects;


-(id)init;
-(id)initWithObject:(id)arg0 referenceDepth:(NSUInteger)arg1 ;
-(void)visitObject:(id)arg0 rootObject:(id)arg1 referenceDepth:(NSUInteger)arg2 ;
-(void)visitObjectReferences:(id)arg0 rootObject:(id)arg1 referenceDepth:(NSUInteger)arg2 ;


@end


#endif