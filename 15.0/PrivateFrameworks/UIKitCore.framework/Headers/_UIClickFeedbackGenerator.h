// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICLICKFEEDBACKGENERATOR_H
#define _UICLICKFEEDBACKGENERATOR_H

@protocol UIFeedbackGeneratorUserInteractionDriven;


#import "UIFeedbackGenerator.h"

@interface _UIClickFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>





+(Class)_configurationClass;
-(id)_clickConfiguration;
-(id)initWithCoordinateSpace:(id)arg0 ;
-(void)pressedDown;
-(void)pressedUp;
-(void)userInteractionCancelled;
-(void)userInteractionEnded;
-(void)userInteractionStarted;


@end


#endif