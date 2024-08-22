// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFETCHREQUEST_H
#define NSFETCHREQUEST_H

@class NSArray, NSPredicate, NSString;
@protocol NSSecureCoding, NSCoding, NSCopying;


#import "NSPersistentStoreRequest.h"
#import "NSEntityDescription.h"

@interface NSFetchRequest : NSPersistentStoreRequest <NSSecureCoding, NSCoding, NSCopying>

 {
    NSArray *_groupByProperties;
    NSPredicate *_havingPredicate;
    *id _additionalPrivateIvars;
    NSArray *_valuesToFetch;
    NSEntityDescription *_entity;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    NSUInteger _batchSize;
    NSUInteger _fetchLimit;
    NSUInteger _allocationSize;
    NSArray *_relationshipKeyPathsForPrefetching;
    _fetchRequestFlags _flags;
}


@property (retain, nonatomic) NSArray *affectedStores;
@property (retain, nonatomic) NSEntityDescription *entity;
@property (readonly, nonatomic) NSString *entityName;
@property (nonatomic) NSUInteger fetchBatchSize;
@property (nonatomic) NSUInteger fetchLimit;
@property (nonatomic) NSUInteger fetchOffset;
@property (retain, nonatomic) NSPredicate *havingPredicate;
@property (nonatomic) BOOL includesPendingChanges;
@property (nonatomic) BOOL includesPropertyValues;
@property (nonatomic) BOOL includesSubentities;
@property (retain, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *propertiesToFetch;
@property (copy, nonatomic) NSArray *propertiesToGroupBy;
@property (nonatomic) BOOL purgeableResult;
@property (copy, nonatomic) NSArray *relationshipKeyPathsForPrefetching;
@property (nonatomic) NSUInteger resultType;
@property (nonatomic) BOOL returnsDistinctResults;
@property (nonatomic) BOOL returnsObjectsAsFaults;
@property (nonatomic) BOOL shouldRefreshRefetchedObjects;
@property (retain, nonatomic) NSArray *sortDescriptors;


+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)supportsSecureCoding;
+(id)_newDenormalizedFetchProperties:(id)arg0 ;
+(id)_stringForFetchRequestResultType:(NSUInteger)arg0 ;
+(id)decodeFromXPCArchive:(id)arg0 withContext:(id)arg1 andPolicy:(id)arg2 ;
+(id)fetchRequestWithEntityName:(id)arg0 ;
+(void)initialize;
-(BOOL)_disablePersistentStoreResultCaching;
-(BOOL)_isAsyncRequest;
-(BOOL)_isCachingFetchRequest;
-(BOOL)_isEditable;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_encodedFetchRequestFlagsForFlags:(NSUInteger)arg0 ;
-(NSUInteger)_fetchBatchLRUEntriesLimit;
-(NSUInteger)allocationSize;
-(NSUInteger)allocationType;
-(NSUInteger)hash;
-(NSUInteger)requestType;
-(id)_XPCEncodedFlags;
-(id)_asyncResultHandle;
-(id)_copyForDirtyContext;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeForXPC;
-(id)execute:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntityName:(id)arg0 ;
-(void)_incrementInUseCounter;
-(void)_resolveEntityWithContext:(id)arg0 ;
-(void)_setAsyncResultHandle:(id)arg0 ;
-(void)_setDisablePersistentStoreResultCaching:(BOOL)arg0 ;
-(void)_setFetchBatchLRUEntriesLimit:(NSUInteger)arg0 ;
-(void)_setFlagsFromXPCEncoding:(id)arg0 ;
-(void)_throwIfNotEditable;
-(void)_writeIntoData:(id)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(id)arg4 uniquedMappings:(id)arg5 entities:(id)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAllocationSize:(NSUInteger)arg0 ;
-(void)setAllocationType:(NSUInteger)arg0 ;


@end


#endif