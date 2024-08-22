// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFSQLQUERYGENERATOR_H
#define EFSQLQUERYGENERATOR_H


#import <Foundation/Foundation.h>


@interface EFSQLQueryGenerator : NSObject



+(id)compiledSQLQueryWithPredicateNodes:(id)arg0 selectGenerators:(id)arg1 orderByGenerators:(id)arg2 selectAll:(BOOL)arg3 ;
+(id)expressionGeneratorsForSortDescriptors:(id)arg0 propertyMapper:(id)arg1 ;
+(id)getChildrenFromPropertyMapper:(id)arg0 previousTable:(id)arg1 previousExpressionGenerator:(id)arg2 ;
+(id)selectExpressionGeneratorForReturnObjectKeypath:(id)arg0 propertyMapper:(id)arg1 ;
+(id)sqlQueryForReturnObjectKeypaths:(id)arg0 query:(id)arg1 propertyMapper:(id)arg2 ;
+(id)traverseKeypath:(id)arg0 keyPropertyMapper:(id)arg1 previousExpressionGenerator:(id)arg2 ;


@end


#endif