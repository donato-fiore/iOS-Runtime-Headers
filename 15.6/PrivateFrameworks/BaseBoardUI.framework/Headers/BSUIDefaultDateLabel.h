// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSUIDEFAULTDATELABEL_H
#define BSUIDEFAULTDATELABEL_H

@class UILabel, NSDate, NSTimer, NSString;
@protocol BSUIDateLabel, BSUIDateLabelDelegate;



@interface BSUIDefaultDateLabel : UILabel <BSUIDateLabel>

 {
    NSDate *_timeZoneRelativeEndDate;
    NSDate *_effectiveAllDayStartDate;
    NSDate *_effectiveAllDayLastValidDate;
    NSDate *_effectiveAllDayEndDate;
    BOOL _effectiveAllDay;
    BOOL _isCoalescingUpdates;
    BOOL _needsUpdateFromCoalesce;
    NSTimer *_updateTimer;
}


@property (nonatomic, getter=isAllDay) BOOL allDay; // ivar: _allDay
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BSUIDateLabelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTimestamp; // ivar: _isTimestamp
@property (nonatomic) NSInteger labelType; // ivar: _labelType
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *timeZoneRelativeStartDate; // ivar: _timeZoneRelativeStartDate


-(BOOL)isDateWithinEffectiveAllDayRange:(id)arg0 ;
-(BOOL)isEffectiveAllDay;
-(id)constructLabelString;
-(id)init;
-(void)_forceUpdate;
-(void)_updateTimerFired:(id)arg0 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setEndDate:(id)arg0 withTimeZone:(id)arg1 ;
-(void)setStartDate:(id)arg0 withTimeZone:(id)arg1 ;
-(void)setTimeZoneRelativeEndDate:(id)arg0 ;
-(void)startCoalescingUpdates;
-(void)stopCoalescingUpdates;
-(void)update;
-(void)updateTextIfNecessary;


@end


#endif