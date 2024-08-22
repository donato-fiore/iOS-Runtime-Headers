// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKDIGITALTIMECOMPLICATIONDATASOURCE_H
#define NTKDIGITALTIMECOMPLICATIONDATASOURCE_H



#import "NTKComplicationDataSource.h"

@interface NTKDigitalTimeComplicationDataSource : NTKComplicationDataSource



+(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(BOOL)alwaysShowIdealizedTemplateInSwitcher;
-(BOOL)supportsTapAction;
-(Class)richComplicationDisplayViewClassForDevice:(id)arg0 ;
-(NSUInteger)timelineAnimationBehavior;
-(id)_templateWithShouldDisplayIdealizeState:(BOOL)arg0 ;
-(id)complicationApplicationIdentifier;
-(id)currentSwitcherTemplate;
-(void)getCurrentTimelineEntryWithHandler:(id)arg0 ;
-(void)getLaunchURLForTimelineEntryDate:(id)arg0 timeTravelDate:(id)arg1 withHandler:(id)arg2 ;


@end


#endif