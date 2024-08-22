// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AEASSESSMENTCONFIGURATION_H
#define AEASSESSMENTCONFIGURATION_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AEAssessmentParticipantConfiguration.h"

@interface AEAssessmentConfiguration : NSObject <NSCopying>



@property (nonatomic) BOOL allowsAccessibilitySpeech; // ivar: _allowsAccessibilitySpeech
@property (nonatomic) BOOL allowsActivityContinuation; // ivar: _allowsActivityContinuation
@property (nonatomic) BOOL allowsContinuousPathKeyboard; // ivar: _allowsContinuousPathKeyboard
@property (nonatomic) BOOL allowsDictation; // ivar: _allowsDictation
@property (nonatomic) BOOL allowsKeyboardShortcuts; // ivar: _allowsKeyboardShortcuts
@property (nonatomic) BOOL allowsPasswordAutoFill; // ivar: _allowsPasswordAutoFill
@property (nonatomic) BOOL allowsPredictiveKeyboard; // ivar: _allowsPredictiveKeyboard
@property (nonatomic) BOOL allowsSpellCheck; // ivar: _allowsSpellCheck
@property (nonatomic) NSUInteger autocorrectMode; // ivar: _autocorrectMode
@property (readonly, copy, nonatomic) NSDictionary *configurationsByApplication; // ivar: _configurationsByApplication
@property (readonly, nonatomic) AEAssessmentParticipantConfiguration *mainParticipantConfiguration; // ivar: _mainParticipantConfiguration


+(id)instanceFromBackingConfiguration:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)backingValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif