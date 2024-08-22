// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKUIPEARLENROLLMANAGER_H
#define BKUIPEARLENROLLMANAGER_H

@class NSString;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface BKUIPearlEnrollManager : NSObject <CAAnimationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(id)gaussianBlurWithRadius:(CGFloat)arg0 ;
-(id)gaussianBlurWithRadius:(CGFloat)arg0 normalizeEdges:(BOOL)arg1 hardEdges:(BOOL)arg2 quality:(id)arg3 intermediateBitDepth:(id)arg4 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)runBasicAnimationOnLayer:(id)arg0 withDuration:(CGFloat)arg1 keyPath:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 removedOnCompletion:(BOOL)arg5 timingFunction:(id)arg6 completion:(id)arg7 ;


@end


#endif