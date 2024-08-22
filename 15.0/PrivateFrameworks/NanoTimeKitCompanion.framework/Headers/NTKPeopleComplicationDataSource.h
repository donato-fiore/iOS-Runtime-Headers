// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKPEOPLECOMPLICATIONDATASOURCE_H
#define NTKPEOPLECOMPLICATIONDATASOURCE_H

@class NSString;
@protocol OS_dispatch_queue;


#import "NTKComplicationDataSource.h"
#import "NTKPeopleComplication.h"
#import "NTKPeopleComplicationEntry.h"

@interface NTKPeopleComplicationDataSource : NTKComplicationDataSource {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isPaused;
    BOOL _needsInvalidation;
    NTKPeopleComplication *_complication;
    NSString *_secondaryContactID;
    NSString *_storeBackedContactID;
    NTKPeopleComplicationEntry *_timelineEntry;
    NTKPeopleComplicationEntry *_switcherEntry;
}




+(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(NSInteger)tritiumUpdatePriority;
-(BOOL)supportsTapAction;
-(NSUInteger)timelineAnimationBehavior;
-(id)_loadTimelineEntry;
-(id)complicationApplicationIdentifier;
-(id)currentSwitcherTemplate;
-(id)initWithComplication:(id)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
-(id)lockedTemplate;
-(void)_didReceiveContactsCachceChangedNotification;
-(void)_invalidateIfNeeded;
-(void)_queue_reloadTimelineEntry;
-(void)_setupNotifications;
-(void)_tearDownNotifications;
-(void)dealloc;
-(void)getCurrentTimelineEntryWithHandler:(id)arg0 ;
-(void)getLaunchURLForTimelineEntryDate:(id)arg0 timeTravelDate:(id)arg1 withHandler:(id)arg2 ;
-(void)pause;
-(void)resume;


@end


#endif