// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCCOMPLICATIONDATASOURCE_H
#define CLKCCOMPLICATIONDATASOURCE_H

@class CLKDevice;
@protocol CLKCComplicationDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "CLKCComplication.h"

@interface CLKCComplicationDataSource : NSObject

@property (readonly, nonatomic) CLKCComplication *complication; // ivar: _complication
@property (weak, nonatomic) NSObject<CLKCComplicationDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly, nonatomic) NSInteger family; // ivar: _family
@property (readonly, nonatomic) BOOL supportsTapAction;
@property (readonly, nonatomic) NSUInteger timelineAnimationBehavior;


+(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)hasSensitiveUI;
+(BOOL)wantsToSkipPauseWhenEnteringTritium;
+(NSInteger)tritiumUpdatePriority;
-(BOOL)alwaysShowIdealizedTemplateInSwitcher;
-(id)alwaysOnTemplate;
-(id)currentSwitcherTemplate;
-(id)initWithComplication:(id)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
-(id)lockedTemplate;
-(id)privacyTemplate;
-(id)sampleTemplate;
-(void)becomeActive;
-(void)becomeInactive;
-(void)didTouchDownInView:(id)arg0 ;
-(void)didTouchUpInsideView:(id)arg0 ;
-(void)getCurrentTimelineEntryWithHandler:(id)arg0 ;
-(void)getDesiredUpdateIntervalWithHandler:(id)arg0 ;
-(void)getLaunchURLForTimelineEntryDate:(id)arg0 timeTravelDate:(id)arg1 withHandler:(id)arg2 ;
-(void)getSupportedTimeTravelDirectionsWithHandler:(id)arg0 ;
-(void)getTimelineEndDateWithHandler:(id)arg0 ;
-(void)getTimelineEntriesAfterDate:(id)arg0 limit:(NSUInteger)arg1 withHandler:(id)arg2 ;
-(void)getTimelineEntriesBeforeDate:(id)arg0 limit:(NSUInteger)arg1 withHandler:(id)arg2 ;
-(void)getTimelineStartDateWithHandler:(id)arg0 ;
-(void)pause;
-(void)pauseAnimations;
-(void)resume;
-(void)resumeAnimations;


@end


#endif