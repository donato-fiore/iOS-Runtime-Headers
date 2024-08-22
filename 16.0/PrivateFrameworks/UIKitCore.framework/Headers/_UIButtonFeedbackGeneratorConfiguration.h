// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBUTTONFEEDBACKGENERATORCONFIGURATION_H
#define _UIBUTTONFEEDBACKGENERATORCONFIGURATION_H

@class UIFeedbackGeneratorUserInteractionDrivenConfiguration;



@interface _UIButtonFeedbackGeneratorConfiguration : UIFeedbackGeneratorUserInteractionDrivenConfiguration



+(id)defaultConfiguration;
+(id)prominentConfiguration;
-(NSInteger)requiredSupportLevel;


@end


#endif