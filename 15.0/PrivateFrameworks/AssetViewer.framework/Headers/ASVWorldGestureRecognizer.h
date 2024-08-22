// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVWORLDGESTURERECOGNIZER_H
#define ASVWORLDGESTURERECOGNIZER_H

@class NSString, NSSet;
@protocol ASVWorldSingleFingerGestureDelegate, ASVWorldTwoFingerGestureDelegate, ASVWorldGestureRecognizerDelegate;


#import "ASVUnifiedGestureRecognizer.h"
#import "ASVDeceleration.h"
#import "ASVVelocitySample3D.h"

@interface ASVWorldGestureRecognizer : ASVUnifiedGestureRecognizer <ASVWorldSingleFingerGestureDelegate, ASVWorldTwoFingerGestureDelegate>

 {
    ? _normalizedVelocity;
    ? _lastTranslationLocation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property ? lastTranslationLocation;
@property (nonatomic) CGFloat lastTranslationTime; // ivar: _lastTranslationTime
@property (readonly, nonatomic) float maximumObjectScale;
@property (readonly, nonatomic) float minimumObjectScale;
@property ? normalizedVelocity;
@property (retain, nonatomic) NSSet *snapScalesSet; // ivar: _snapScalesSet
@property (readonly) Class superclass;
@property (retain, nonatomic) ASVDeceleration *translationDeceleration; // ivar: _translationDeceleration
@property (retain, nonatomic) ASVVelocitySample3D *translationLastVelocitySample; // ivar: _translationLastVelocitySample
@property (retain, nonatomic) ASVVelocitySample3D *translationVelocitySample; // ivar: _translationVelocitySample
@property (weak, nonatomic) NSObject<ASVWorldGestureRecognizerDelegate> *worldDelegate; // ivar: _worldDelegate


-(float)clampedScaleForScale:(float)arg0 ;
-(id)initWithWorldDelegate:(id)arg0 feedbackGenerator:(id)arg1 ;
-(id)singleFingerGestureForTouch:(id)arg0 dataSource:(id)arg1 enabledGestureTypes:(NSUInteger)arg2 ;
-(id)twoFingerGestureForFirstTouch:(id)arg0 secondTouch:(id)arg1 dataSource:(id)arg2 ;
-(void)gestureBeganLevitation:(id)arg0 ;
-(void)gestureBeganTranslation:(id)arg0 ;
-(void)gestureEndedLevitation:(id)arg0 ;
-(void)gestureEndedTranslation:(id)arg0 ;
-(void)startTranslationDecelerationWithInitialVelocity;


@end


#endif