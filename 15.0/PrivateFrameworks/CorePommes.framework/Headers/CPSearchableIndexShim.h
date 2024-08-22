// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSEARCHABLEINDEXSHIM_H
#define CPSEARCHABLEINDEXSHIM_H

@class CSSearchableIndex;
@protocol CPIndex, CSSearchableIndexDelegate;

#import <Foundation/Foundation.h>


@interface CPSearchableIndexShim : NSObject {
    id<CPIndex> *_index;
    CSSearchableIndex *_spotlightIndex;
}


@property (weak) NSObject<CSSearchableIndexDelegate> *indexDelegate; // ivar: _indexDelegate


+(BOOL)dualDonationEnabled;
+(id)_summaryLoggingStringForSearchableItems:(id)arg0 ;
+(id)defaultSearchableIndex;
+(id)log;
+(id)signpostLog;
+(id)userDefaults;
+(void)setDualDonationEnabled:(BOOL)arg0 ;
-(id)initWithIndex:(id)arg0 spotlightIndex:(id)arg1 ;
-(id)initWithName:(id)arg0 protectionClass:(id)arg1 ;
-(id)initWithName:(id)arg0 protectionClass:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_issueCommand:(id)arg0 completionHandler:(id)arg1 ;
-(void)beginIndexBatch;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg0 toState:(NSInteger)arg1 ;
-(void)deleteAllSearchableItemsWithCompletionHandler:(id)arg0 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)endIndexBatchWithClientState:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchLastClientStateWithCompletionHandler:(id)arg0 ;
-(void)indexSearchableItems:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif