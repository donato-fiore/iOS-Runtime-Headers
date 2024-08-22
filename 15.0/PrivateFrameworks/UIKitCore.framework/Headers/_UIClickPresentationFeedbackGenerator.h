// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICLICKPRESENTATIONFEEDBACKGENERATOR_H
#define _UICLICKPRESENTATIONFEEDBACKGENERATOR_H

@protocol UIFeedbackGeneratorUserInteractionDriven;


#import "UIFeedbackGenerator.h"

@interface _UIClickPresentationFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>





+(Class)_configurationClass;
-(id)_clickConfiguration;
-(id)initWithCoordinateSpace:(id)arg0 ;
-(void)dragged;
-(void)popped;
-(void)previewed;
-(void)userInteractionCancelled;
-(void)userInteractionEnded;
-(void)userInteractionStarted;


@end


#endif