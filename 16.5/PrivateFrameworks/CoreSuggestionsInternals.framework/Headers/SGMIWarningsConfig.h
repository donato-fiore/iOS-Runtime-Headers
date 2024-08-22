// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMIWARNINGSCONFIG_H
#define SGMIWARNINGSCONFIG_H

@class NSRegularExpression, NSDictionary;

#import <Foundation/Foundation.h>


@interface SGMIWarningsConfig : NSObject

@property (readonly, nonatomic) NSRegularExpression *attachmentLinkDetectionRegex; // ivar: _attachmentLinkDetectionRegex
@property (readonly, nonatomic) float bodyAnalysisSamplingFactor; // ivar: _bodyAnalysisSamplingFactor
@property (readonly, nonatomic) CGFloat defaultTimeIntervalForAWarning; // ivar: _defaultTimeIntervalForAWarning
@property (readonly, nonatomic) CGFloat defaultTimeIntervalToEndWarningExposition; // ivar: _defaultTimeIntervalToEndWarningExposition
@property (readonly, nonatomic) CGFloat defaultTimeIntervalToStartWarningExposition; // ivar: _defaultTimeIntervalToStartWarningExposition
@property (readonly, nonatomic) NSDictionary *detectors; // ivar: _detectors
@property (readonly, nonatomic) NSDictionary *followUpWarningsParameters; // ivar: _followUpWarningsParameters


+(id)_defaultConfig;
+(id)defaultConfig;
-(BOOL)shouldAnalyzeBody;
-(id)description;
-(id)init;
-(id)initWithAssetAttachmentDictionary:(id)arg0 attachmentLinkDetection:(id)arg1 recipientConservativeDictionary:(id)arg2 recipientDictionary:(id)arg3 nicknameDictionary:(id)arg4 followUpOnOutgoingMailsQuestionsDictionary:(id)arg5 followUpOnOutgoingMailsAsksDictionary:(id)arg6 followUpOnIncomingMailsDictionary:(id)arg7 bodyAnalysisSamplingFactor:(float)arg8 defaultTimeIntervalToStartWarningExposition:(CGFloat)arg9 defaultTimeIntervalForAWarning:(CGFloat)arg10 defaultTimeIntervalToEndWarningExposition:(CGFloat)arg11 followUpWarningsParameters:(id)arg12 ;
-(id)objectForKeyedSubscript:(id)arg0 ;


@end


#endif