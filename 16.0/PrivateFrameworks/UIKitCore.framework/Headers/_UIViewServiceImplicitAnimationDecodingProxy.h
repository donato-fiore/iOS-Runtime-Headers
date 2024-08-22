// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVIEWSERVICEIMPLICITANIMATIONDECODINGPROXY_H
#define _UIVIEWSERVICEIMPLICITANIMATIONDECODINGPROXY_H

@class UITargetedProxy, NSString;
@protocol _UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface;


#import "_UIViewAnimationAttributes.h"

@interface _UIViewServiceImplicitAnimationDecodingProxy : UITargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface>

 {
    SEL _implicitAnimationSelector;
    _UIViewAnimationAttributes *_animationAttributes;
    BOOL _animationsEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)proxyDecodingAnimationsForTarget:(id)arg0 ;
-(void)__animateNextInvocationOfSelector:(id)arg0 withAnimationAttributes:(id)arg1 animationsEnabled:(BOOL)arg2 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif