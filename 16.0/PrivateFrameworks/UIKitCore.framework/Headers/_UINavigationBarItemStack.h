// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONBARITEMSTACK_H
#define _UINAVIGATIONBARITEMSTACK_H

@class NSArray, NSMutableArray;
@protocol _UINavigationItemChangeObserver;

#import <Foundation/Foundation.h>

#import "_UINavigationBarItemStackEntry.h"
#import "UINavigationItem.h"
#import "_UINavigationBarTransitionAssistant.h"

@interface _UINavigationBarItemStack : NSObject {
    NSArray *_previousItems;
    NSMutableArray *_items;
}


@property (readonly, nonatomic) _UINavigationBarItemStackEntry *backEntry;
@property (readonly, nonatomic) UINavigationItem *backItem;
@property (weak, nonatomic) NSObject<_UINavigationItemChangeObserver> *changeObserver; // ivar: _changeObserver
@property (readonly, nonatomic) NSInteger itemCount;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic, getter=isPopping) BOOL popping;
@property (readonly, nonatomic) _UINavigationBarItemStackEntry *previousBackEntry;
@property (readonly, nonatomic) UINavigationItem *previousBackItem;
@property (readonly, nonatomic) _UINavigationBarItemStackEntry *previousTopEntry;
@property (readonly, nonatomic) UINavigationItem *previousTopItem;
@property (readonly, nonatomic, getter=isPushing) BOOL pushing;
@property (readonly, nonatomic, getter=isPushingOrPopping) BOOL pushingOrPopping;
@property (readonly, nonatomic) int state; // ivar: _state
@property (readonly, nonatomic) _UINavigationBarItemStackEntry *topEntry;
@property (readonly, nonatomic) UINavigationItem *topItem;
@property (readonly, nonatomic) _UINavigationBarTransitionAssistant *transitionAssistant; // ivar: _transitionAssistant


-(BOOL)stackItemsAreEqualTo:(id)arg0 ;
-(NSInteger)_effectiveDisplayModeForItem:(id)arg0 inStack:(id)arg1 ;
-(NSInteger)effectiveDisplayModeForItemInCurrentStack:(id)arg0 ;
-(NSInteger)effectiveDisplayModeForItemInPreviousStack:(id)arg0 ;
-(id)_shim_popNestedNavigationItem;
-(id)description;
-(id)init;
-(id)initWithItems:(id)arg0 ;
-(void)_cleanupTransitionAssistant;
-(void)_completeTransition;
-(void)_prepareTransitionWithAssistant:(id)arg0 ;
-(void)_shim_pushNestedNavigationItem:(id)arg0 ;
-(void)_updateChangeObserversFor:(id)arg0 ;
-(void)beginInteractiveTransition;
-(void)cancelOperation;
-(void)completeOperation;
-(void)endInteractiveTransition;
-(void)iterateEntries:(id)arg0 ;
-(void)iterateItems:(id)arg0 ;
-(void)popItemWithTransitionAssistant:(id)arg0 ;
-(void)pushItem:(id)arg0 withTransitionAssistant:(id)arg1 ;
-(void)reverseIterateEntries:(id)arg0 ;


@end


#endif