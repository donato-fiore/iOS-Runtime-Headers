// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDPREDICATETOSQLCONVERTER_H
#define IMDPREDICATETOSQLCONVERTER_H

@class NSMutableArray, NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface IMDPredicateToSQLConverter : NSObject {
    NSMutableArray *_foundParameters;
}


@property (readonly, copy, nonatomic) NSString *expression; // ivar: _expression
@property (readonly, copy, nonatomic) NSDictionary *keyPathsToColumns; // ivar: _keyPathsToColumns
@property (readonly, copy, nonatomic) NSArray *parameters;


-(id)init;
-(id)initWithPredicate:(id)arg0 keyPathsToColumns:(id)arg1 ;
-(void)bindParametersToSqliteWithStatement:(struct CSDBSqliteStatement *)arg0 ;


@end


#endif