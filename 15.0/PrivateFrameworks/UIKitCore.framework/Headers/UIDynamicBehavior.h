// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDYNAMICBEHAVIOR_H
#define UIDYNAMICBEHAVIOR_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "UIDynamicAnimator.h"

@interface UIDynamicBehavior : NSObject {
    UIDynamicAnimator *_context;
    NSMutableArray *_items;
    NSMutableArray *_behaviors;
    NSMutableArray *_addedBehaviors;
}


@property (copy, nonatomic) id *action; // ivar: _action
@property (readonly, copy, nonatomic) NSArray *childBehaviors;
@property (readonly, nonatomic) UIDynamicAnimator *dynamicAnimator;


+(BOOL)_isPrimitiveBehavior;
+(void)initialize;
-(BOOL)allowsAnimatorToStop;
-(id)_context;
-(id)_items;
-(id)_itemsDescription;
-(id)description;
-(id)init;
-(id)items;
-(void)_addItem:(id)arg0 ;
-(void)_associate;
-(void)_changedParameterForBody:(id)arg0 ;
-(void)_detachAutolayoutFromItemIfNecessary:(id)arg0 ;
-(void)_dissociate;
-(void)_reattachAutolayoutToItemIfNecessary:(id)arg0 ;
-(void)_reevaluate:(NSUInteger)arg0 ;
-(void)_removeItem:(id)arg0 ;
-(void)_setContext:(id)arg0 ;
-(void)_setItems:(id)arg0 ;
-(void)_step;
-(void)_updateAutolayoutEngagementForItemIfNecessary:(id)arg0 detach:(BOOL)arg1 ;
-(void)addChildBehavior:(id)arg0 ;
-(void)removeChildBehavior:(id)arg0 ;
-(void)willMoveToAnimator:(id)arg0 ;


@end


#endif