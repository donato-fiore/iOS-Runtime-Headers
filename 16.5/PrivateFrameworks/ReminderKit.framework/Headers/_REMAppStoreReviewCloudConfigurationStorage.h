// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REMAPPSTOREREVIEWCLOUDCONFIGURATIONSTORAGE_H
#define _REMAPPSTOREREVIEWCLOUDCONFIGURATIONSTORAGE_H

@protocol REMAppStoreReviewCloudConfiguration;

#import <Foundation/Foundation.h>


@interface _REMAppStoreReviewCloudConfigurationStorage : NSObject <REMAppStoreReviewCloudConfiguration>



@property (readonly, nonatomic) NSUInteger appStoreReviewCreatedOrCompletedRemindersCountThreshold; // ivar: _appStoreReviewCreatedOrCompletedRemindersCountThreshold
@property (readonly, nonatomic) NSUInteger appStoreReviewNumberOfForegroundsThreshold; // ivar: _appStoreReviewNumberOfForegroundsThreshold
@property (readonly, nonatomic) CGFloat appStoreReviewTimeIntervalOfInterest; // ivar: _appStoreReviewTimeIntervalOfInterest
@property (readonly, nonatomic) CGFloat appStoreReviewTimeIntervalSinceInitialForeground; // ivar: _appStoreReviewTimeIntervalSinceInitialForeground
@property (readonly, nonatomic) CGFloat appStoreReviewTimeIntervalSinceLastFetch; // ivar: _appStoreReviewTimeIntervalSinceLastFetch
@property (readonly, nonatomic) CGFloat appStoreReviewTimeIntervalSinceLastPrompt; // ivar: _appStoreReviewTimeIntervalSinceLastPrompt


-(id)initWithCreatedOrCompletedRemindersCountThreshold:(NSUInteger)arg0 numberOfForegroundsThreshold:(NSUInteger)arg1 timeIntervalOfInterest:(CGFloat)arg2 timeIntervalSinceInitialForeground:(CGFloat)arg3 timeIntervalSinceLastFetch:(CGFloat)arg4 timeIntervalSinceLastPrompt:(CGFloat)arg5 ;


@end


#endif