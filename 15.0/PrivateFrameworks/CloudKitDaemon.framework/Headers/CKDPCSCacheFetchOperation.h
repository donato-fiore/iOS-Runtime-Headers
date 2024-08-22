// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPCSCACHEFETCHOPERATION_H
#define CKDPCSCACHEFETCHOPERATION_H

@class NSError, NSString;
@protocol OS_dispatch_group, CKSQLiteItem;


#import "CKDDatabaseOperation.h"
#import "CKDPCSCache.h"
#import "CKDRecordPCSData.h"
#import "CKDPCSData.h"

@interface CKDPCSCacheFetchOperation : CKDDatabaseOperation

@property (retain, nonatomic) CKDPCSCache *cache; // ivar: _cache
@property (retain, nonatomic) NSError *dependentPCSFetchError; // ivar: _dependentPCSFetchError
@property (nonatomic) BOOL didFetchData; // ivar: _didFetchData
@property (retain, nonatomic) NSError *fetchError; // ivar: _fetchError
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // ivar: _fetchGroup
@property (nonatomic) NSUInteger fetchOptions; // ivar: _fetchOptions
@property (readonly, nonatomic) BOOL hasAllPCSData;
@property (retain, nonatomic) NSObject<CKSQLiteItem> *itemID; // ivar: _itemID
@property (readonly, nonatomic) NSString *itemTypeName;
@property (nonatomic) int numRetries; // ivar: _numRetries
@property (retain, nonatomic) CKDRecordPCSData *parentPCSData; // ivar: _parentPCSData
@property (retain, nonatomic) CKDPCSData *pcsData; // ivar: _pcsData
@property (getter=isPCSDataInvalidated) BOOL pcsDataInvalidated; // ivar: _pcsDataInvalidated
@property (nonatomic) BOOL shouldRetry; // ivar: _shouldRetry
@property (nonatomic) NSUInteger state;
@property (nonatomic) BOOL wasFetchedFromCache; // ivar: _wasFetchedFromCache


-(BOOL)_createAdditionalPCS;
-(BOOL)_decryptPCS;
-(BOOL)_errorShouldImpactFlowControl:(id)arg0 ;
-(BOOL)_fetchDependentPCS;
-(BOOL)_fetchPCSDataFromDatabase;
-(BOOL)_fetchPCSDataFromServer;
-(BOOL)_savePCSDataToCache;
-(BOOL)_saveUpdatedPCSToServer;
-(BOOL)canBeUsedForOperation:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(BOOL)makeStateTransition;
-(BOOL)needsAdditionalPCSCreation;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_willRetryFetch;
-(void)main;


@end


#endif