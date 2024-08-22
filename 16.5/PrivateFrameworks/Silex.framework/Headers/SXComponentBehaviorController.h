// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTBEHAVIORCONTROLLER_H
#define SXCOMPONENTBEHAVIORCONTROLLER_H

@class UIDynamicAnimator, NSMutableSet, NSString;
@protocol SXViewportChangeListener;

#import <Foundation/Foundation.h>

#import "SXViewport.h"

@interface SXComponentBehaviorController : NSObject <SXViewportChangeListener>



@property (readonly, nonatomic) UIDynamicAnimator *animator; // ivar: _animator
@property (readonly, nonatomic) NSMutableSet *behaviorHandlers; // ivar: _behaviorHandlers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SXViewport *viewport; // ivar: _viewport


-(id)existingHandlerForComponentView:(id)arg0 behavior:(id)arg1 ;
-(id)initWithViewport:(id)arg0 andAnimator:(id)arg1 ;
-(void)registerComponentView:(id)arg0 behavior:(id)arg1 ;
-(void)reset;
-(void)unregisterComponentView:(id)arg0 ;
-(void)update;
-(void)updateComponentView:(id)arg0 ;
-(void)updateHandler:(id)arg0 ;
-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;
-(void)viewport:(id)arg0 boundsDidChangeFromBounds:(struct CGRect )arg1 ;
-(void)viewport:(id)arg0 dynamicBoundsDidChangeFromBounds:(struct CGRect )arg1 ;


@end


#endif