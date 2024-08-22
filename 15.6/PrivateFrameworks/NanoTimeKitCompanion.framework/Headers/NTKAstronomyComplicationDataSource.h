// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKASTRONOMYCOMPLICATIONDATASOURCE_H
#define NTKASTRONOMYCOMPLICATIONDATASOURCE_H

@class NSString, CLLocation;


#import "NTKComplicationDataSource.h"

@interface NTKAstronomyComplicationDataSource : NTKComplicationDataSource {
    NSString *_token;
    CLLocation *_currentLocation;
    CLLocation *_anyLocation;
    NSUInteger _vista;
    BOOL _listeningForNotifications;
}




+(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(BOOL)alwaysShowIdealizedTemplateInSwitcher;
-(BOOL)supportsTapAction;
-(Class)richComplicationDisplayViewClassForDevice:(id)arg0 ;
-(NSUInteger)timelineAnimationBehavior;
-(id)_currentTimelineEntryWithIdealizedDate:(BOOL)arg0 ;
-(id)complicationApplicationIdentifier;
-(id)currentSwitcherTemplate;
-(id)initWithComplication:(id)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
-(void)_handleLocationUpdate:(id)arg0 anyLocation:(id)arg1 ;
-(void)_invalidate;
-(void)_startObserving;
-(void)_stopObserving;
-(void)becomeActive;
-(void)becomeInactive;
-(void)dealloc;
-(void)getCurrentTimelineEntryWithHandler:(id)arg0 ;
-(void)getLaunchURLForTimelineEntryDate:(id)arg0 timeTravelDate:(id)arg1 withHandler:(id)arg2 ;
-(void)pause;
-(void)resume;


@end


#endif