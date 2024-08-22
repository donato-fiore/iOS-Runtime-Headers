// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDRAGLIFTEFFECTOPERATION_H
#define _UIDRAGLIFTEFFECTOPERATION_H

@class NSSet;
@protocol UIDragInteractionContext;

#import <Foundation/Foundation.h>

#import "UIDragInteraction.h"
#import "UIViewPropertyAnimator.h"

@interface _UIDragLiftEffectOperation : NSObject

@property (retain, nonatomic) NSObject<UIDragInteractionContext> *context; // ivar: _context
@property (retain, nonatomic) UIDragInteraction *interaction; // ivar: _interaction
@property (retain, nonatomic) NSSet *items; // ivar: _items
@property (readonly, nonatomic) UIViewPropertyAnimator *propertyAnimator; // ivar: _propertyAnimator




@end


#endif