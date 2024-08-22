// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBUTTONFEEDBACKGENERATOR_H
#define _UIBUTTONFEEDBACKGENERATOR_H

@protocol UIFeedbackGeneratorUserInteractionDriven;


#import "UIFeedbackGenerator.h"
#import "_UIButtonFeedbackGeneratorConfiguration.h"

@interface _UIButtonFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>



@property (readonly, nonatomic, getter=_buttonConfiguration) _UIButtonFeedbackGeneratorConfiguration *buttonConfiguration;


+(Class)_configurationClass;
-(id)_stats_key;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 coordinateSpace:(id)arg1 ;
-(void)userInteractionCancelled;
-(void)userInteractionEnded;
-(void)userInteractionStarted;


@end


#endif