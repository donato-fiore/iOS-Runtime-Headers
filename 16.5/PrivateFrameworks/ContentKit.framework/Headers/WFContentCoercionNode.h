// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTENTCOERCIONNODE_H
#define WFCONTENTCOERCIONNODE_H

@class NSOrderedSet;

#import <Foundation/Foundation.h>

#import "WFContentCoercionNode.h"

@interface WFContentCoercionNode : NSObject

@property (readonly, nonatomic) NSOrderedSet *coercionPath;
@property (readonly, nonatomic) id *itemOrItemClass; // ivar: _itemOrItemClass
@property (readonly, nonatomic) NSOrderedSet *itemOrItemClassPath;
@property (readonly, nonatomic) WFContentCoercionNode *parent; // ivar: _parent


+(id)coercionNodeWithItem:(id)arg0 parent:(id)arg1 ;
+(id)coercionNodeWithItemClass:(Class)arg0 parent:(id)arg1 ;
+(id)coercionNodeWithItemOrItemClass:(id)arg0 parent:(id)arg1 ;
-(id)continueCoercionUsingPathEnumerator:(id)arg0 contentItems:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)description;
-(id)initWithItemOrItemClass:(id)arg0 parent:(id)arg1 ;
-(id)runCoercionSynchronouslyWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)successorsWithOptions:(id)arg0 ;
-(id)successorsWithOptions:(id)arg0 goalType:(id)arg1 ;
-(void)continueCoercionUsingPathEnumerator:(id)arg0 contentItems:(id)arg1 options:(id)arg2 error:(id)arg3 completionHandler:(id)arg4 ;
-(void)runCoercionWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif