// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCONTENTANIMATION_H
#define TSDCONTENTANIMATION_H

@class NSString;
@protocol TSDContentAnimationTiming;

#import <Foundation/Foundation.h>


@interface TSDContentAnimation : NSObject <TSDContentAnimationTiming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)animation;
-(BOOL)i_canProduceAnimation;
-(id)i_animationWithTransformBlock:(id)arg0 ;
-(id)i_endLocation;
// -(void)i_applyToLayer:(id)arg0 withTransformBlock:(id)arg1 completionBlock:(unk)arg2  ;


@end


#endif