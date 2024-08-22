// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDAPPLICATIONSTATEMONITOR_H
#define TIKEYBOARDAPPLICATIONSTATEMONITOR_H

@class NSString, NSDate, NSLock, NSDictionary, BKSApplicationStateMonitor, NSMutableSet, NSMutableArray, NSCalendar;
@protocol TIKeyboardApplicationStateResponses;

#import <Foundation/Foundation.h>


@interface TIKeyboardApplicationStateMonitor : NSObject {
    CGFloat _appActivityTimeDurationThreshold;
    CGFloat _appActivityKeyboardUsageFractionThreshold;
}


@property (retain, nonatomic) NSString *activeAppBundleID; // ivar: _activeAppBundleID
@property (retain, nonatomic) NSDate *activeAppStartDate; // ivar: _activeAppStartDate
@property (nonatomic) CGFloat activeAppStartTime; // ivar: _activeAppStartTime
@property (nonatomic) CGFloat activeKeyboardStartTime; // ivar: _activeKeyboardStartTime
@property (retain, nonatomic) NSLock *activeStateDataLock; // ivar: _activeStateDataLock
@property (retain, nonatomic) NSDictionary *applicationStateDatabase; // ivar: _applicationStateDatabase
@property (retain, nonatomic) BKSApplicationStateMonitor *applicationStateMonitor; // ivar: _applicationStateMonitor
@property (retain, nonatomic) NSLock *databaseInUseLock; // ivar: _databaseInUseLock
@property (weak, nonatomic) NSObject<TIKeyboardApplicationStateResponses> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableSet *foregroundApps; // ivar: _foregroundApps
@property (retain, nonatomic) NSMutableSet *imSuppressingBundleIDs; // ivar: _imSuppressingBundleIDs
@property (retain, nonatomic) NSMutableArray *keyboardUsageTimes; // ivar: _keyboardUsageTimes
@property (retain, nonatomic) NSDate *timeOfLastFlushToDisk; // ivar: _timeOfLastFlushToDisk
@property (retain, nonatomic) NSCalendar *utcCalendar; // ivar: _utcCalendar


-(BOOL)flushPendingChangesToDisk;
-(BOOL)ignoreAppExtension:(id)arg0 ;
-(BOOL)threadUnsafeFlushChangesToDiskWithImmediacy:(BOOL)arg0 ;
-(id)databaseLocation;
-(id)init;
-(id)initWithAppActivityTimeDurationThreshold:(CGFloat)arg0 keyboardUsageFractionThreshold:(CGFloat)arg1 ;
-(void)applicationUninstalled:(id)arg0 ;
-(void)dealloc;
-(void)handleApplicationStateChange:(id)arg0 ;
-(void)keyboardInUse;
-(void)keyboardNoLongerInUse;
-(void)logOutKeyboardActivity:(CGFloat)arg0 ;
-(void)startANewKeyboardActivity:(id)arg0 ;


@end


#endif