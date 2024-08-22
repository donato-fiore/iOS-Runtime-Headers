// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSCOREDATATAGGEDOBJECTID_H
#define _NSCOREDATATAGGEDOBJECTID_H

@class NSScalarObjectID;



@interface _NSCoreDataTaggedObjectID : NSScalarObjectID



+(BOOL)_usesTaggedPointers;
+(Class)classWithStore:(id)arg0 andEntity:(id)arg1 ;
+(id)_storeInfo1;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)managedObjectIDFromURIRepresentation:(id)arg0 ;
+(unsigned int)allocateBatch:(*id)arg0 count:(unsigned int)arg1 ;
+(void)_setStoreInfo1:(id)arg0 ;
+(void)_storeDeallocated;
+(void)initialize;
+(void)setObjectStoreIdentifier:(id)arg0 ;
-(BOOL)_isPersistentStoreAlive;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTemporaryID;
-(NSInteger)_referenceData64;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)_retainedURIString;
-(id)_storeIdentifier;
-(id)_storeInfo1;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)entity;
-(id)entityName;
-(id)initWithObject:(id)arg0 ;
-(id)initWithPK64:(NSInteger)arg0 ;
-(id)persistentStore;
-(id)retain;
-(void)dealloc;
-(void)release;


@end


#endif