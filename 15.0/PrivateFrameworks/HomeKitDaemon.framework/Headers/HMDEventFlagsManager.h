// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDEVENTFLAGSMANAGER_H
#define HMDEVENTFLAGSMANAGER_H

@class HMFObject, HMFUnfairLock, NSMutableDictionary, NSDate;
@protocol HMDEventFlagsStoring, OS_dispatch_queue;



@interface HMDEventFlagsManager : HMFObject {
    HMFUnfairLock *_lock;
}


@property (retain, nonatomic) NSMutableDictionary *eventFlags; // ivar: _eventFlags
@property (readonly) NSObject<HMDEventFlagsStoring> *flagsStorage; // ivar: _flagsStorage
@property (retain, nonatomic) NSDate *lastSaveTime; // ivar: _lastSaveTime
@property (nonatomic) NSUInteger saveCount; // ivar: _saveCount
@property (nonatomic, getter=isSaving) BOOL saving; // ivar: _saving
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedEventFlagsManager;
-(NSUInteger)_fetchEventFlagForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(NSUInteger)fetchEventFlagForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(id)_eventFlagForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(id)_fetchAllDefinedEventPeriods;
-(id)_fetchAllEventFlags;
-(id)_fetchEventFlagsForRequestGroup:(id)arg0 ;
-(id)_fetchEventPeriodsForRequestGroup:(id)arg0 ;
-(id)fetchAllEventFlags;
-(id)fetchAllEventPeriodsDefinedForEventFlags;
-(id)fetchEventFlagsForRequestGroup:(id)arg0 ;
-(id)init;
-(id)initWithEventFlagsStorage:(id)arg0 ;
-(id)unarchivedEventFlags;
-(void)_defineEventPeriod:(CGFloat)arg0 forEventName:(id)arg1 requestGroup:(id)arg2 ;
-(void)_performOnUpdate;
-(void)_resetEventFlagForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(void)_save;
-(void)_setEventFlagForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(void)_shiftEventFlagForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(void)archiveEventFlagsWithEventFlagsSnapshot:(id)arg0 definedEventPeriodsSnapshot:(id)arg1 completionHandler:(id)arg2 ;
-(void)defineEventPeriod:(CGFloat)arg0 forEventName:(id)arg1 requestGroup:(id)arg2 ;
-(void)defineEventPeriod:(CGFloat)arg0 forEventNames:(id)arg1 requestGroup:(id)arg2 ;
-(void)forceSave;
-(void)logDiskWriteState;
-(void)resetEventFlagForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(void)setEventFlagForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(void)shiftEventFlagForEventName:(id)arg0 requestGroup:(id)arg1 ;
-(void)shiftEventFlagsForRequestGroup:(id)arg0 ;


@end


#endif