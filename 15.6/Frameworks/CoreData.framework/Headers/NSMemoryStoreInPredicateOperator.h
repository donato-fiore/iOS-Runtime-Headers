// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSMEMORYSTOREINPREDICATEOPERATOR_H
#define NSMEMORYSTOREINPREDICATEOPERATOR_H

@class NSInPredicateOperator;


#import "NSManagedObjectContext.h"

@interface NSMemoryStoreInPredicateOperator : NSInPredicateOperator {
    NSManagedObjectContext *_context;
}




-(BOOL)performPrimitiveOperationUsingObject:(id)arg0 andObject:(id)arg1 ;
-(void)dealloc;
-(void)setContext:(id)arg0 ;


@end


#endif