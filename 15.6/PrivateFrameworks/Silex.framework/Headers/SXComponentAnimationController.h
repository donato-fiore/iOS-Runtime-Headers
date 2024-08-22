// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOMPONENTANIMATIONCONTROLLER_H
#define SXCOMPONENTANIMATIONCONTROLLER_H

@class NSMutableSet, NSString, CADisplayLink;
@protocol SXViewportChangeListener;

#import <Foundation/Foundation.h>

#import "SXViewport.h"

@interface SXComponentAnimationController : NSObject <SXViewportChangeListener>



@property (retain, nonatomic) NSMutableSet *animatingComponents; // ivar: _animatingComponents
@property (readonly, nonatomic) NSMutableSet *animationHandlersToFinish; // ivar: _animationHandlersToFinish
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *registeredComponents; // ivar: _registeredComponents
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXViewport *viewport; // ivar: _viewport


-(id)animatingHandlerForComponent:(id)arg0 ;
-(id)initWithViewport:(id)arg0 ;
-(id)registeredHandlerForComponent:(id)arg0 ;
-(struct CGRect )convertRectForComponent:(id)arg0 ;
-(void)displayLinkTick:(id)arg0 ;
-(void)finishAnimationHandlerAnimated:(id)arg0 ;
-(void)registerComponentView:(id)arg0 animation:(id)arg1 ;
-(void)startOrStopDisplayLink;
-(void)startUpdatingAnimationForComponentView:(id)arg0 ;
-(void)stopUpdatingAnimationForComponentView:(id)arg0 ;
-(void)stopUpdatingAnimationForComponentView:(id)arg0 finishAnimation:(BOOL)arg1 ;
-(void)unregisterComponentView:(id)arg0 ;
-(void)updateVisibleBounds:(struct CGRect )arg0 ;
-(void)updateVisibleBoundsIfNeeded;
-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;
-(void)viewport:(id)arg0 boundsDidChangeFromBounds:(struct CGRect )arg1 ;
-(void)viewport:(id)arg0 documentSizeDidChangeFromSize:(struct CGSize )arg1 ;
-(void)viewport:(id)arg0 dynamicBoundsDidChangeFromBounds:(struct CGRect )arg1 ;


@end


#endif