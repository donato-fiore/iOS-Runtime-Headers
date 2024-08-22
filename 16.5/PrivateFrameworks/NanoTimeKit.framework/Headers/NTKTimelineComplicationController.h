// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKTIMELINECOMPLICATIONCONTROLLER_H
#define NTKTIMELINECOMPLICATIONCONTROLLER_H

@class NSMapTable, CLKComplicationTemplate;


#import "NTKComplicationController.h"

@interface NTKTimelineComplicationController : NTKComplicationController {
    NSMapTable *_displayWrappersToUseSampleTemplate;
}


@property (readonly, nonatomic) CLKComplicationTemplate *alwaysOnTemplate; // ivar: _alwaysOnTemplate
@property (nonatomic) BOOL ignoreNewTemplates; // ivar: _ignoreNewTemplates
@property (readonly, nonatomic) CLKComplicationTemplate *lockedTemplate; // ivar: _lockedTemplate


+(BOOL)_isLegacy;
-(BOOL)useSampleTemplateForDisplayWrapper:(id)arg0 ;
-(NSUInteger)_animationForTimelineEntryTransitionFrom:(id)arg0 to:(id)arg1 withAnimationBehavior:(NSUInteger)arg2 ;
-(id)activeDisplayTemplateForDisplayWrapper:(id)arg0 ;
-(id)initWithComplication:(id)arg0 family:(NSInteger)arg1 face:(id)arg2 slot:(id)arg3 ;
-(void)_analyticsAppLaunchForTimeTravelDate:(id)arg0 timelineEntryDate:(id)arg1 ;
-(void)removeDisplayWrapper:(id)arg0 ;
-(void)setUseSampleTemplate:(BOOL)arg0 forDisplayWrapper:(id)arg1 ;


@end


#endif