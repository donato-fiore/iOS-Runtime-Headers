// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIHYPERINPROCESSVIEWANIMATOR_H
#define _UIHYPERINPROCESSVIEWANIMATOR_H

@class NSString;
@protocol _UIHyperAnimator_Internal, _UIHyperAnimator, NSSecureCoding, NSCopying, UIViewSpringAnimationBehaviorDescribing;

#import <Foundation/Foundation.h>

#import "_UIHyperInteractor.h"
#import "_UISpringParameters.h"
#import "UIViewSpringAnimationBehavior.h"

@interface _UIHyperInProcessViewAnimator : NSObject <_UIHyperAnimator_Internal, _UIHyperAnimator, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger _dimensions; // ivar: __dimensions
@property (weak, nonatomic, setter=_setInteractor:) _UIHyperInteractor *_interactor; // ivar: __interactor
@property (copy, nonatomic, setter=_setNonTrackingSpringParameters:) _UISpringParameters *_nonTrackingSpringParameters; // ivar: __nonTrackingSpringParameters
@property (retain, nonatomic, setter=_setOverrideSpringAnimationBehavior:) NSObject<UIViewSpringAnimationBehaviorDescribing> *_overrideSpringAnimationBehavior; // ivar: __overrideSpringAnimationBehavior
@property (readonly, nonatomic) UIViewSpringAnimationBehavior *_springAnimationBehavior; // ivar: __springAnimationBehavior
@property (copy, nonatomic, setter=_setTrackingSpringParameters:) _UISpringParameters *_trackingSpringParameters; // ivar: __trackingSpringParameters
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDimensions:(NSUInteger)arg0 ;
-(void)_animateInteractive:(BOOL)arg0 animations:(id)arg1 ;
-(void)_animateWithParameters:(id)arg0 animations:(id)arg1 ;
-(void)_interactionBegan;
-(void)_interactionChanged;
-(void)_interactionEndedMutatingState:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif