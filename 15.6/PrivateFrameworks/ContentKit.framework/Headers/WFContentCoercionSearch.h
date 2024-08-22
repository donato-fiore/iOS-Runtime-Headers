// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTENTCOERCIONSEARCH_H
#define WFCONTENTCOERCIONSEARCH_H

@class NSMutableArray, NSArray, NSMutableOrderedSet;

#import <Foundation/Foundation.h>

#import "WFType.h"
#import "WFCoercionOptions.h"
#import "WFContentCoercionNode.h"

@interface WFContentCoercionSearch : NSObject

@property (readonly, nonatomic) NSMutableArray *agenda; // ivar: _agenda
@property (readonly, nonatomic) NSArray *goalItemClasses; // ivar: _goalItemClasses
@property (readonly, nonatomic) WFType *goalType; // ivar: _goalType
@property (readonly, nonatomic) WFCoercionOptions *options; // ivar: _options
@property (readonly, nonatomic) WFContentCoercionNode *startNode; // ivar: _startNode
@property (readonly, nonatomic) NSMutableOrderedSet *visitedStates; // ivar: _visitedStates


+(id)searchForCoercingItem:(id)arg0 toItemClass:(Class)arg1 options:(id)arg2 ;
+(id)searchForCoercingItem:(id)arg0 toItemClasses:(id)arg1 options:(id)arg2 ;
+(id)searchForCoercingItem:(id)arg0 toType:(id)arg1 options:(id)arg2 ;
-(BOOL)goalTest:(id)arg0 ;
-(BOOL)isCoercionPathAllowedForNode:(id)arg0 ;
-(id)badCoercionError;
-(id)continueCoercionWithContentItems:(id)arg0 error:(*id)arg1 ;
-(id)initWithStartNode:(id)arg0 goalItemClasses:(id)arg1 goalType:(id)arg2 options:(id)arg3 ;
-(id)nextPathNode;
-(id)runCoercionSynchronouslyWithError:(*id)arg0 ;
-(void)continueCoercionWithContentItems:(id)arg0 error:(id)arg1 handler:(id)arg2 ;
-(void)runCoercion:(id)arg0 ;


@end


#endif