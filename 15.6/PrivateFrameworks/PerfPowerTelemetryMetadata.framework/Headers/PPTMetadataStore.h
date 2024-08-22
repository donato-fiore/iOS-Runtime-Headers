// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTMETADATASTORE_H
#define PPTMETADATASTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PPTMetadataStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *metricsByID; // ivar: _metricsByID


+(id)plistMetricsFromDir:(id)arg0 ;
+(id)sharedStore;
-(BOOL)shouldPersistMetrics;
-(id)getMetadataForSubsystem:(id)arg0 ;
-(id)getMetadataForSubsystem:(id)arg0 category:(id)arg1 ;
-(id)getMetadataForSubsystem:(id)arg0 category:(id)arg1 name:(id)arg2 ;
-(id)getMetadataForSubsystem:(id)arg0 category:(id)arg1 name:(id)arg2 version:(CGFloat)arg3 ;
-(id)getMetricsFromCache;
-(id)init;
-(id)updateVersionsForMetricStream:(id)arg0 forBuild:(id)arg1 ;
-(void)addMetricsToCache:(id)arg0 ;
-(void)addNewMetricsToStream:(id)arg0 forBuild:(id)arg1 excludeMetrics:(id)arg2 ;
-(void)buildDeviceMetadata;
-(void)cacheFrameworkMetrics;
-(void)cachePlistMetrics;
-(void)loadMetricsForSubsystem:(id)arg0 ;
-(void)persistMetrics;


@end


#endif