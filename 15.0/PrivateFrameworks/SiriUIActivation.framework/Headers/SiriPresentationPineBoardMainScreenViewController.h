// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIPRESENTATIONPINEBOARDMAINSCREENVIEWCONTROLLER_H
#define SIRIPRESENTATIONPINEBOARDMAINSCREENVIEWCONTROLLER_H

@class AFClientLite;
@protocol OS_dispatch_group, SiriPresentationPineBoardMainScreenViewControllerDelegate;


#import "SiriPresentationViewController.h"

@interface SiriPresentationPineBoardMainScreenViewController : SiriPresentationViewController {
    NSObject<OS_dispatch_group> *_requestDictationFromSiriGroup;
    os_unfair_lock_s _dictationInProgressLock;
    BOOL _didRequestDictationStart;
    BOOL _shouldListenForSceneActivation;
    BOOL _shouldRequestDictation;
}


@property (nonatomic, getter=_buttonDownTimestamp, setter=_setButtonDownTimestamp:) CGFloat buttonDownTimestamp; // ivar: _buttonDownTimestamp
@property (retain, nonatomic) AFClientLite *clientLite; // ivar: _clientLite
@property (weak, nonatomic) NSObject<SiriPresentationPineBoardMainScreenViewControllerDelegate> *siriPresentationControllerDelegate;


-(BOOL)_getValueForShouldRequestDictation;
-(BOOL)_shouldShowSetupViewController;
-(CGFloat)_thresholdForTriggeringABCInLaunch;
-(id)initWithIdentifier:(NSInteger)arg0 hostedPresentationFrame:(struct CGRect )arg1 ;
-(id)siriViewController:(id)arg0 willStartRequestWithOptions:(id)arg1 ;
-(void)_forwardHIDButtonEventWithUsagePage:(unsigned int)arg0 usage:(unsigned int)arg1 type:(NSInteger)arg2 senderID:(NSUInteger)arg3 ;
-(void)_prewarmFlamesWithPresentationFrame:(struct CGRect )arg0 ;
-(void)_prewarmSiriVideoFlowDelegatePlugin;
-(void)setNextAssistantRecognitionStrings:(id)arg0 ;
-(void)setNextVoiceRecognitionAudioInputPaths:(id)arg0 ;
-(void)siriViewController:(id)arg0 didChangePresentationPeekMode:(NSUInteger)arg1 ;
-(void)siriViewController:(id)arg0 didReceiveButtonUpWithRequestOptions:(id)arg1 ;
-(void)siriViewController:(id)arg0 sceneDidActivateWithIdentifier:(id)arg1 ;
-(void)siriViewControllerDidChangeToListeningMode:(id)arg0 ;
-(void)siriViewControllerDidDeactivateScene:(id)arg0 ;
-(void)siriViewControllerDidPresentKeyboard:(id)arg0 ;


@end


#endif