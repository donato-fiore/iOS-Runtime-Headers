// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXAPPLAUNCHCATEGORICALHISTOGRAM_H
#define _ATXAPPLAUNCHCATEGORICALHISTOGRAM_H

@class NSMutableDictionary, NSString;
@protocol ATXBundleIdRemovableProtocol, ATXActionKeyRemovableProtocol, NSSecureCoding, _ATXAppLaunchHistogramProtocol;

#import <Foundation/Foundation.h>

#import "ATXHistogramData.h"
#import "_ATXInternalUninstallNotification.h"

@interface _ATXAppLaunchCategoricalHistogram : NSObject <ATXBundleIdRemovableProtocol, ATXActionKeyRemovableProtocol, NSSecureCoding, _ATXAppLaunchHistogramProtocol>

 {
    ATXHistogramData *_histogramData;
    CGFloat _maxSSIDCount;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    unsigned short _maxCategoryId;
    NSMutableDictionary *_categoryToCategoryId;
    NSMutableDictionary *_lastDates;
    NSString *_prevCategory;
    unsigned short _prevCategoryId;
}


@property (readonly, nonatomic) unsigned short categoryCount;
@property (readonly, nonatomic) unsigned short maxCategoryCount; // ivar: _maxCategoryCount
@property (readonly, nonatomic) NSInteger pruningMethod; // ivar: _pruningMethod


+(BOOL)supportsSecureCoding;
+(id)stringForPruningMethod:(NSInteger)arg0 ;
-(BOOL)_tryGetCategoryIdforCategory:(id)arg0 createIfMissing:(BOOL)arg1 categoryIdOut:(*unsigned short)arg2 ;
-(BOOL)_tryGetEventIdforBundleId:(id)arg0 createIfMissing:(BOOL)arg1 eventIdOut:(*unsigned short)arg2 ;
-(BOOL)bundleHasBeenLaunched:(id)arg0 ;
-(BOOL)removeHistoryForBundleId:(id)arg0 ;
-(BOOL)removeHistoryForCategory:(id)arg0 ;
-(CGFloat)entropy;
-(CGFloat)entropyForBundleId:(id)arg0 ;
-(CGFloat)entropyForCategory:(id)arg0 ;
-(CGFloat)launchPopularityWithBundleId:(id)arg0 category:(id)arg1 ;
-(CGFloat)overallLaunchPopularityForBundleId:(id)arg0 ;
-(CGFloat)overallLaunchPopularityForBundleId:(id)arg0 category:(id)arg1 ;
-(CGFloat)overallLaunchPopularityForCategory:(id)arg0 ;
-(CGFloat)ratio:(CGFloat)arg0 over:(CGFloat)arg1 ;
-(CGFloat)relativeLaunchPopularityWithBundleId:(id)arg0 category:(id)arg1 ;
-(CGFloat)totalLaunches;
-(CGFloat)totalLaunchesForBundleId:(id)arg0 ;
-(CGFloat)totalLaunchesForBundleId:(id)arg0 category:(id)arg1 ;
-(CGFloat)totalLaunchesForCategory:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHistogram:(id)arg0 categoryToCategoryId:(id)arg1 maxCategoryId:(unsigned short)arg2 maxCategoryCount:(unsigned short)arg3 lastDates:(id)arg4 pruningMethod:(NSInteger)arg5 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 maxCategoryCount:(unsigned short)arg1 pruningMethod:(NSInteger)arg2 ;
-(id)lastDate;
-(id)launchCountsForEachCategoryForBundleId:(id)arg0 ;
-(int)removeHistoryForBundleIds:(id)arg0 ;
-(unsigned short)_categoryIdforCategory:(id)arg0 ;
-(unsigned short)_eventIdforBundleId:(id)arg0 ;
-(void)_garbageCollectCategoryIds;
-(void)_reduceCategoryCountTo:(unsigned short)arg0 ;
-(void)_removeMappingForCategory:(id)arg0 ;
-(void)addLaunchWithBundleId:(id)arg0 date:(id)arg1 category:(id)arg2 ;
-(void)addLaunchWithBundleId:(id)arg0 date:(id)arg1 category:(id)arg2 weight:(float)arg3 ;
-(void)decayByFactor:(CGFloat)arg0 ;
-(void)decayWithHalfLifeInDays:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeActionKeys:(id)arg0 ;
-(void)removeBundleIds:(id)arg0 ;
-(void)removeIdentifiers:(id)arg0 ;
-(void)resetData;
-(void)resetHistogram:(id)arg0 ;
-(void)verifyDataIntegrity;


@end


#endif