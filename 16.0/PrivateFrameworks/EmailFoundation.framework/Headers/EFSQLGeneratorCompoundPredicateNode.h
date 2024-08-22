// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFSQLGENERATORCOMPOUNDPREDICATENODE_H
#define EFSQLGENERATORCOMPOUNDPREDICATENODE_H

@class NSArray, NSString;
@protocol EFSQLGeneratorPredicateNode;

#import <Foundation/Foundation.h>


@interface EFSQLGeneratorCompoundPredicateNode : NSObject <EFSQLGeneratorPredicateNode>



@property (readonly, nonatomic) NSArray *childPredicates; // ivar: _childPredicates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger predicateType; // ivar: _predicateType
@property (readonly) Class superclass;


-(id)initWithPredicateType:(NSUInteger)arg0 childPredicates:(id)arg1 ;
-(id)sqlExpressableWithTableExpressions:(id)arg0 ;
-(void)traverseTreeWithAliasMap:(id)arg0 ;


@end


#endif