// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPRESENTATIONCONTEXTTRANSITION_H
#define AVPRESENTATIONCONTEXTTRANSITION_H


#import <Foundation/Foundation.h>


@interface AVPresentationContextTransition : NSObject

@property (readonly, nonatomic) CGAffineTransform counterRotationTransform;
@property (nonatomic) NSInteger finalInterfaceOrientation; // ivar: _finalInterfaceOrientation
@property (nonatomic) BOOL hasAVKitAnimator; // ivar: _hasAVKitAnimator
@property (nonatomic) NSInteger initialInterfaceOrientation; // ivar: _initialInterfaceOrientation
@property (readonly, nonatomic) NSInteger interfaceRotation;
@property (readonly, nonatomic) BOOL isRotated;
@property (nonatomic) NSUInteger presenterSupportedOrientations; // ivar: _presenterSupportedOrientations
@property (readonly, nonatomic) CGAffineTransform rotationTransform;
@property (nonatomic) BOOL wasCancelledWithInactiveScene; // ivar: _wasCancelledWithInactiveScene
@property (nonatomic) BOOL wasInitiallyInteractive; // ivar: _wasInitiallyInteractive


-(BOOL)presenterSupportsOrientation:(NSInteger)arg0 ;


@end


#endif