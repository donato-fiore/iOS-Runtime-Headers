// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDMUTABLEDATABASETRANSACTIONCONTEXT_H
#define HDMUTABLEDATABASETRANSACTIONCONTEXT_H



#import "HDDatabaseTransactionContext.h"
#import "HDDatabaseTransactionContextStatistics.h"

@interface HDMutableDatabaseTransactionContext : HDDatabaseTransactionContext

@property (nonatomic) NSInteger cacheScope;
@property (nonatomic) BOOL highPriority;
@property (nonatomic) NSInteger journalType;
@property (nonatomic) BOOL requiresNewDatabaseConnection;
@property (nonatomic) BOOL requiresProtectedData;
@property (nonatomic) BOOL requiresWrite;
@property (nonatomic) BOOL skipJournalMerge;
@property (retain, nonatomic) HDDatabaseTransactionContextStatistics *statistics;


+(id)contextForReading;
+(id)contextForReadingProtectedData;
+(id)contextForWriting;
+(id)contextForWritingProtectedData;
-(id)contextWithAccessibilityAssertion:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addAccessibilityAssertion:(id)arg0 ;


@end


#endif