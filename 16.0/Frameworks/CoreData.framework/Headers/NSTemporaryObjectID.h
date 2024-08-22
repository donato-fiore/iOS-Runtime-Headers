// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSTEMPORARYOBJECTID_H
#define NSTEMPORARYOBJECTID_H



#import "NSManagedObjectID.h"
#import "NSEntityDescription.h"

@interface NSTemporaryObjectID : NSManagedObjectID {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}




+(BOOL)_usesTaggedPointers;
+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(Class)classForStore:(id)arg0 ;
+(NSInteger)version;
+(id)_retain_1;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)initWithEntity:(id)arg0 ;
+(id)initWithEntity:(id)arg0 andUUIDString:(id)arg1 ;
+(unsigned int)allocateBatch:(*id)arg0 forEntity:(id)arg1 count:(unsigned int)arg2 ;
+(void)_release_1;
+(void)_storeDeallocated;
+(void)initialize;
+(void)setObjectStoreIdentifier:(id)arg0 ;
-(BOOL)_isPersistentStoreAlive;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTemporaryID;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)URIRepresentation;
-(id)_referenceData;
-(id)_retainedURIString;
-(id)_storeIdentifier;
-(id)entity;
-(id)initWithEntity:(id)arg0 ;
-(id)initWithEntity:(id)arg0 andUUIDString:(id)arg1 ;
-(id)persistentStore;
-(id)retain;
-(int)_temporaryIDCounter;
-(void)_setPersistentStore:(id)arg0 ;
-(void)dealloc;
-(void)release;


@end


#endif