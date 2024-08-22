// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSCHILDCONTEXTPREDICATEREMAPPER_H
#define _NSCHILDCONTEXTPREDICATEREMAPPER_H

@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>

#import "NSManagedObjectContext.h"

@interface _NSChildContextPredicateRemapper : NSObject <NSPredicateVisitor>

 {
    NSManagedObjectContext *_context;
}




-(id)createPredicateForFetchFromPredicate:(id)arg0 withContext:(id)arg1 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(void)dealloc;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif