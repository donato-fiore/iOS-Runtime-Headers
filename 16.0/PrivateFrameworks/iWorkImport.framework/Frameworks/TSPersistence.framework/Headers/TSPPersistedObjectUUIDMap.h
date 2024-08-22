// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPPERSISTEDOBJECTUUIDMAP_H
#define TSPPERSISTEDOBJECTUUIDMAP_H

@class NSMutableIndexSet, NSString;
@protocol NSCopying, TSPObjectInDocumentContaining;

#import <Foundation/Foundation.h>


@interface TSPPersistedObjectUUIDMap : NSObject <NSCopying, TSPObjectInDocumentContaining>

 {
    *void _map;
    NSMutableIndexSet *_objectIdentifiers;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isAnyObjectIdentifierInDocument:(id)arg0 ;
-(BOOL)isObjectIdentifierInDocument:(NSInteger)arg0 ;
-(BOOL)setObjectLocation:(struct TSPObjectLocation )arg0 forUUID:(id)arg1 objectReferenceMap:(id)arg2 delegate:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionForComponentIdentifier:(NSInteger)arg0 objectIdentifier:(NSInteger)arg1 delegate:(id)arg2 ;
-(id)init;
-(id)initWithComponentObjectUUIDMapDictionary:(id)arg0 objectUUIDCount:(NSUInteger)arg1 isLoadingDocument:(BOOL)arg2 objectReferenceMap:(id)arg3 delegate:(id)arg4 ;
-(id)initWithPersistedObjectUUIDMap:(id)arg0 ;
-(struct TSPObjectLocation )objectLocationForUUID:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateObjectIdentifierDuringRead:(NSInteger)arg0 UUID:(id)arg1 componentIdentifier:(NSInteger)arg2 originalObjectIdentifier:(NSInteger)arg3 originalUUID:(id)arg4 delegate:(id)arg5 ;
-(void)didUpdateObjectIdentifierDuringRead:(NSInteger)arg0 forUUID:(id)arg1 componentIdentifier:(NSInteger)arg2 originalObjectIdentifier:(NSInteger)arg3 delegate:(id)arg4 ;
-(void)didUpdateUUIDDuringRead:(id)arg0 forComponentIdentifier:(NSInteger)arg1 objectIdentifier:(NSInteger)arg2 originalUUID:(id)arg3 isDuplicatedUUID:(BOOL)arg4 delegate:(id)arg5 ;
-(void)enumerateEntriesUsingBlock:(id)arg0 ;


@end


#endif