// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIVIEWANIMATIONINFO_H
#define UIVIEWANIMATIONINFO_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIViewAnimationInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *animatableProperties; // ivar: _animatableProperties
@property (copy, nonatomic) id *invalidationBlock; // ivar: _invalidationBlock
@property (retain, nonatomic) NSMutableDictionary *isPartOfHigherOrderProperty; // ivar: _isPartOfHigherOrderProperty
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockingQueue; // ivar: _lockingQueue
@property (retain, nonatomic) NSMutableDictionary *modifierGroupRequestHandlers; // ivar: _modifierGroupRequestHandlers
@property (weak) UIView *owningView; // ivar: _owningView
@property (retain, nonatomic) NSMutableDictionary *presentationModifiers; // ivar: _presentationModifiers


-(BOOL)_canInvalidate;
-(id)animatablePropertyForKey:(id)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)animatablePropertyKeys;
-(id)initWithView:(id)arg0 ;
-(id)modifierGroupRequestHandlerForKey:(id)arg0 ;
-(id)presentationModifierForKey:(id)arg0 ;
-(void)_invalidateIfPossible;
-(void)performWithLock:(id)arg0 ;
-(void)setAnimatableProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setModifierGroupRequestHandler:(id)arg0 forKey:(id)arg1 ;
-(void)setPresentationModifier:(id)arg0 forKey:(id)arg1 ;


@end


#endif