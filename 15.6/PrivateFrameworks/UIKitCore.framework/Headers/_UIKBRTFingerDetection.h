// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKBRTFINGERDETECTION_H
#define _UIKBRTFINGERDETECTION_H

@class UIKBRTKeyboardTouchObserver, NSMapTable, NSMutableDictionary;


#import "_UIKBRTFingerInfo.h"
#import "UIView.h"
#import "_UIKBRTFingerDetectionView.h"

@interface _UIKBRTFingerDetection : UIKBRTKeyboardTouchObserver

@property (retain, nonatomic) _UIKBRTFingerInfo *fakeLeftIndex; // ivar: _fakeLeftIndex
@property (retain, nonatomic) _UIKBRTFingerInfo *fakeRightIndex; // ivar: _fakeRightIndex
@property (nonatomic) UIView *feedbackParentView; // ivar: _feedbackParentView
@property (retain, nonatomic) _UIKBRTFingerDetectionView *feedbackView; // ivar: _feedbackView
@property (retain, nonatomic) NSMapTable *fingerFeedbackViewMap; // ivar: _fingerFeedbackViewMap
@property (retain, nonatomic) NSMutableDictionary *touches; // ivar: _touches


-(BOOL)_linkTouchesInArray:(id)arg0 withIndexes:(id)arg1 opposingHandIndexes:(id)arg2 unassignedIndexes:(id)arg3 thumb:(id)arg4 ;
-(NSUInteger)fingerIdForTouchWithIdentifier:(id)arg0 ;
-(id)fingerIdsRelatedToTouchWithIdentifier:(id)arg0 sinceTimestamp:(CGFloat)arg1 includeThumbs:(BOOL)arg2 ;
-(id)init;
-(id)initWithParentView:(id)arg0 ;
-(id)touchIdentifiersForFingerId:(NSUInteger)arg0 ;
-(struct CGPoint )touchLocationForFingerId:(NSUInteger)arg0 ;
-(void)_updateFingerFeedback;
-(void)_updateFingerFeedback:(id)arg0 ;
-(void)_updateTouchInfoForFingerID:(NSUInteger)arg0 ;
-(void)_updateTouchInfoFromOutsideInWithArray:(id)arg0 indexes:(id)arg1 newIdentityDict:(id)arg2 fakeIndex:(id)arg3 ;
-(void)addTouchLocation:(struct CGPoint )arg0 withRadius:(CGFloat)arg1 withTouchTime:(CGFloat)arg2 withIdentifier:(id)arg3 ;
-(void)dealloc;
-(void)moveTouchWithIdentifier:(id)arg0 toLocation:(struct CGPoint )arg1 withRadius:(CGFloat)arg2 atTouchTime:(CGFloat)arg3 ;
-(void)removeTouchWithIdentifier:(id)arg0 touchCancelled:(BOOL)arg1 ;
-(void)reset;
-(void)updateWithFCenter:(struct CGPoint )arg0 jCenter:(struct CGPoint )arg1 keySize:(struct CGSize )arg2 rowOffsets:(id)arg3 homeRowOffsetIndex:(int)arg4 ;


@end


#endif