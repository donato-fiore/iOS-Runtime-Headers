// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSPERSISTENTHISTORYPREDICATEREMAPPER_H
#define _NSPERSISTENTHISTORYPREDICATEREMAPPER_H

@class NSString;
@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>


@interface _NSPersistentHistoryPredicateRemapper : NSObject <NSPredicateVisitor>

 {
    NSString *_storeID;
    BOOL _previousKeyPathExpressionWasToken;
}




+(id)defaultInstance;
-(id)createPredicateForFetchFromPredicate:(id)arg0 ;
-(id)createPredicateForFetchFromPredicate:(id)arg0 withContext:(id)arg1 ;
-(id)initWithStoreIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif