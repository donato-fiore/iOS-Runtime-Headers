// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMEMORYSTOREEQUALITYPREDICATEOPERATOR_H
#define NSMEMORYSTOREEQUALITYPREDICATEOPERATOR_H

@class NSEqualityPredicateOperator;


#import "NSManagedObjectContext.h"

@interface NSMemoryStoreEqualityPredicateOperator : NSEqualityPredicateOperator {
    NSManagedObjectContext *_context;
}




-(BOOL)performPrimitiveOperationUsingObject:(id)arg0 andObject:(id)arg1 ;
-(void)dealloc;
-(void)setContext:(id)arg0 ;


@end


#endif