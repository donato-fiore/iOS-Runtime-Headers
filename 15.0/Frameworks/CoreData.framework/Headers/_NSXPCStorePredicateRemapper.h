// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSXPCSTOREPREDICATEREMAPPER_H
#define _NSXPCSTOREPREDICATEREMAPPER_H

@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>


@interface _NSXPCStorePredicateRemapper : NSObject <NSPredicateVisitor>





+(id)defaultInstance;
+(void)initialize;
-(id)createPredicateForFetchFromPredicate:(id)arg0 ;
-(id)createPredicateForFetchFromPredicate:(id)arg0 withContext:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif