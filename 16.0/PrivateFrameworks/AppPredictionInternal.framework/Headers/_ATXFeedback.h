// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXFEEDBACK_H
#define _ATXFEEDBACK_H

@class NSString, _PASLock;
@protocol _ATXFeedbackProtocol;

#import <Foundation/Foundation.h>

#import "_ATXDataStore.h"
#import "_ATXInternalUninstallNotification.h"
#import "_ATXAppLaunchHistogramManager.h"

@interface _ATXFeedback : NSObject <_ATXFeedbackProtocol>

 {
    _ATXDataStore *_store;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    CGFloat _priorAlpha;
    CGFloat _priorBeta;
    NSString *_abGroupIdentifier;
    _ATXAppLaunchHistogramManager *_histogramManager;
    _PASLock *_histogramState;
}


@property (readonly, nonatomic) CGFloat currentAlpha;
@property (readonly, nonatomic) CGFloat currentBeta;


+(BOOL)isWidgetOrSpotlight:(NSUInteger)arg0 ;
+(id)sharedInstance;
-(id)init;
-(id)initWithDataStore:(id)arg0 histogramManager:(id)arg1 ;
-(void)decayCounts;
-(void)doDecayAtTime:(CGFloat)arg0 ;
-(void)feedbackLaunchedWithConsumerType:(NSUInteger)arg0 forBundleId:(id)arg1 rejected:(id)arg2 context:(id)arg3 ;
-(void)feedbackLaunchedWithConsumerType:(NSUInteger)arg0 forBundleId:(id)arg1 rejected:(id)arg2 explicitlyRejected:(id)arg3 context:(id)arg4 ;
-(void)loadHistogramsInMemoryIfNecessary;
-(void)populateFeedbackForConsumerType:(NSUInteger)arg0 forBundleId:(id)arg1 withContext:(id)arg2 forFeedbackCategory:(NSInteger)arg3 ;
-(void)putFeedbackScoresForApps:(id)arg0 intoScores:(*CGFloat)arg1 confirms:(*CGFloat)arg2 rejects:(*CGFloat)arg3 ;
-(void)putNopScoresForApps:(id)arg0 into:(*CGFloat)arg1 atTime:(CGFloat)arg2 ;
-(void)removeFeedbackForBundle:(id)arg0 ;
-(void)removeFeedbackForBundles:(id)arg0 ;
-(void)resetData;
-(void)unloadCachedHistograms;


@end


#endif