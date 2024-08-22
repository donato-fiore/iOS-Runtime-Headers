// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSMEMORYSTOREPREDICATEREMAPPER_H
#define _NSMEMORYSTOREPREDICATEREMAPPER_H

@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>

#import "NSManagedObjectContext.h"

@interface _NSMemoryStorePredicateRemapper : NSObject <NSPredicateVisitor>

 {
    NSManagedObjectContext *_context;
}




+(id)defaultInstance;
-(id)createPredicateForFetchFromPredicate:(id)arg0 ;
-(id)createPredicateForFetchFromPredicate:(id)arg0 withContext:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif