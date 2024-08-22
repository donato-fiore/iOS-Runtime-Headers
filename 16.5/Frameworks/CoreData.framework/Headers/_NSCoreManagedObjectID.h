// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSCOREMANAGEDOBJECTID_H
#define _NSCOREMANAGEDOBJECTID_H



#import "NSManagedObjectID.h"

@interface _NSCoreManagedObjectID : NSManagedObjectID



+(BOOL)_usesTaggedPointers;
+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(Class)classWithStore:(id)arg0 andEntity:(id)arg1 ;
+(NSInteger)version;
+(char *)generatedNameSuffix;
+(id)_retain_1;
+(id)_storeInfo1;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)managedObjectIDFromURIRepresentation:(id)arg0 ;
+(id)managedObjectIDFromUTF8String:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)retain;
+(unsigned int)allocateBatch:(*id)arg0 count:(unsigned int)arg1 ;
+(void)_release_1;
+(void)_setStoreInfo1:(id)arg0 ;
+(void)_storeDeallocated;
+(void)initialize;
+(void)release;
+(void)setObjectStoreIdentifier:(id)arg0 ;
-(BOOL)_isPersistentStoreAlive;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTemporaryID;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)URIRepresentation;
-(id)_storeIdentifier;
-(id)_storeInfo1;
-(id)entity;
-(id)entityName;
-(id)persistentStore;
-(id)retain;
-(void)release;


@end


#endif