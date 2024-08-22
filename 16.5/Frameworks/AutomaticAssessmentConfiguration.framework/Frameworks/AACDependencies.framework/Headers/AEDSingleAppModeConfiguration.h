// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AEDSINGLEAPPMODECONFIGURATION_H
#define AEDSINGLEAPPMODECONFIGURATION_H

@class MCSingleAppModeConfiguration;

#import <Foundation/Foundation.h>


@interface AEDSingleAppModeConfiguration : NSObject

@property (readonly, nonatomic) MCSingleAppModeConfiguration *MCSingleAppModeConfigurationRepresentation;
@property (nonatomic) BOOL allowsAccessibilitySpeech; // ivar: _allowsAccessibilitySpeech
@property (nonatomic) BOOL allowsActivityContinuation; // ivar: _allowsActivityContinuation
@property (nonatomic) BOOL allowsAutoCorrection; // ivar: _allowsAutoCorrection
@property (nonatomic) BOOL allowsContinuousPathKeyboard; // ivar: _allowsContinuousPathKeyboard
@property (nonatomic) BOOL allowsDictation; // ivar: _allowsDictation
@property (nonatomic) BOOL allowsKeyboardShortcuts; // ivar: _allowsKeyboardShortcuts
@property (nonatomic) BOOL allowsPasswordAutoFill; // ivar: _allowsPasswordAutoFill
@property (nonatomic) BOOL allowsPredictiveKeyboard; // ivar: _allowsPredictiveKeyboard
@property (nonatomic) BOOL allowsSmartPunctuation; // ivar: _allowsSmartPunctuation
@property (nonatomic) BOOL allowsSpellCheck; // ivar: _allowsSpellCheck




@end


#endif