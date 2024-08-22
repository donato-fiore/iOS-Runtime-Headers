// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKIMPACTEFFECTMANAGER_H
#define CKIMPACTEFFECTMANAGER_H

@class NSString, CABackdropLayer, UIWindow, UIScrollView, NSIndexSet;
@protocol CKAudioControllerDelegate, CKSendAnimationManager, CKSendAnimationManagerDelegate, CKSendAnimationBalloonProvider;

#import <Foundation/Foundation.h>

#import "CKAudioController.h"
#import "CKBalloonView.h"

@interface CKImpactEffectManager : NSObject <CKAudioControllerDelegate, CKSendAnimationManager>



@property (readonly, nonatomic) NSString *animatingIdentifier; // ivar: _animatingIdentifier
@property (retain, nonatomic) CKAudioController *audioController; // ivar: _audioController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKSendAnimationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CABackdropLayer *expressiveSendAnimationBackdrop; // ivar: _expressiveSendAnimationBackdrop
@property (retain, nonatomic) CKBalloonView *expressiveSendAnimationBalloon; // ivar: _expressiveSendAnimationBalloon
@property (retain, nonatomic) UIWindow *expressiveSendAnimationWindow; // ivar: _expressiveSendAnimationWindow
@property (retain, nonatomic) UIScrollView *expressiveSendScrollView; // ivar: _expressiveSendScrollView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAnimating; // ivar: _isAnimating
@property (nonatomic) BOOL isDisabled; // ivar: _isDisabled
@property (retain, nonatomic) CKBalloonView *originalBalloonView; // ivar: _originalBalloonView
@property (weak, nonatomic) NSObject<CKSendAnimationBalloonProvider> *sendAnimationBalloonProvider; // ivar: sendAnimationBalloonProvider
@property (weak, nonatomic) NSObject<CKSendAnimationManagerDelegate> *sendAnimationManagerDelegate; // ivar: sendAnimationManagerDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSIndexSet *undoSendChatItems; // ivar: _undoSendChatItems


+(BOOL)identifierIsAnimatedImpactEffect:(id)arg0 ;
+(BOOL)identifierIsValidImpactEffect:(id)arg0 ;
+(BOOL)identifierShouldPlayInWindow:(id)arg0 ;
+(id)effectIdentifiers;
+(id)localizedEffectNameForEffectWithIdentifier:(id)arg0 ;
+(id)maskingStringForID:(id)arg0 ;
-(id)_sendAnimationContextForIdentifier:(id)arg0 message:(id)arg1 isSender:(BOOL)arg2 beginAnimationFromTranscriptPresentedState:(BOOL)arg3 ;
-(id)cloneBalloonForAnimationWithChatItem:(id)arg0 ;
-(id)init;
-(void)_animateLastMessage:(id)arg0 withEffectIdentifier:(id)arg1 beginAnimationFromTranscriptPresentedState:(BOOL)arg2 ;
-(void)_audioSessionOptionsWillChange:(id)arg0 ;
-(void)_cleanupExpressiveSendComponents;
-(void)_sizeAnimationWindow;
-(void)_visibleCells:(*id)arg0 aboveItem:(id)arg1 ;
-(void)animateMessages:(id)arg0 ;
-(void)animateMessages:(id)arg0 withEffectIdentifier:(id)arg1 beginAnimationFromTranscriptPresentedState:(BOOL)arg2 ;
-(void)animationDidFinishWithContext:(id)arg0 ;
-(void)animationWillBeginWithContext:(id)arg0 ;
-(void)dealloc;
-(void)matchScrollViewOffset:(id)arg0 ;
-(void)playSoundForEffectIdentifier:(id)arg0 ;
-(void)playSoundForPopAnimation;
-(void)playUndoSendAnimationForChatItem:(id)arg0 ;
-(void)popAnimationDidBegin;
-(void)setupAudioPlayerWithURL:(id)arg0 ;
-(void)stopAllEffects;
-(void)stopPlayingSound;


@end


#endif