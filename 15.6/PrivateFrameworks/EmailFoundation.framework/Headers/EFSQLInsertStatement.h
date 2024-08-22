// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFSQLINSERTSTATEMENT_H
#define EFSQLINSERTSTATEMENT_H

@class NSString, NSMutableArray, NSMutableOrderedSet;
@protocol EFSQLInsertStatementValue;

#import <Foundation/Foundation.h>


@interface EFSQLInsertStatement : NSObject <EFSQLInsertStatementValue>

 {
    NSString *_table;
    NSUInteger _conflictResolution;
    NSMutableArray *_values;
    NSMutableOrderedSet *_requiredColumns;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSString *queryString;
@property (readonly) Class superclass;


-(id)addValue;
-(id)initWithTable:(id)arg0 ;
-(id)initWithTable:(id)arg0 conflictResolution:(NSUInteger)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)enumerateBindingIndicesAndValuesUsingBlock:(id)arg0 ;
-(void)enumerateBindingNamesAndValuesUsingBlock:(id)arg0 ;
-(void)renderStatementWithNamedBindingsInto:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif