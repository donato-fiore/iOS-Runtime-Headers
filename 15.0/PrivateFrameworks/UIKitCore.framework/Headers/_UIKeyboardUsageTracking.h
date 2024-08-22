// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIKEYBOARDUSAGETRACKING_H
#define _UIKEYBOARDUSAGETRACKING_H


#import <Foundation/Foundation.h>


@interface _UIKeyboardUsageTracking : NSObject



+(void)appAutofillCredentialFromSafariUI;
+(void)appAutofillDetectedDecrement;
+(void)appAutofillDetectedIncrement;
+(void)appAutofillExtraKeyTapped;
+(void)appAutofillFilled;
+(void)countKeystrokeForReachableKeyboardWithBias:(NSInteger)arg0 ;
+(void)countReachableKeyboardHandBiasChangeToBias:(NSInteger)arg0 ;
+(void)dualStringsKeyFlickUpCount;
+(void)inputSwitcherSetPredictionPreference:(BOOL)arg0 ;
+(void)keyboardExtensionCrashed;
+(void)keyboardExtensionPrimaryLanguageChanged;
+(void)keyboardExtensionsOnDevice;
+(void)keyboardGestureOneFingerForcePan:(BOOL)arg0 ;
+(void)keyboardGestureOneFingerForcePress:(BOOL)arg0 withPressCount:(int)arg1 ;
+(void)keyboardGestureSelectedPredictiveInputCandidate;
+(void)keyboardGestureSetPredictionPreference:(BOOL)arg0 ;
+(void)keyboardGestureTwoFingerTap:(BOOL)arg0 withTapCount:(int)arg1 ;
+(void)keyboardPerformanceFromTouchRelease:(CGFloat)arg0 until:(CGFloat)arg1 ;
+(void)keyboardPerformanceFromTouchStart:(CGFloat)arg0 until:(CGFloat)arg1 ;
+(void)keyboardReachabilityDistribution:(CGFloat)arg0 ;
+(void)keyboardSetToInputMode:(id)arg0 fromPrevious:(id)arg1 ;
+(void)keyboardSupportsTouch:(BOOL)arg0 ;
+(void)keyboardTotalOnScreenTime:(CGFloat)arg0 orientation:(NSInteger)arg1 ;
+(void)letterCaseToggleIncrement;
+(void)loginPasswordFromAutofillIncrement;
+(void)loginPasswordFromKeyboardIncrement;
+(void)normalPunctuationKeyCount;
+(void)panAlternateKeyFlickDownCount;
+(void)predictionViewState:(BOOL)arg0 forInputMode:(id)arg1 ;
+(void)redoKeyCount;
+(void)restAndTypeTriggered;
+(void)selectedPredictiveInputCandidate:(id)arg0 isAutocorrection:(BOOL)arg1 index:(NSUInteger)arg2 ;
+(void)showCharacterPreviewPreference:(BOOL)arg0 ;
+(void)showLowercaseKeyplanePreference:(BOOL)arg0 ;
+(void)showVariantsIncrement;
+(void)signupPasswordFromAutofillIncrement;
+(void)signupPasswordFromKeyboardIncrement;
+(void)singleStringKeyFlickUpCount;
+(void)undoKeyCount;
+(void)variantDeleteIncrement;


@end


#endif