// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFSQLSELECTEXPRESSIONGENERATOR_H
#define EFSQLSELECTEXPRESSIONGENERATOR_H

@class NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface EFSQLSelectExpressionGenerator : NSObject

@property (readonly, nonatomic) NSArray *columnExpressionGenerators; // ivar: _columnExpressionGenerators
@property (readonly, nonatomic) NSSet *tableExpressionGenerators; // ivar: _tableExpressionGenerators


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSelectExpressionGenerator:(id)arg0 ;
-(NSUInteger)hash;
-(id)columnAliases;
-(id)initExpressionGeneratorWithColumns:(id)arg0 tables:(id)arg1 ;
-(id)selectExpression;


@end


#endif