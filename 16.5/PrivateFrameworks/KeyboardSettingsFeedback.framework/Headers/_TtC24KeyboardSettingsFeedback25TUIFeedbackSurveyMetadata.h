// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC24KEYBOARDSETTINGSFEEDBACK25TUIFEEDBACKSURVEYMETADATA_H
#define _TTC24KEYBOARDSETTINGSFEEDBACK25TUIFEEDBACKSURVEYMETADATA_H


#import <Foundation/Foundation.h>


@interface _TtC24KeyboardSettingsFeedback25TUIFeedbackSurveyMetadata : NSObject {
    ? build;
    ? model;
    ? language;
    ? region;
    ? initialPreferenceValue;
    ? initialInputModes;
    ? initialTimestamp;
    ? finalPreferenceValue;
    ? finalInputModes;
    ? finalTimestamp;
}




-(id)init;
-(id)initWithBuild:(id)arg0 model:(id)arg1 language:(id)arg2 region:(id)arg3 initialPreferenceValue:(BOOL)arg4 initialInputModes:(id)arg5 initialTimestamp:(id)arg6 finalPreferenceValue:(BOOL)arg7 finalInputModes:(id)arg8 finalTimestamp:(id)arg9 ;


@end


#endif