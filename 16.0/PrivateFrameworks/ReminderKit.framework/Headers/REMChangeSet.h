// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMCHANGESET_H
#define REMCHANGESET_H

@class NSArray, NSError;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMChangeSet : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *deletes; // ivar: _deletes
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSArray *filterByTransactionAuthorStrings; // ivar: _filterByTransactionAuthorStrings
@property (nonatomic) BOOL filterByTransactionAuthorsIsExclusion; // ivar: _filterByTransactionAuthorsIsExclusion
@property (retain, nonatomic) NSArray *filteredTransactions; // ivar: _filteredTransactions
@property (retain, nonatomic) NSArray *inserts; // ivar: _inserts
@property (nonatomic) BOOL isTruncated; // ivar: _isTruncated
@property (readonly, nonatomic) NSArray *transactions; // ivar: _transactions
@property (retain, nonatomic) NSArray *updates; // ivar: _updates


+(BOOL)supportsSecureCoding;
+(id)errorChangeSetWithError:(id)arg0 ;
-(BOOL)_filterAndFlattenAndConsolidateChanges;
-(BOOL)applyFilterByTransactionAuthors:(id)arg0 isExclusion:(BOOL)arg1 ;
-(BOOL)consolidateAndFilterChangesWithTransactionAuthors:(id)arg0 isExclusion:(BOOL)arg1 ;
-(BOOL)enumerateChanges:(NSInteger)arg0 forModelsOfClass:(Class)arg1 withBlock:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithChangeTransactions:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)lastChangeTokenForAccountID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif