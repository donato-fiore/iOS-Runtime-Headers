// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFSQLGENERATORCOMPARISONPREDICATENODE_H
#define EFSQLGENERATORCOMPARISONPREDICATENODE_H

@class NSString, NSArray;
@protocol EFSQLGeneratorPredicateNode, EFSQLExpressable;

#import <Foundation/Foundation.h>


@interface EFSQLGeneratorComparisonPredicateNode : NSObject <EFSQLGeneratorPredicateNode>



@property (readonly, nonatomic) NSObject<EFSQLExpressable> *constValue; // ivar: _constValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *keypathGenerators; // ivar: _keypathGenerators
@property (readonly, nonatomic) NSUInteger predicateOperator; // ivar: _predicateOperator
@property (readonly) Class superclass;


-(id)initWithKeypathGenerators:(id)arg0 predicateOperator:(NSUInteger)arg1 constValue:(id)arg2 ;
-(id)sqlExpressableWithTableExpressions:(id)arg0 ;
-(void)traverseTreeWithAliasMap:(id)arg0 ;


@end


#endif