// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDRAGFEEDBACKGENERATOR_H
#define _UIDRAGFEEDBACKGENERATOR_H

@class _UIFeedback<_UIFeedbackContinuousPlayable>;
@protocol UIFeedbackGeneratorUserInteractionDriven;


#import "UIFeedbackGenerator.h"
#import "_UIDragFeedbackGeneratorConfiguration.h"

@interface _UIDragFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>



@property (readonly, nonatomic, getter=_dragConfiguration) _UIDragFeedbackGeneratorConfiguration *dragConfiguration;
@property (retain, nonatomic, getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback; // ivar: _playingContinuousFeedback
@property (nonatomic, getter=_state, setter=_setState:) NSInteger state; // ivar: _state


+(Class)_configurationClass;
-(id)_stats_key;
-(void)_startPlayingContinuousFeedback;
-(void)_startPlayingContinuousFeedbackNow;
-(void)_stopPlayingContinuousFeedback;
-(void)dropTargetUpdated;
-(void)positionUpdated;
-(void)userInteractionCancelled;
-(void)userInteractionEnded;
-(void)userInteractionStarted;


@end


#endif