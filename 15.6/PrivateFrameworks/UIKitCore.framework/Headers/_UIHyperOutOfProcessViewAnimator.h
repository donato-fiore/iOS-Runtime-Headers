// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIHYPEROUTOFPROCESSVIEWANIMATOR_H
#define _UIHYPEROUTOFPROCESSVIEWANIMATOR_H

@class NSMutableSet, NSString;
@protocol _UIHyperAnimator_Internal, _UIHyperAnimator, NSSecureCoding, NSCopying, _UIHyperOutOfProcessViewAnimatorDelegate;

#import <Foundation/Foundation.h>

#import "_UISpringParameters.h"
#import "_UIHyperInteractor.h"

@interface _UIHyperOutOfProcessViewAnimator : NSObject <_UIHyperAnimator_Internal, _UIHyperAnimator, NSSecureCoding, NSCopying>



@property (readonly, nonatomic, getter=_isAnimating) BOOL _animating;
@property (copy, nonatomic, setter=_setBoundaryCrossedSpringParameters:) _UISpringParameters *_boundaryCrossedSpringParameters; // ivar: __boundaryCrossedSpringParameters
@property (weak, nonatomic, setter=_setDelegate:) NSObject<_UIHyperOutOfProcessViewAnimatorDelegate> *_delegate; // ivar: __delegate
@property (readonly, nonatomic) NSUInteger _dimensions; // ivar: __dimensions
@property (copy, nonatomic, setter=_setInteractionEndedSpringParameters:) _UISpringParameters *_interactionEndedSpringParameters; // ivar: __interactionEndedSpringParameters
@property (weak, nonatomic, setter=_setInteractor:) _UIHyperInteractor *_interactor; // ivar: __interactor
@property (nonatomic, setter=_setPreferredFrameRateRange:) CAFrameRateRange _preferredFrameRateRange; // ivar: __preferredFrameRateRange
@property (readonly, nonatomic) NSMutableSet *_propertyAnimators; // ivar: __propertyAnimators
@property (nonatomic, setter=_setUpdateReason:) unsigned int _updateReason; // ivar: __updateReason
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDimensions:(NSUInteger)arg0 ;
-(void)_animateWithParameters:(id)arg0 animations:(id)arg1 ;
-(void)_animateWithParameters:(id)arg0 velocity:(CGFloat)arg1 animations:(id)arg2 ;
-(void)_interactionBegan;
-(void)_interactionChanged;
-(void)_interactionEndedMutatingState:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif