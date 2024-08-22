// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPERSISTENTHISTORYCHANGEREQUEST_H
#define NSPERSISTENTHISTORYCHANGEREQUEST_H

@class NSArray, NSNumber;


#import "NSPersistentStoreRequest.h"
#import "NSFetchRequest.h"
#import "NSPersistentHistoryToken.h"

@interface NSPersistentHistoryChangeRequest : NSPersistentStoreRequest {
    NSArray *_transactionIDs;
    NSNumber *_transactionNumber;
    __persistentHistoryChangeRequestDescriptionFlags _persistentHistoryChangeRequestDescriptionFlags;
    *id _additionalPrivateIvars;
    NSUInteger _percentageOfDB;
}


@property (retain, nonatomic) NSFetchRequest *fetchRequest;
@property NSInteger resultType; // ivar: _resultType
@property (readonly) NSPersistentHistoryToken *token; // ivar: _token


+(id)decodeFromXPCArchive:(id)arg0 withContext:(id)arg1 withPolicy:(id)arg2 ;
+(id)deleteHistoryBeforeDate:(id)arg0 ;
+(id)deleteHistoryBeforeDate:(id)arg0 whenHistoryPercentageOfStoreIsGreaterThan:(NSUInteger)arg1 ;
+(id)deleteHistoryBeforeToken:(id)arg0 ;
+(id)deleteHistoryBeforeToken:(id)arg0 whenHistoryPercentageOfStoreIsGreaterThan:(NSUInteger)arg1 ;
+(id)deleteHistoryBeforeTransaction:(id)arg0 ;
+(id)fetchHistoryAfterDate:(id)arg0 ;
+(id)fetchHistoryAfterToken:(id)arg0 ;
+(id)fetchHistoryAfterTransaction:(id)arg0 ;
+(id)fetchHistoryTransactionForToken:(id)arg0 ;
+(id)fetchHistoryWithFetchRequest:(id)arg0 ;
-(BOOL)includesSubentities;
-(BOOL)isDelete;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFetchTransactionForToken;
-(BOOL)isPercentageDelete;
-(BOOL)useQueryGenerationToken;
-(NSUInteger)fetchBatchSize;
-(NSUInteger)fetchLimit;
-(NSUInteger)fetchOffset;
-(NSUInteger)percentageOfDB;
-(NSUInteger)requestType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)date;
-(id)debugDescription;
-(id)description;
-(id)encodeForXPC;
-(id)entityNameToFetch;
-(id)init;
-(id)initWithDate:(id)arg0 ;
-(id)initWithDate:(id)arg0 delete:(BOOL)arg1 ;
-(id)initWithDate:(id)arg0 delete:(BOOL)arg1 percentageOfDB:(NSUInteger)arg2 ;
-(id)initWithFetchRequest:(id)arg0 ;
-(id)initWithToken:(id)arg0 ;
-(id)initWithToken:(id)arg0 delete:(BOOL)arg1 ;
-(id)initWithToken:(id)arg0 delete:(BOOL)arg1 percentageOfDB:(NSUInteger)arg2 ;
-(id)initWithTransactionID:(id)arg0 delete:(BOOL)arg1 transactionOnly:(BOOL)arg2 percentageOfDB:(NSUInteger)arg3 ;
-(id)initWithTransactionIDs:(id)arg0 ;
-(id)initWithTransactionToken:(id)arg0 ;
-(id)predicate;
-(id)predicateForStoreIdentifier:(id)arg0 ;
-(id)propertiesToFetch;
-(id)propertiesToFetchForEntity:(id)arg0 ;
-(id)propertiesToFetchForEntity:(id)arg0 includeTransactionStrings:(BOOL)arg1 ;
-(id)transactionIDs;
-(id)transactionNumber;
-(void)dealloc;
-(void)setFetchBatchSize:(NSUInteger)arg0 ;
-(void)setFetchLimit:(NSUInteger)arg0 ;
-(void)setFetchOffset:(NSUInteger)arg0 ;
-(void)setUseQueryGenerationToken:(BOOL)arg0 ;


@end


#endif