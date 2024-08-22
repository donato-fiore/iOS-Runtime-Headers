// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTEXTINPUTSETTINGS_H
#define PKTEXTINPUTSETTINGS_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PKTextInputSettings : NSObject

@property (nonatomic) BOOL UCBPaletteEnabled; // ivar: _UCBPaletteEnabled
@property (nonatomic) BOOL activePreviewEnabled; // ivar: _activePreviewEnabled
@property (nonatomic) BOOL alwaysIncludeReturnKeyAndInputAssistantItems; // ivar: _alwaysIncludeReturnKeyAndInputAssistantItems
@property (nonatomic) CGFloat asyncElementRequestTimeout; // ivar: _asyncElementRequestTimeout
@property (nonatomic) CGFloat autoLineBreakAreaWidthFactor; // ivar: _autoLineBreakAreaWidthFactor
@property (nonatomic) CGFloat autoLineBreakDualVerticalDistance; // ivar: _autoLineBreakDualVerticalDistance
@property (nonatomic) BOOL autoLineBreakEnabled; // ivar: _autoLineBreakEnabled
@property (nonatomic) BOOL autoLineBreakRequireWeakCursor; // ivar: _autoLineBreakRequireWeakCursor
@property (nonatomic) CGFloat autoLineBreakVerticalDistance; // ivar: _autoLineBreakVerticalDistance
@property (nonatomic) BOOL continuousRecognition; // ivar: _continuousRecognition
@property (nonatomic) CGFloat continuousRecognitionWritingInterval; // ivar: _continuousRecognitionWritingInterval
@property (readonly, nonatomic) NSString *currentLanguageIdentifier;
@property (nonatomic) CGFloat debugElementFinderArtificialDelay; // ivar: _debugElementFinderArtificialDelay
@property (nonatomic) CGFloat debugFirstResponderArtificialDelay; // ivar: _debugFirstResponderArtificialDelay
@property (nonatomic) CGFloat debugRecognitionRequestArtificialDelay; // ivar: _debugRecognitionRequestArtificialDelay
@property (nonatomic) CGFloat drawingGestureDetectTapAwayFromCurrentStrokesHorizontalDistance; // ivar: _drawingGestureDetectTapAwayFromCurrentStrokesHorizontalDistance
@property (nonatomic) CGFloat drawingGestureDetectTapAwayFromCurrentStrokesVerticalDistance; // ivar: _drawingGestureDetectTapAwayFromCurrentStrokesVerticalDistance
@property (nonatomic) CGFloat drawingGestureLongPressDetectionTimeInterval; // ivar: _drawingGestureLongPressDetectionTimeInterval
@property (nonatomic) CGFloat drawingGestureLongPressMaxDistance; // ivar: _drawingGestureLongPressMaxDistance
@property (nonatomic) CGFloat drawingGestureMinimumPanDistanceThreshold; // ivar: _drawingGestureMinimumPanDistanceThreshold
@property (nonatomic) CGFloat drawingGestureMinimumScrollDistanceThreshold; // ivar: _drawingGestureMinimumScrollDistanceThreshold
@property (nonatomic) CGFloat drawingGestureTapDetectionDistanceThreshold; // ivar: _drawingGestureTapDetectionDistanceThreshold
@property (nonatomic) CGFloat drawingGestureTapDetectionTimeInterval; // ivar: _drawingGestureTapDetectionTimeInterval
@property (nonatomic) CGFloat emojiConversionDelay; // ivar: _emojiConversionDelay
@property (nonatomic) BOOL enableOnNonEditableViews; // ivar: _enableOnNonEditableViews
@property (nonatomic) BOOL enableOnRemoteViews; // ivar: _enableOnRemoteViews
@property (nonatomic) BOOL enableReserveSpace; // ivar: _enableReserveSpace
@property (nonatomic) BOOL enableReserveSpaceTapForNewlines; // ivar: _enableReserveSpaceTapForNewlines
@property (nonatomic) BOOL enableTargetedAppWorkarounds; // ivar: _enableTargetedAppWorkarounds
@property (nonatomic) BOOL enableViewControllerSupport; // ivar: _enableViewControllerSupport
@property (nonatomic) BOOL enableWeakCursor; // ivar: _enableWeakCursor
@property (nonatomic) CGFloat firstResponderAttractionHorizontal; // ivar: _firstResponderAttractionHorizontal
@property (nonatomic) CGFloat firstResponderAttractionVertical; // ivar: _firstResponderAttractionVertical
@property (nonatomic) BOOL floatingBackgroundEnabled; // ivar: _floatingBackgroundEnabled
@property (nonatomic) BOOL forceUserTextInputSettingEnabled; // ivar: _forceUserTextInputSettingEnabled
@property (nonatomic) BOOL hideDefaultReturnKeyWhenSpecialReturnKeyIsPresent; // ivar: _hideDefaultReturnKeyWhenSpecialReturnKeyIsPresent
@property (nonatomic) NSInteger incrementalCommitWordsBack; // ivar: _incrementalCommitWordsBack
@property (nonatomic) CGFloat inkWeight; // ivar: _inkWeight
@property (nonatomic) CGFloat inkWeightForIncreasedContrast; // ivar: _inkWeightForIncreasedContrast
@property (nonatomic) CGFloat interactionDisablingDelay; // ivar: _interactionDisablingDelay
@property (readonly, nonatomic) BOOL isScribbleActive;
@property (nonatomic) BOOL lineBreakOnTapEnabled; // ivar: _lineBreakOnTapEnabled
@property (nonatomic) BOOL lineBreakVerticalBarGestureEnabled; // ivar: _lineBreakVerticalBarGestureEnabled
@property (nonatomic) BOOL lineBreakVerticalBarUpToDelete; // ivar: _lineBreakVerticalBarUpToDelete
@property (nonatomic) CGFloat minimumWritingSpaceWidth; // ivar: _minimumWritingSpaceWidth
@property (nonatomic) BOOL outOfProcessRecognition; // ivar: _outOfProcessRecognition
@property (nonatomic) BOOL preventLeftoverCharsInSubwordGestures; // ivar: _preventLeftoverCharsInSubwordGestures
@property (nonatomic) CGFloat recognitionCoalescingDelay; // ivar: _recognitionCoalescingDelay
@property (readonly, copy, nonatomic) NSString *recognitionLocaleIdentifier;
@property (readonly, copy, nonatomic) NSArray *recognitionLocaleIdentifiers;
@property (nonatomic) BOOL scratchOutMakesTheCursorStrong; // ivar: _scratchOutMakesTheCursorStrong
@property (nonatomic) CGFloat singleCharacterCommitDelay; // ivar: _singleCharacterCommitDelay
@property (nonatomic) BOOL slidingCanvasDebugBorder; // ivar: _slidingCanvasDebugBorder
@property (nonatomic) CGFloat slidingCanvasHeight; // ivar: _slidingCanvasHeight
@property (nonatomic) CGFloat slidingCanvasWidth; // ivar: _slidingCanvasWidth
@property (nonatomic) CGFloat strongCursorMaximumYDistance; // ivar: _strongCursorMaximumYDistance
@property (nonatomic) CGFloat strongCursorRestoreDelay; // ivar: _strongCursorRestoreDelay
@property (nonatomic) BOOL styledActivePreview; // ivar: _styledActivePreview
@property (nonatomic) CGFloat subwordGestureEndingSpeedRange; // ivar: _subwordGestureEndingSpeedRange
@property (nonatomic) CGFloat subwordGestureSpeedThreshold; // ivar: _subwordGestureSpeedThreshold
@property (readonly, nonatomic) BOOL supportedKeyboardLocaleExists;
@property (nonatomic) CGFloat tapToLineBreakVerticalDistance; // ivar: _tapToLineBreakVerticalDistance
@property (nonatomic) CGFloat textInputStandardCommitDelay; // ivar: _textInputStandardCommitDelay
@property (nonatomic) CGFloat textInputStrokeFadeOutDelay; // ivar: _textInputStrokeFadeOutDelay
@property (nonatomic) CGFloat textInputStrokeFadeOutDuration; // ivar: _textInputStrokeFadeOutDuration
@property (nonatomic) CGFloat textInputViewHitTestSlackHorizontal; // ivar: _textInputViewHitTestSlackHorizontal
@property (nonatomic) CGFloat textInputViewHitTestSlackVertical; // ivar: _textInputViewHitTestSlackVertical
@property (nonatomic) BOOL useLargeHitTestArea; // ivar: _useLargeHitTestArea
@property (nonatomic) BOOL useSingleComponentCanvas; // ivar: _useSingleComponentCanvas
@property (nonatomic) BOOL useSlidingCanvas; // ivar: _useSlidingCanvas
@property (nonatomic) BOOL useTransformStrokesAnimation; // ivar: _useTransformStrokesAnimation
@property (nonatomic) CGFloat weakCursorVisibilityTimeout; // ivar: _weakCursorVisibilityTimeout


+(NSInteger)featureLevel;
+(id)sharedSettings;
-(BOOL)_isFeatureAvailableAndEnabled;
-(BOOL)_shouldSaveSettings;
-(id)availableRecognitionLocaleIdentifiers;
-(id)init;
-(id)settingsDictionaryRepresentation;
-(void)_loadDefaultValues;
-(void)_notifyRecognitionLocaleIdentifierDidChange;
-(void)_scheduleSavingSettingsSoon;
-(void)_scheduledSaveSettingsTriggered;
-(void)dealloc;
-(void)loadSettingsFromDictionary:(id)arg0 ;
-(void)loadSettingsFromUserDefaults;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)resetToDefaultValues;
-(void)saveSettingsToUserDefaults;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif