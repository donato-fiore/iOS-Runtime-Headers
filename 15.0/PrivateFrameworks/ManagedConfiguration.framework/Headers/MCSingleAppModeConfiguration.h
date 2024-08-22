// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCSINGLEAPPMODECONFIGURATION_H
#define MCSINGLEAPPMODECONFIGURATION_H


#import <Foundation/Foundation.h>


@interface MCSingleAppModeConfiguration : NSObject

@property (nonatomic) BOOL allowAccessibilitySpeech; // ivar: _allowAccessibilitySpeech
@property (nonatomic) BOOL allowActivityContinuation; // ivar: _allowActivityContinuation
@property (nonatomic) BOOL allowAutoCorrection; // ivar: _allowAutoCorrection
@property (nonatomic) BOOL allowContinuousPathKeyboard; // ivar: _allowContinuousPathKeyboard
@property (nonatomic) BOOL allowDefinitionLookup; // ivar: _allowDefinitionLookup
@property (nonatomic) BOOL allowDictation; // ivar: _allowDictation
@property (nonatomic) BOOL allowKeyboardShortcuts; // ivar: _allowKeyboardShortcuts
@property (nonatomic) BOOL allowPasswordAutoFill; // ivar: _allowPasswordAutoFill
@property (nonatomic) BOOL allowPredictiveKeyboard; // ivar: _allowPredictiveKeyboard
@property (nonatomic) BOOL allowQuickNote; // ivar: _allowQuickNote
@property (nonatomic) BOOL allowScreenShot; // ivar: _allowScreenShot
@property (nonatomic) BOOL allowSelectedTextSharing; // ivar: _allowSelectedTextSharing
@property (nonatomic) BOOL allowSmartPuncutation; // ivar: _allowSmartPuncutation
@property (nonatomic) BOOL allowSpellCheck; // ivar: _allowSpellCheck
@property (nonatomic) BOOL allowTranslationLookup; // ivar: _allowTranslationLookup


-(id)serializedConfiguration;


@end


#endif