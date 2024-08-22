// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKTIMELINECOMPLICATIONCONTROLLER_H
#define NTKTIMELINECOMPLICATIONCONTROLLER_H

@class CLKComplicationTemplate;


#import "NTKComplicationController.h"

@interface NTKTimelineComplicationController : NTKComplicationController

@property (readonly, nonatomic) CLKComplicationTemplate *activeDisplayTemplate;
@property (readonly, nonatomic) CLKComplicationTemplate *alwaysOnTemplate; // ivar: _alwaysOnTemplate
@property (nonatomic) BOOL ignoreNewTemplates; // ivar: _ignoreNewTemplates
@property (readonly, nonatomic) CLKComplicationTemplate *lockedTemplate; // ivar: _lockedTemplate
@property (nonatomic) BOOL useSampleTemplate; // ivar: _useSampleTemplate


+(BOOL)_isLegacy;
-(NSUInteger)_animationForTimelineEntryTransitionFrom:(id)arg0 to:(id)arg1 withAnimationBehavior:(NSUInteger)arg2 ;
-(void)_analyticsAppLaunchForTimeTravelDate:(id)arg0 timelineEntryDate:(id)arg1 ;


@end


#endif