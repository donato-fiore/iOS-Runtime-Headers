// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXSPRINGYCOMPONENTBEHAVIORHANDLER_H
#define SXSPRINGYCOMPONENTBEHAVIORHANDLER_H

@class UIDynamicAnimator, UIAttachmentBehavior;


#import "SXComponentBehaviorHandler.h"

@interface SXSpringyComponentBehaviorHandler : SXComponentBehaviorHandler

@property (readonly, nonatomic) CGFloat damping; // ivar: _damping
@property (readonly, nonatomic) CGFloat delta; // ivar: _delta
@property (retain, nonatomic) UIDynamicAnimator *dynamicAnimator; // ivar: _dynamicAnimator
@property (retain, nonatomic) UIAttachmentBehavior *dynamicBehavior; // ivar: _dynamicBehavior
@property (readonly, nonatomic) CGFloat frequency; // ivar: _frequency
@property (nonatomic) CGFloat lastYOffset; // ivar: _lastYOffset
@property (nonatomic) CGPoint originalCenter; // ivar: _originalCenter


-(id)initWithComponentView:(id)arg0 withBehavior:(id)arg1 ;
-(void)dealloc;
-(void)destroyWithBehaviorController:(id)arg0 ;
-(void)setupWithBehaviorController:(id)arg0 ;
-(void)updateWithBehaviorController:(id)arg0 ;


@end


#endif