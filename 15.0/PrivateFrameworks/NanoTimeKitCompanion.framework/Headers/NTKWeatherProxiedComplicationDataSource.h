// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKWEATHERPROXIEDCOMPLICATIONDATASOURCE_H
#define NTKWEATHERPROXIEDCOMPLICATIONDATASOURCE_H



#import "NTKComplicationDataSource.h"

@interface NTKWeatherProxiedComplicationDataSource : NTKComplicationDataSource

@property (retain, nonatomic) id *proxy; // ivar: _proxy


+(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
-(id)complicationApplicationIdentifier;
-(id)currentSwitcherTemplate;
-(id)initWithComplication:(id)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
-(id)lockedTemplate;
-(id)sampleTemplate;
-(void)becomeActive;
-(void)becomeInactive;
-(void)getCurrentTimelineEntryWithHandler:(id)arg0 ;
-(void)getLaunchURLForTimelineEntryDate:(id)arg0 timeTravelDate:(id)arg1 withHandler:(id)arg2 ;
-(void)getTimelineEndDateWithHandler:(id)arg0 ;
-(void)getTimelineEntriesAfterDate:(id)arg0 limit:(NSUInteger)arg1 withHandler:(id)arg2 ;
-(void)pause;
-(void)resume;
-(void)setDelegate:(id)arg0 ;


@end


#endif