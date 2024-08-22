// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSQLITETABLESEARCHENUMERATORSETUPHELPER_H
#define CKSQLITETABLESEARCHENUMERATORSETUPHELPER_H

@class NSMutableArray, NSArray, NSNumber, NSPredicate;
@protocol CKSQLiteTableObjectMatchingSetup, CKSQLiteTablePredicateSetup;

#import <Foundation/Foundation.h>


@interface CKSQLiteTableSearchEnumeratorSetupHelper : NSObject <CKSQLiteTableObjectMatchingSetup, CKSQLiteTablePredicateSetup>

 {
    NSMutableArray *_orderByProperties;
}


@property (retain, nonatomic) NSArray *fetchedProperties; // ivar: _fetchedProperties
@property (retain, nonatomic) NSNumber *limit; // ivar: _limit
@property (retain, nonatomic) NSNumber *offset; // ivar: _offset
@property (retain, nonatomic) NSPredicate *searchPredicate; // ivar: _searchPredicate
@property (retain, nonatomic) NSArray *searchProperties; // ivar: _searchProperties


-(void)orderAscendingByProperty:(id)arg0 ;
-(void)orderDescendingByProperty:(id)arg0 ;
-(void)setupStatement:(id)arg0 ;


@end


#endif