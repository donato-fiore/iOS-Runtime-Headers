// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXAPPLAUNCHHISTOGRAM_H
#define _ATXAPPLAUNCHHISTOGRAM_H

@class _PASLock, NSDate, NSTimeZone, NSString;
@protocol ATXBundleIdRemovableProtocol, ATXActionKeyRemovableProtocol, NSSecureCoding, _ATXAppLaunchHistogramProtocol, ATXCategoricalHistogramProtocol;

#import <Foundation/Foundation.h>

#import "_ATXInternalUninstallNotification.h"

@interface _ATXAppLaunchHistogram : NSObject <ATXBundleIdRemovableProtocol, ATXActionKeyRemovableProtocol, NSSecureCoding, _ATXAppLaunchHistogramProtocol, ATXCategoricalHistogramProtocol>

 {
    NSInteger _secondsPerLocaltimeInterval;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    int _timeBase;
    _PASLock *_lock;
    _opaque_pthread_mutex_t _prevLocaltimeLock;
    NSDate *_prevDate;
    NSTimeZone *_prevTimeZone;
    unsigned short _prevLocaltime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)bundleHasBeenLaunched:(id)arg0 ;
-(BOOL)removeHistoryForBundleId:(id)arg0 ;
-(CGFloat)averageLaunchesPerBundleId:(id)arg0 ;
-(CGFloat)entropy;
-(CGFloat)entropyForBundleId:(id)arg0 ;
-(CGFloat)entropyForDate:(id)arg0 ;
-(CGFloat)launchPopularityWithBundleId:(id)arg0 date:(id)arg1 ;
-(CGFloat)overallLaunchPopularityForBundleId:(id)arg0 ;
-(CGFloat)ratio:(CGFloat)arg0 over:(CGFloat)arg1 ;
-(CGFloat)relativeLaunchPopularityWithBundleId:(id)arg0 date:(id)arg1 ;
-(CGFloat)relativeLaunchPopularityWithBundleId:(id)arg0 date:(id)arg1 distanceScale:(float)arg2 ;
-(CGFloat)relativeLaunchPopularityWithBundleId:(id)arg0 elapsedTime:(CGFloat)arg1 distanceScale:(float)arg2 ;
-(CGFloat)totalLaunches;
-(CGFloat)totalLaunchesForBundleIds:(id)arg0 ;
-(CGFloat)totalLaunchesForBundleIds:(id)arg0 forDate:(id)arg1 distanceScale:(float)arg2 ;
-(CGFloat)totalTimeOfDayLaunchesForDate:(id)arg0 ;
-(CGFloat)totalTimeOfDayLaunchesForDate:(id)arg0 distanceScale:(float)arg1 ;
-(CGFloat)totalTimeOfDayLaunchesForElapsedTime:(CGFloat)arg0 ;
-(CGFloat)totalTimeOfDayLaunchesForElapsedTime:(CGFloat)arg0 distanceScale:(float)arg1 ;
-(CGFloat)unsmoothedLaunchesForBundleIds:(id)arg0 forLocalTime:(unsigned short)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHistogram:(id)arg0 bucketCount:(unsigned short)arg1 filter:(BOOL)arg2 timeBase:(int)arg3 ;
-(id)initWithType:(NSInteger)arg0 ;
-(int)removeHistoryForBundleIds:(id)arg0 ;
-(unsigned short)_eventIdforBundleId:(id)arg0 ;
-(unsigned short)_localTimeWithDate:(id)arg0 ;
-(unsigned short)_localTimeWithDate:(id)arg0 timeZone:(id)arg1 ;
-(unsigned short)bucketCount;
-(void)_addLaunchWithBundleId:(id)arg0 date:(id)arg1 timeZone:(id)arg2 arbitraryWeight:(float)arg3 ;
-(void)addLaunchWithBundleId:(id)arg0 date:(id)arg1 timeZone:(id)arg2 ;
-(void)addLaunchWithBundleId:(id)arg0 date:(id)arg1 timeZone:(id)arg2 weight:(float)arg3 ;
-(void)addLaunchWithBundleId:(id)arg0 elapsedTime:(CGFloat)arg1 ;
-(void)addLaunchWithBundleId:(id)arg0 elapsedTime:(CGFloat)arg1 weight:(float)arg2 ;
-(void)dealloc;
-(void)decayByFactor:(CGFloat)arg0 ;
-(void)decayWithHalfLifeInDays:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeActionKeys:(id)arg0 ;
-(void)removeBundleIds:(id)arg0 ;
-(void)removeIdentifiers:(id)arg0 ;
-(void)removeLaunchWithBundleId:(id)arg0 date:(id)arg1 timeZone:(id)arg2 weight:(float)arg3 ;
-(void)resetData;
-(void)resetHistogram:(id)arg0 ;
-(void)verifyDataIntegrity;


@end


#endif