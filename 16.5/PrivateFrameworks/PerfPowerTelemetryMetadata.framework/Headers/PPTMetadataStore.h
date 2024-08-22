// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTMETADATASTORE_H
#define PPTMETADATASTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PPTMetadataStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *metricsByID; // ivar: _metricsByID


+(id)plistMetricsFromDir:(id)arg0 ;
+(id)sharedStore;
-(id)getAllFrameworkSubsystem;
-(id)getAllSubsystem;
-(id)getMetadataForSubsystem:(id)arg0 ;
-(id)getMetadataForSubsystem:(id)arg0 category:(id)arg1 ;
-(id)getMetadataForSubsystem:(id)arg0 category:(id)arg1 name:(id)arg2 ;
-(id)getMetadataForSubsystem:(id)arg0 category:(id)arg1 name:(id)arg2 version:(CGFloat)arg3 ;
-(id)init;
-(void)addMetricsToCache:(id)arg0 ;
-(void)buildDeviceMetadata;
-(void)cacheFrameworkMetrics;
-(void)cachePlistMetrics;
-(void)loadMetricsForSubsystem:(id)arg0 ;


@end


#endif