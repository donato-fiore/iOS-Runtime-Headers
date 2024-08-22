// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATESFEEDBACKGENERATOR_H
#define _UISTATESFEEDBACKGENERATOR_H

@class NSString, _UIFeedback<_UIFeedbackContinuousPlayable>;


#import "UIFeedbackGenerator.h"
#import "_UIStatesFeedbackGeneratorConfiguration.h"

@interface _UIStatesFeedbackGenerator : UIFeedbackGenerator

@property (nonatomic, getter=_approachActivated, setter=_setApproachActivated:) BOOL approachActivated; // ivar: _approachActivated
@property (retain, nonatomic) NSString *currentState; // ivar: _currentState
@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback; // ivar: _playingContinuousFeedback
@property (readonly, nonatomic, getter=_statesConfiguration) _UIStatesFeedbackGeneratorConfiguration *statesConfiguration;


+(Class)_configurationClass;
-(id)_configurationFromState:(id)arg0 toState:(id)arg1 ;
-(id)_stats_key;
-(id)initWithConfiguration:(id)arg0 coordinateSpace:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 coordinateSpace:(id)arg1 ;
-(void)_stopPlayingContinuousFeedback;
-(void)transitionToState:(id)arg0 ended:(BOOL)arg1 ;
-(void)transitionToState:(id)arg0 updated:(CGFloat)arg1 ;


@end


#endif