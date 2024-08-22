// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKBRTTOUCHDRIFTING_H
#define _UIKBRTTOUCHDRIFTING_H

@class UIKBRTKeyboardTouchObserver, NSTimer, NSArray, NSMutableSet, NSMapTable, NSMutableDictionary;
@protocol _UIKBRTTouchDriftingDelegate;


#import "_UIKBRTDecayingObject.h"
#import "_UIKBRTTouchHistory.h"
#import "UIView.h"
#import "_UIKBRTDecayingOffset.h"
#import "_UIKBRTTouchHistoryInfo.h"

@interface _UIKBRTTouchDrifting : UIKBRTKeyboardTouchObserver

@property (nonatomic) NSObject<_UIKBRTTouchDriftingDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _UIKBRTDecayingObject *enableLatchObj; // ivar: _enableLatchObj
@property (retain, nonatomic) _UIKBRTTouchHistory *fHistory; // ivar: _fHistory
@property (weak, nonatomic) UIView *feedbackParentView; // ivar: _feedbackParentView
@property (retain, nonatomic) NSTimer *feedbackTimer; // ivar: _feedbackTimer
@property (retain, nonatomic) NSArray *indexSearchOrder; // ivar: _indexSearchOrder
@property (retain, nonatomic) _UIKBRTTouchHistory *jHistory; // ivar: _jHistory
@property (retain, nonatomic) UIView *leftDriftFeedbackView; // ivar: _leftDriftFeedbackView
@property (retain, nonatomic) NSMutableSet *leftDriftLockTouchIDs; // ivar: _leftDriftLockTouchIDs
@property (nonatomic) BOOL leftDriftRemovingItems; // ivar: _leftDriftRemovingItems
@property (readonly, nonatomic) CGPoint leftHandDriftOffset;
@property (retain, nonatomic) _UIKBRTDecayingOffset *leftHandDriftOffsetObj; // ivar: _leftHandDriftOffsetObj
@property (retain, nonatomic) _UIKBRTDecayingOffset *leftHandFixedOffsetObj; // ivar: _leftHandFixedOffsetObj
@property (retain, nonatomic) _UIKBRTTouchHistoryInfo *leftIndexFingerInfo; // ivar: _leftIndexFingerInfo
@property (retain, nonatomic) _UIKBRTTouchHistory *otherHistory; // ivar: _otherHistory
@property (retain, nonatomic) UIView *rightDriftFeedbackView; // ivar: _rightDriftFeedbackView
@property (retain, nonatomic) NSMutableSet *rightDriftLockTouchIDs; // ivar: _rightDriftLockTouchIDs
@property (nonatomic) BOOL rightDriftRemovingItems; // ivar: _rightDriftRemovingItems
@property (readonly, nonatomic) CGPoint rightHandDriftOffset;
@property (retain, nonatomic) _UIKBRTDecayingOffset *rightHandDriftOffsetObj; // ivar: _rightHandDriftOffsetObj
@property (retain, nonatomic) _UIKBRTDecayingOffset *rightHandFixedOffsetObj; // ivar: _rightHandFixedOffsetObj
@property (retain, nonatomic) _UIKBRTTouchHistoryInfo *rightIndexFingerInfo; // ivar: _rightIndexFingerInfo
@property (nonatomic) BOOL supportsDrifting; // ivar: _supportsDrifting
@property (nonatomic) ? touchError; // ivar: _touchError
@property (retain, nonatomic) UIView *touchHistoryFeedbackView; // ivar: _touchHistoryFeedbackView
@property (retain, nonatomic) NSMapTable *touchHistoryViewMap; // ivar: _touchHistoryViewMap
@property (retain, nonatomic) NSMutableDictionary *touches; // ivar: _touches


+(BOOL)isEnabled;
-(id)_touchDictWithFingerIds:(id)arg0 ;
-(id)init;
-(id)initWithParentView:(id)arg0 ;
-(struct CGPoint )_offsetForPoint:(struct CGPoint )arg0 fromPoint:(struct CGPoint )arg1 ;
-(struct CGPoint )_pinOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )_pointFromPoint:(struct CGPoint )arg0 plusOffset:(struct CGPoint )arg1 ;
-(void)_resetFeedback;
-(void)_updateDriftForFingers:(id)arg0 leftHand:(BOOL)arg1 newestTouch:(id)arg2 ;
-(void)_updateDriftView;
-(void)_updateDriftViewTimer:(id)arg0 ;
-(void)_updateDriftWithTouchInfo:(id)arg0 ;
-(void)_updateHistory;
-(void)addTouchLocation:(struct CGPoint )arg0 withRadius:(CGFloat)arg1 withTouchTime:(CGFloat)arg2 withIdentifier:(id)arg3 ;
-(void)dealloc;
-(void)ignoreTouchWithIdentifier:(id)arg0 withTouchTime:(CGFloat)arg1 ;
-(void)moveTouchWithIdentifier:(id)arg0 toLocation:(struct CGPoint )arg1 withRadius:(CGFloat)arg2 atTouchTime:(CGFloat)arg3 ;
-(void)removeTouchWithIdentifier:(id)arg0 touchCancelled:(BOOL)arg1 ;
-(void)reset;
-(void)updateTouchWithIdentifier:(id)arg0 withTouchTime:(CGFloat)arg1 resultingError:(struct CGPoint )arg2 rowOffsetFromHomeRow:(NSInteger)arg3 ;
-(void)updateWithFCenter:(struct CGPoint )arg0 jCenter:(struct CGPoint )arg1 keySize:(struct CGSize )arg2 rowOffsets:(id)arg3 homeRowOffsetIndex:(int)arg4 ;


@end


#endif