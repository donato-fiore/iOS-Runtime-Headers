// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9AACCLIENT26AECASSESSMENTCONFIGURATION_H
#define _TTC9AACCLIENT26AECASSESSMENTCONFIGURATION_H

@class NSDictionary, AEAssessmentIndividualConfiguration;

#import <Foundation/Foundation.h>


@interface _TtC9AACClient26AECAssessmentConfiguration : NSObject {
    ? configurationsByApplicationDescriptor;
    ? _allowsAutoCorrection;
    ? _allowsSmartPunctuation;
    ? _allowsSpellCheck;
    ? _allowsPredictiveKeyboard;
    ? _allowsKeyboardShortcuts;
    ? _allowsActivityContinuation;
    ? _allowsDictation;
    ? _allowsAccessibilitySpeech;
    ? _allowsPasswordAutoFill;
    ? _allowsContinuousPathKeyboard;
}


@property (nonatomic) BOOL allowsAccessibilitySpeech;
@property (nonatomic) BOOL allowsActivityContinuation;
@property (nonatomic) BOOL allowsAutoCorrection;
@property (nonatomic) BOOL allowsContinuousPathKeyboard;
@property (nonatomic) BOOL allowsDictation;
@property (nonatomic) BOOL allowsKeyboardShortcuts;
@property (nonatomic) BOOL allowsPasswordAutoFill;
@property (nonatomic) BOOL allowsPredictiveKeyboard;
@property (nonatomic) BOOL allowsSmartPunctuation;
@property (nonatomic) BOOL allowsSpellCheck;
@property (nonatomic, copy) NSDictionary *configurationsByApplicationDescriptor;
@property (nonatomic, retain) AEAssessmentIndividualConfiguration *mainIndividualConfiguration; // ivar: mainIndividualConfiguration


-(id)init;


@end


#endif