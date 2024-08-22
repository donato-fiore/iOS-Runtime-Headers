// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TITYPINGSESSION_H
#define TITYPINGSESSION_H

@class NSString, NSDate, TIKeyboardInput, NSMutableArray, NSLocale, TIKeyboardState, TIKeyboardTouchEvent, NSMutableDictionary;
@protocol NSSecureCoding, TIKeyboardInteractionProtocol;

#import <Foundation/Foundation.h>

#import "TIWordEntry.h"
#import "TIFeatureUsageMetricsCache.h"
#import "TITypingSessionParams.h"

@interface TITypingSession : NSObject <NSSecureCoding, TIKeyboardInteractionProtocol>



@property (copy, nonatomic) NSString *applicationID; // ivar: _applicationID
@property CGFloat calibratedTimeBase; // ivar: _calibratedTimeBase
@property (nonatomic) int candidatesAccepted; // ivar: _candidatesAccepted
@property (nonatomic) int candidatesAcceptedWithText; // ivar: _candidatesAcceptedWithText
@property (nonatomic) NSUInteger currentLayoutID; // ivar: _currentLayoutID
@property (retain, nonatomic) TIWordEntry *currentWord; // ivar: _currentWord
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didReceiveSecureFieldEvent; // ivar: _didReceiveSecureFieldEvent
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (retain, nonatomic) TIFeatureUsageMetricsCache *featureUsageMetricsCache; // ivar: _featureUsageMetricsCache
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeInputToLastWord; // ivar: _includeInputToLastWord
@property (nonatomic) NSInteger lastActivePathIndex; // ivar: _lastActivePathIndex
@property (retain, nonatomic) TIKeyboardInput *lastInput; // ivar: _lastInput
@property (retain, nonatomic) TIWordEntry *lastWord; // ivar: _lastWord
@property (copy, nonatomic) NSString *layoutName; // ivar: _layoutName
@property (retain, nonatomic) NSMutableArray *layouts; // ivar: _layouts
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) TIKeyboardState *savedDeleteInputKeyboardState; // ivar: _savedDeleteInputKeyboardState
@property (retain, nonatomic) TITypingSessionParams *sessionParams; // ivar: _sessionParams
@property (copy, nonatomic) NSString *startContext; // ivar: _startContext
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (retain) TIKeyboardTouchEvent *timeCalibrationTouch; // ivar: _timeCalibrationTouch
@property (retain, nonatomic) NSMutableDictionary *touchesHistory; // ivar: _touchesHistory
@property (retain, nonatomic) NSMutableArray *userActionHistory; // ivar: _userActionHistory


+(BOOL)supportsSecureCoding;
-(BOOL)isCurrentWordEmpty;
-(BOOL)testForRapidDeleteContextChange:(id)arg0 ;
-(CGFloat)calibratedCurrentTimestamp;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocale:(id)arg0 keyboardLayout:(id)arg1 ;
-(void)addDrawInputWithSyllableCount:(NSUInteger)arg0 keyboardState:(id)arg1 ;
-(void)addKeyInput:(id)arg0 keyboardState:(id)arg1 ;
-(void)addTouchEvent:(id)arg0 ;
-(void)candidateAccepted:(id)arg0 withInput:(id)arg1 documentState:(id)arg2 inputContext:(id)arg3 inputStem:(id)arg4 predictionBarHit:(BOOL)arg5 useCandidateSelection:(BOOL)arg6 candidateIndex:(NSInteger)arg7 keyboardState:(id)arg8 ;
-(void)candidatesOffered:(id)arg0 keyboardState:(id)arg1 ;
-(void)contextDidChange:(id)arg0 wordDelete:(BOOL)arg1 cursorMoved:(BOOL)arg2 extendsPriorWord:(BOOL)arg3 inWord:(id)arg4 range:(struct _NSRange )arg5 selectionLocation:(NSUInteger)arg6 keyboardState:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutDidChange:(id)arg0 keyboardState:(id)arg1 ;
-(void)setClientID:(id)arg0 keyboardState:(id)arg1 ;


@end


#endif