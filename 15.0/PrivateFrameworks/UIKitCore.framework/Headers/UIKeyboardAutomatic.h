// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDAUTOMATIC_H
#define UIKEYBOARDAUTOMATIC_H

@protocol UITextCursorAssertion;


#import "UIKeyboard.h"
#import "_UIStringAndPositionPair.h"

@interface UIKeyboardAutomatic : UIKeyboard

@property (retain, nonatomic) NSObject<UITextCursorAssertion> *blinkAssertion; // ivar: _blinkAssertion
@property (nonatomic) NSUInteger lastChooseSupplementalItemToInsertCallbackIdentifier; // ivar: _lastChooseSupplementalItemToInsertCallbackIdentifier
@property (retain, nonatomic) _UIStringAndPositionPair *lastMatchedSupplementalCandidate; // ivar: _lastMatchedSupplementalCandidate
@property (retain, nonatomic) _UIStringAndPositionPair *pendingSupplementalCandidateToInsert; // ivar: _pendingSupplementalCandidateToInsert
@property (nonatomic) BOOL receivedCandidatesInCurrentInputMode; // ivar: receivedCandidatesInCurrentInputMode
@property (nonatomic) BOOL showsCandidateBar; // ivar: showsCandidateBar
@property (nonatomic) BOOL showsCandidateInline; // ivar: showsCandidateInline


+(id)activeInstance;
+(id)sharedInstance;
-(BOOL)_isAutomaticKeyboard;
-(BOOL)isActive;
-(BOOL)isAutomatic;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIPeripheralAnimationGeometry )geometryForHeightDelta:(CGFloat)arg0 ;
-(void)activate;
-(void)dealloc;
-(void)didSuspend:(id)arg0 ;
-(void)implBoundsHeightChangeDone:(CGFloat)arg0 suppressNotification:(BOOL)arg1 ;
-(void)maximize;
-(void)minimize;
-(void)prepareForImplBoundsHeightChange:(CGFloat)arg0 suppressNotification:(BOOL)arg1 ;
-(void)willResume:(id)arg0 ;


@end


#endif