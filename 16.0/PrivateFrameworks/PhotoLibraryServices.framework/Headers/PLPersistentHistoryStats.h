// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPERSISTENTHISTORYSTATS_H
#define PLPERSISTENTHISTORYSTATS_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface PLPersistentHistoryStats : NSObject

@property (nonatomic) NSInteger changesPageCount; // ivar: _changesPageCount
@property (readonly, nonatomic) CGFloat changesPageCountPercent;
@property (readonly, nonatomic) CGFloat changesPageCountPercentOfPayload;
@property (readonly, nonatomic) NSInteger daysSinceEarliestTransaction;
@property (copy, nonatomic) NSDate *earliestTransactionDate; // ivar: _earliestTransactionDate
@property (nonatomic) NSInteger filePageCount; // ivar: _filePageCount
@property (readonly, nonatomic) NSInteger payloadPageCount;
@property (readonly, nonatomic) NSInteger persistentHistoryPageCount;
@property (readonly, nonatomic) CGFloat persistentHistoryPageCountPercent;
@property (readonly, nonatomic) CGFloat persistentHistoryPageCountPercentOfPayload;
@property (nonatomic) NSInteger transactionCount; // ivar: _transactionCount
@property (nonatomic) NSInteger transactionStringsPageCount; // ivar: _transactionStringsPageCount
@property (readonly, nonatomic) CGFloat transactionStringsPageCountPercent;
@property (readonly, nonatomic) CGFloat transactionStringsPageCountPercentOfPayload;
@property (nonatomic) NSInteger transactionsPageCount; // ivar: _transactionsPageCount
@property (readonly, nonatomic) CGFloat transactionsPageCountPercent;
@property (readonly, nonatomic) CGFloat transactionsPageCountPercentOfPayload;
@property (nonatomic) NSInteger unusedPageCount; // ivar: _unusedPageCount


+(BOOL)fetchEarliestTransactionDateFromDatabase:(id)arg0 intoStats:(id)arg1 ;
+(BOOL)fetchPageCountsOfPersistentHistoryTablesFromDatabase:(id)arg0 intoStats:(id)arg1 ;
+(BOOL)fetchTotalPageCountFromDatabase:(id)arg0 intoStats:(id)arg1 ;
+(BOOL)fetchTransactionCountFromDatabase:(id)arg0 intoStats:(id)arg1 ;
+(BOOL)fetchUnusedPageCountFromDatabase:(id)arg0 intoStats:(id)arg1 ;
+(id)statsFromDatabase:(id)arg0 ;
-(CGFloat)_pageCountAsPercentOfFile:(NSInteger)arg0 ;
-(CGFloat)_pageCountAsPercentOfPayload:(NSInteger)arg0 ;


@end


#endif