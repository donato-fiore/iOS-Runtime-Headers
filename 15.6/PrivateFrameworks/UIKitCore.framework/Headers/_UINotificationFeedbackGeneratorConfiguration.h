// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UINOTIFICATIONFEEDBACKGENERATORCONFIGURATION_H
#define _UINOTIFICATIONFEEDBACKGENERATORCONFIGURATION_H

@class UIFeedbackGeneratorConfiguration, NSDictionary;



@interface _UINotificationFeedbackGeneratorConfiguration : UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) NSDictionary *feedbacks; // ivar: _feedbacks
@property (nonatomic) BOOL includePrivateEvents; // ivar: _includePrivateEvents


+(id)defaultConfiguration;
+(id)privateConfiguration;
+(id)privateConfigurationForTypes:(id)arg0 ;
-(BOOL)defaultEnabled;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)feedbackKeyPaths;


@end


#endif