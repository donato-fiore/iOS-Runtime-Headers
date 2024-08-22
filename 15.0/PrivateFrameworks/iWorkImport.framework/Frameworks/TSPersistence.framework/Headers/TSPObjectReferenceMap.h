// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPOBJECTREFERENCEMAP_H
#define TSPOBJECTREFERENCEMAP_H

@protocol TSPExternalReferenceDelegate;

#import <Foundation/Foundation.h>

#import "TSPObjectContext.h"

@interface TSPObjectReferenceMap : NSObject {
    TSPObjectContext *_context;
    id<TSPExternalReferenceDelegate> *_delegate;
    IdentifierMap<TSP::ReferenceMapInfo> _inverseReferenceMap;
    IdentifierMap<__unsafe_unretained Class> _classMap;
}




-(BOOL)hasParentsForObjectIdentifier:(NSInteger)arg0 ;
-(NSUInteger)visitObjectWithIdentifier:(NSInteger)arg0 level:(NSUInteger)arg1 mode:(int)arg2 limit:(NSUInteger)arg3 pathSuffix:(id)arg4 visitedObjectIdentifiers:(id)arg5 updatingParentObjectPaths:(id)arg6 ;
-(id)descriptionOfAllPossiblePathsToObject:(id)arg0 withLimit:(NSUInteger)arg1 ;
-(id)descriptionOfAllPossiblePathsToObjectIdentifier:(NSInteger)arg0 withLimit:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithContext:(id)arg0 delegate:(id)arg1 ;
-(id)initWithContext:(id)arg0 delegate:(id)arg1 externalReferencesFromComponent:(id)arg2 ;
-(id)parentObjectPathsForObjectIdentifier:(NSInteger)arg0 limit:(NSUInteger)arg1 totalParentObjects:(*NSUInteger)arg2 ;
-(id)parentObjectsForObject:(id)arg0 ;
-(id)parentObjectsForObjectIdentifier:(NSInteger)arg0 ;
-(void)addObjectReferenceMap:(id)arg0 ;
-(void)addReferenceFromObjectIdentifier:(NSInteger)arg0 toObjectIdentifier:(NSInteger)arg1 ;
-(void)addReferenceFromObjectIdentifier:(NSInteger)arg0 toObjectOrLazyReference:(id)arg1 ;
-(void)addReferencesFromObject:(id)arg0 archiver:(id)arg1 ;
-(void)mergeWithObjectReferenceMap:(id)arg0 ;


@end


#endif