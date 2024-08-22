// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLETEXTTOSPEECHSPEECHFEATUREREQUEST_H
#define QSSMUTABLETEXTTOSPEECHSPEECHFEATUREREQUEST_H

@class NSString;


#import "QSSTextToSpeechSpeechFeatureRequest.h"
#import "QSSTextToSpeechSpeechFeatureModelIdentifier.h"
#import "QSSTextToSpeechSpeechFeatureInputText.h"
#import "QSSTextToSpeechSpeechFeatureInputWave.h"

@interface QSSMutableTextToSpeechSpeechFeatureRequest : QSSTextToSpeechSpeechFeatureRequest

@property (copy, nonatomic) QSSTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) QSSTextToSpeechSpeechFeatureInputText *text;
@property (copy, nonatomic) QSSTextToSpeechSpeechFeatureInputWave *wave_data;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif