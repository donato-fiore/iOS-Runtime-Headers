// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLAGGREGATESUMMARIZATIONSERVICE_H
#define PLAGGREGATESUMMARIZATIONSERVICE_H

@class PLService, PLXPCResponderOperatorComposition, NSArray, NSMutableArray, NSMutableDictionary;



@interface PLAggregateSummarizationService : PLService

@property (retain) PLXPCResponderOperatorComposition *aggregationResponder; // ivar: _aggregationResponder
@property (retain) NSArray *appList; // ivar: _appList
@property CGFloat maxTimestamp; // ivar: _maxTimestamp
@property (retain) NSMutableArray *metrics; // ivar: _metrics
@property (retain) NSMutableDictionary *summarizedData; // ivar: _summarizedData


+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)modelIdentifier;
+(id)osVersion;
+(short)buildType;
+(void)load;
-(id)getAppMultipleVersionsData;
-(id)getCellularConditionSummarizer:(SEL)arg0 ;
-(id)getDeviceMetadataInRange:(struct _PLTimeIntervalRange )arg0 withSignpostData:(id)arg1 ;
-(id)getDrainInfoInRange:(struct _PLTimeIntervalRange )arg0 ;
-(id)getGenericSummarizer:(SEL)arg0 ;
-(id)getInitCountInRange:(struct _PLTimeIntervalRange )arg0 ;
-(id)getLocationActivitySummarizer:(SEL)arg0 ;
-(id)getPluggedInDurationInRange:(struct _PLTimeIntervalRange )arg0 ;
-(id)getQueryForAppMultipleVersions:(SEL)arg0 ;
-(id)getQueryForAverageMemory:(SEL)arg0 ;
-(id)getQueryForCellularCondition:(SEL)arg0 ;
-(id)getQueryForCoalitionPowerData:(SEL)arg0 ;
-(id)getQueryForDiskIO:(SEL)arg0 ;
-(id)getQueryForDisplayAPL:(SEL)arg0 ;
-(id)getQueryForLocationActivity:(SEL)arg0 ;
-(id)getQueryForNetworkIOData:(SEL)arg0 ;
-(id)getQueryForPeakMemory:(SEL)arg0 ;
-(id)handleAggregationQueryWithPayload:(id)arg0 ;
-(id)init;
-(id)preformatMetricsForFormatter:(id)arg0 ;
-(void)addMetrics:(id)arg0 withType:(short)arg1 ;
-(void)aggregateMetrics;
-(void)getAppList:(id)arg0 ;
-(void)getAppMetadata;
-(void)initOperatorDependancies;
-(void)setupMetrics;


@end


#endif