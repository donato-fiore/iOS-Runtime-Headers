// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEADPHONEEXPOSURESTATISTICSRESULT_H
#define HDHEADPHONEEXPOSURESTATISTICSRESULT_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "HDHeadphoneAudioExposureBucketCollection.h"

@interface HDHeadphoneExposureStatisticsResult : NSObject

@property (readonly, nonatomic) HDHeadphoneAudioExposureBucketCollection *cache; // ivar: _cache
@property (readonly, nonatomic) BOOL eligbleForUserNotification; // ivar: _eligbleForUserNotification
@property (nonatomic) BOOL needsRebuildOnNextUnlock; // ivar: _needsRebuildOnNextUnlock
@property (readonly, nonatomic) NSNumber *prunedCount; // ivar: _prunedCount


+(id)resultForAppendedSamplesDuringStartup;
+(id)resultWithCache:(id)arg0 eligbleForUserNotification:(BOOL)arg1 ;
+(id)resultWithCache:(id)arg0 prunedCount:(id)arg1 ;
-(id)_initWithCache:(id)arg0 eligbleForUserNotification:(BOOL)arg1 prunedCount:(id)arg2 ;
-(id)copyWithEligbleForUserNotificationOverride:(BOOL)arg0 ;


@end


#endif