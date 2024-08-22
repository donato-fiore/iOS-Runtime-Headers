// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLSETTINGFEEDBACKMESSAGE_H
#define CPLSETTINGFEEDBACKMESSAGE_H

@class NSString;


#import "CPLFeedbackMessage.h"

@interface CPLSettingFeedbackMessage : CPLFeedbackMessage

@property (readonly, nonatomic) NSString *settingName; // ivar: _settingName
@property (readonly, nonatomic) NSString *value; // ivar: _value


+(id)feedbackType;
-(id)initWithSetting:(id)arg0 value:(id)arg1 libraryIdentifier:(id)arg2 ;
-(id)serverMessage;


@end


#endif