// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCONTACTSTORAGE_H
#define PPCONTACTSTORAGE_H

@class CNContactStore, SGSqlEntityStore, NSString;
@protocol OS_dispatch_semaphore, OS_dispatch_queue, SGSuggestionsServiceContactsProtocol;

#import <Foundation/Foundation.h>

#import "PPContactDiskCacheManager.h"
#import "PPMeCardCacheManager.h"
#import "PPSQLDatabase.h"

@interface PPContactStorage : NSObject {
    CNContactStore *_contactsStore;
    NSObject<OS_dispatch_semaphore> *_concurrentContactQueryThrottleSem;
    NSObject<OS_dispatch_queue> *_concurrentContactQueryQueue;
    PPContactDiskCacheManager *_contactCacheManager;
    PPMeCardCacheManager *_meCardCacheManager;
    id<SGSuggestionsServiceContactsProtocol> *_foundInAppsService;
    SGSqlEntityStore *_foundInAppsHarvestStore;
    NSString *_path;
    PPSQLDatabase *_db;
    BOOL _chineseBirthdayFound;
}




+(id)normalizeHandle:(id)arg0 ;
-(BOOL)chineseBirthdayFound;
-(BOOL)iterAllNameRecordsFromAllSourcesWithError:(*id)arg0 block:(id)arg1 ;
-(NSInteger)insertIfNeededAndFetchIdentifierWithHandle:(id)arg0 txnWitness:(id)arg1 ;
-(NSUInteger)pruneOrphanedHandlesWithTxnWitness:(id)arg0 ;
-(id)_joinResults:(id)arg0 ;
-(id)_waitForGroup:(id)arg0 results:(id)arg1 ;
-(id)_waitForGroup:(id)arg0 results:(id)arg1 timeoutSeconds:(CGFloat)arg2 explanationSet:(id)arg3 ;
-(id)cachedSignificantContactHandles;
-(id)contactHandleSourceCountsWithMinimumSourceCount:(NSUInteger)arg0 ;
-(id)contactHandlesForSource:(id)arg0 ;
-(id)contactHandlesForTopics:(id)arg0 ;
-(id)contactNameRecordsWithHistoryResult:(id)arg0 truncated:(*BOOL)arg1 error:(*id)arg2 ;
-(id)contactsChangeHistoryForClient:(id)arg0 error:(*id)arg1 ;
-(id)contactsContactsWithQuery:(id)arg0 explanationSet:(id)arg1 error:(*id)arg2 ;
-(id)contactsWithQuery:(id)arg0 explanationSet:(id)arg1 timeoutSeconds:(id)arg2 error:(*id)arg3 ;
-(id)emailFilterWithQuery:(SEL)arg0 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 foundInAppsHarvestStore:(id)arg1 ;
-(id)meCard;
-(id)nameFilterWithQuery:(SEL)arg0 ;
-(id)phoneFilterWithQuery:(SEL)arg0 ;
-(id)postalAddressFilterWithQuery:(SEL)arg0 ;
-(id)sourcesForContactHandle:(id)arg0 ;
-(void)asyncFillResultsFromContactsWithQuery:(id)arg0 explanationSet:(id)arg1 group:(id)arg2 results:(id)arg3 ;
-(void)asyncFillResultsFromFoundInAppsWithQuery:(id)arg0 explanationSet:(id)arg1 group:(id)arg2 results:(id)arg3 ;
-(void)clearChangeHistoryForClient:(id)arg0 historyResult:(id)arg1 ;
-(void)loadChineseBirthdayFoundKVData;
-(void)setCachedSignificantContactHandles:(id)arg0 ;
-(void)setChineseBirthdayFound:(BOOL)arg0 ;
-(void)setChineseBirthdayFoundKVData;
-(void)storeHandleSourceMapWithHandles:(id)arg0 sourceId:(NSInteger)arg1 txnWitness:(id)arg2 ;


@end


#endif