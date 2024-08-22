// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXTRANSACTIONGROUP_H
#define CXTRANSACTIONGROUP_H

@class NSArray, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CXTransactionGroup : NSObject

@property (readonly, copy, nonatomic) NSArray *allActions;
@property (readonly, nonatomic) NSMutableDictionary *callSourceIdentifierToTransaction; // ivar: _callSourceIdentifierToTransaction
@property (readonly, copy, nonatomic) NSArray *callSources;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, nonatomic) NSMutableArray *mutableCallSources; // ivar: _mutableCallSources
@property (readonly, copy, nonatomic) NSArray *transactions;


-(id)description;
-(id)init;
-(id)transactionForCallSource:(id)arg0 ;
-(void)addAction:(id)arg0 forCallSource:(id)arg1 ;


@end


#endif