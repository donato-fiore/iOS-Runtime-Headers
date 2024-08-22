// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDATASOURCEMETRICS_H
#define GKDATASOURCEMETRICS_H

@class NSString, NSArray, NSMutableDictionary;


#import "GKGridLayoutMetrics.h"
#import "GKCollectionViewDataSource.h"

@interface GKDataSourceMetrics : GKGridLayoutMetrics

@property (retain, nonatomic) NSString *cachedKey; // ivar: _cachedKey
@property (retain, nonatomic) NSArray *childMetrics; // ivar: _childMetrics
@property (retain, nonatomic) GKCollectionViewDataSource *dataSource; // ivar: _dataSource
@property (nonatomic) _NSRange globalSectionRange; // ivar: _globalSectionRange
@property (nonatomic) _NSRange localSectionRange; // ivar: _localSectionRange
@property (retain, nonatomic) NSMutableDictionary *sectionToMetrics; // ivar: _sectionToMetrics


+(id)dataSourceMetricsWithMetrics:(id)arg0 dataSource:(id)arg1 ;
-(id)_gkDescriptionWithChildren:(NSInteger)arg0 ;
-(id)accumulateSections:(id)arg0 layout:(id)arg1 ;
-(id)applyDataSourceMetricsToSections:(id)arg0 withParent:(id)arg1 layout:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)globalLayoutKey;
-(id)globalLayoutKeyForSection:(NSInteger)arg0 ;
-(id)initWithMetrics:(id)arg0 dataSource:(id)arg1 ;
-(id)metricsForSection:(NSInteger)arg0 ;
-(void)computeGlobalSectionRangesWithBaseIndex:(NSInteger)arg0 ;
-(void)generateMetricDataForLayout:(id)arg0 ;
-(void)prepareLayout:(id)arg0 ;
-(void)setMetrics:(id)arg0 forSection:(NSInteger)arg1 ;


@end


#endif