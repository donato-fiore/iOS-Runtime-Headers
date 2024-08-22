// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVMOTIONEFFECTTRANSCRIPTIONCOMPONENT_H
#define PVMOTIONEFFECTTRANSCRIPTIONCOMPONENT_H

@class NSNumber;
@protocol PVEffectTranscript;


#import "PVMotionEffectComponent.h"

@interface PVMotionEffectTranscriptionComponent : PVMotionEffectComponent <PVEffectTranscript>

 {
    NSNumber *_isTranscription;
    NSNumber *_isSingleWordTranscription;
    NSNumber *_disableWordFadeOutForPreview;
}




+(id)motionEffectPropertyKeyToPublishedParameterNameMap;
-(BOOL)disableWordFadeOutForPreview;
-(BOOL)isSingleWordTranscription;
-(BOOL)isTranscription;
-(BOOL)shouldDisableWordFadeOut_NoLock:(*void)arg0 ;
-(BOOL)transcriptionHitTest:(struct CGPoint )arg0 time:(struct ? )arg1 ;
-(struct ? )transcriptionDuration;
-(struct ? )transcriptionDuration_NoLock:(*void)arg0 ;
-(void)clearTranscription;
-(void)computeLoopMarkerBasedOnTranscription_NoLock:(*void)arg0 ;
-(void)disableWordFadeOutIfNecessary_NoLock:(*void)arg0 ;
-(void)effect:(id)arg0 updateProperties:(id)arg1 allProperties:(id)arg2 ;
-(void)motionEffect:(id)arg0 didBecomeReady:(*void)arg1 properties:(id)arg2 ;
-(void)motionEffect:(id)arg0 didLoad:(*void)arg1 ;
-(void)resetToDefaultTranscriptionForLocaleID:(id)arg0 ;
-(void)setTranscriptionText:(id)arg0 ;
-(void)setupTranscriptionParameters_NoLock:(id)arg0 documentInfo:(*void)arg1 ;
-(void)updateLiveTitlePickerLoopTime:(BOOL)arg0 ;


@end


#endif