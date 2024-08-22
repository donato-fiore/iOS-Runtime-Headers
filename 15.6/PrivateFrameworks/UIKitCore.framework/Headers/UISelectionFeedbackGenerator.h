// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISELECTIONFEEDBACKGENERATOR_H
#define UISELECTIONFEEDBACKGENERATOR_H



#import "UIFeedbackGenerator.h"
#import "_UISelectionFeedbackGeneratorConfiguration.h"

@interface UISelectionFeedbackGenerator : UIFeedbackGenerator

@property (nonatomic) CGFloat lastSelectionChangeTime; // ivar: _lastSelectionChangeTime
@property (readonly, nonatomic, getter=_selectionConfiguration) _UISelectionFeedbackGeneratorConfiguration *selectionConfiguration;


+(Class)_configurationClass;
-(id)_stats_key;
-(void)_deactivated;
-(void)_playFeedbackWithSpeed:(CGFloat)arg0 ;
-(void)selectionChanged;
-(void)userInteractionCancelled;
-(void)userInteractionEnded;
-(void)userInteractionStarted;


@end


#endif