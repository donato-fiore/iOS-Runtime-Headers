// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTHROWANIMATIONMANAGER_H
#define CKTHROWANIMATIONMANAGER_H

@class NSString, UIView;
@protocol CKSendAnimationManager, CKSendAnimationBalloonProvider, CKSendAnimationManagerDelegate, CKThrowAnimationManagerDelegate;

#import <Foundation/Foundation.h>

#import "CKChatControllerDummyAnimator.h"
#import "CKSendAnimationContext.h"
#import "CKTranscriptNotifyAnywayButtonCell.h"
#import "CKTranscriptTypingIndicatorCell.h"
#import "CKTranscriptUnavailabilityIndicatorCell.h"

@interface CKThrowAnimationManager : NSObject <CKSendAnimationManager>



@property (retain, nonatomic) CKChatControllerDummyAnimator *animator; // ivar: _animator
@property (retain, nonatomic) CKSendAnimationContext *currentContext; // ivar: _currentContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKTranscriptNotifyAnywayButtonCell *fakeNotifyAnywayButtonCell; // ivar: _fakeNotifyAnywayButtonCell
@property (retain, nonatomic) CKTranscriptTypingIndicatorCell *fakeTypingIndicatorCell; // ivar: _fakeTypingIndicatorCell
@property (retain, nonatomic) CKTranscriptUnavailabilityIndicatorCell *fakeUnavailabilityIndicatorCell; // ivar: _fakeUnavailabilityIndicatorCell
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CKSendAnimationBalloonProvider> *sendAnimationBalloonProvider; // ivar: _sendAnimationBalloonProvider
@property (weak, nonatomic) NSObject<CKSendAnimationManagerDelegate> *sendAnimationManagerDelegate; // ivar: _sendAnimationManagerDelegate
@property (retain, nonatomic) UIView *sendAnimationWindow; // ivar: _sendAnimationWindow
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<CKThrowAnimationManagerDelegate> *throwManagerDelegate; // ivar: _throwManagerDelegate


-(BOOL)_transcriptWillShiftDueToThrowAnimation;
-(CGFloat)_changeInEntryViewHeight;
-(id)_collectionViewController;
-(id)_entryView;
-(id)init;
-(id)lastVisibleCellOfType:(Class)arg0 inCollectionView:(id)arg1 ;
-(struct CGPoint )bestVisibleOffsetForBubbleAtIndex:(NSInteger)arg0 ;
-(void)_hideAddedChatItems;
-(void)_removeAllAnimations;
-(void)_removeFakeTypingIndicatorIfNecessary;
-(void)_sendMessageAndPinTranscript;
-(void)_setupFakeTypingAndUnavailabilityIndicatorsIfNecessary;
-(void)_setupThrowBalloonViews;
-(void)_setupThrowFrames;
-(void)_shiftFakeTypingIndicator;
-(void)_snapshotLiveBubbleIfNecessary;
-(void)animateMessages:(id)arg0 ;
-(void)animationDidFinishWithContext:(id)arg0 ;
-(void)animationWillBeginWithContext:(id)arg0 ;


@end


#endif