// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFILECOORDINATEDTODAYDROPBOXTRANSACTION_H
#define FCFILECOORDINATEDTODAYDROPBOXTRANSACTION_H

@class NSSet, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCFileCoordinatedTodayDropboxTransaction : NSObject <NSCopying>



@property (copy, nonatomic) NSSet *deletedArticleIDs; // ivar: _deletedArticleIDs
@property (copy, nonatomic) NSArray *insertedOrUpdatedHistoryItems; // ivar: _insertedOrUpdatedHistoryItems
@property (nonatomic) NSUInteger transactionType; // ivar: _transactionType


+(id)collapsedTransactionOfTransactions:(id)arg0 ;
+(id)transactionOfIdentity;
+(id)transactionToClearSeenArticles;
+(id)transactionToMutateSeenArticlesWithInsertedOrUpdatedHistoryItems:(id)arg0 deletedArticleIDs:(id)arg1 ;
+(void)_mergeItem:(id)arg0 intoItem:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTransactionType:(NSUInteger)arg0 insertedOrUpdatedHistoryItems:(id)arg1 deletedArticleIDs:(id)arg2 ;
-(id)todayPrivateDataAccessor:(SEL)arg0 ;
-(void)_mergeItem:(id)arg0 intoItem:(id)arg1 ;


@end


#endif