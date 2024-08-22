// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKLOCALTIMELINECOMPLICATIONCONTROLLER_H
#define NTKLOCALTIMELINECOMPLICATIONCONTROLLER_H

@class CLKCComplicationDataSource, NSDate, TLTimeline, NSMutableSet, CLKComplicationTemplate, NSString;
@protocol CLKCComplicationDataSourceDelegate, TLTimelineDelegate, NTKTimeTravel;


#import "NTKTimelineComplicationController.h"
#import "NTKTimelineDataOperation.h"

@interface NTKLocalTimelineComplicationController : NTKTimelineComplicationController <CLKCComplicationDataSourceDelegate, TLTimelineDelegate, NTKTimeTravel>

 {
    CLKCComplicationDataSource *_dataSource;
    NSDate *_timeTravelDate;
    BOOL _supportsTimeTravelForward;
    NSDate *_timelineEndDate;
    BOOL _hasQueuedAnimation;
    NSUInteger _queuedAnimation;
    TLTimeline *_timeline;
    NTKTimelineDataOperation *_currentOperation;
    NSMutableSet *_suspendedRightBoundaryDates;
    NSMutableSet *_delayedBlocks;
    CLKComplicationTemplate *_switcherTemplate;
    BOOL _hasBeenLive;
    NSInteger _dataSourceState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLKComplicationTemplate *sharingTemplate;
@property (readonly) Class superclass;


+(BOOL)_acceptsComplicationType:(NSUInteger)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
+(Class)complicationDataSourceClassForComplication:(id)arg0 family:(NSInteger)arg1 device:(id)arg2 ;
-(BOOL)hasTapAction;
-(CGFloat)minimumIntervalBetweenTimelineEntries;
-(Class)richComplicationDisplayViewClass;
-(id)_currentEntry;
-(id)activeDisplayTemplate;
-(id)alwaysOnTemplate;
-(id)complicationApplicationIdentifier;
-(id)initWithComplication:(id)arg0 family:(NSInteger)arg1 face:(id)arg2 slot:(id)arg3 ;
-(id)lockedTemplate;
-(void)_activate;
-(void)_applyAnimationMode;
-(void)_applyCachingMode;
-(void)_applyUpdatingMode;
-(void)_cancelDelayedBlocks;
-(void)_completeExtendRightOperationWithBoundaryDate:(id)arg0 entries:(id)arg1 ;
-(void)_completeSetupOperationWithEndDate:(id)arg0 currentEntry:(id)arg1 ;
-(void)_deactivate;
-(void)_extendTimelineIfNecessaryAndPossible;
-(void)_queueAnimationForNextUpdate:(NSUInteger)arg0 ;
-(void)_requestDataSourceToUpdateToState:(NSInteger)arg0 ;
-(void)_resetTimelineForCachingChange;
-(void)_startExtendOperationIfNecessaryForTimeline:(id)arg0 withDate:(id)arg1 minBuffer:(CGFloat)arg2 ;
-(void)_startExtendRightOperationFromDate:(id)arg0 ;
-(void)_startSetupOperationIfPossible;
-(void)_suspendRightBoundaryDate:(id)arg0 ;
-(void)_updateCurrentTemplateWithReason:(NSInteger)arg0 ;
-(void)_updateDimStateForCurrentTimeline;
-(void)_updateIsComplicationActive:(BOOL)arg0 ;
-(void)addDisplayWrapper:(id)arg0 ;
-(void)appendEntries:(id)arg0 ;
-(void)appendEntries:(id)arg0 withTritiumUpdatePriority:(NSInteger)arg1 ;
-(void)didTouchDownInView:(id)arg0 ;
-(void)didTouchUpInsideView:(id)arg0 ;
-(void)entriesDidChangeInTimeline:(id)arg0 ;
-(void)invalidateEntries;
-(void)invalidateEntriesWithTritiumUpdatePriority:(NSInteger)arg0 ;
-(void)invalidateSwitcherTemplate;
-(void)performTapAction;
-(void)setCurrentTemplate:(id)arg0 reason:(NSInteger)arg1 animation:(NSUInteger)arg2 ;
-(void)setDataMode:(NSInteger)arg0 forDisplayWrapper:(id)arg1 ;
-(void)setIgnoreNewTemplates:(BOOL)arg0 ;
-(void)setShowsLockedUI:(BOOL)arg0 ;
-(void)setTimeTravelDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)setTimelineEndDate:(id)arg0 ;
-(void)timeline:(id)arg0 didChangeNowEntryFrom:(id)arg1 to:(id)arg2 ;


@end


#endif