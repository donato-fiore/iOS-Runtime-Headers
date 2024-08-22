// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTDATAINGESTERUTILITIES_H
#define PPTDATAINGESTERUTILITIES_H


#import <Foundation/Foundation.h>


@interface PPTDataIngesterUtilities : NSObject



+(BOOL)isMetricMetadataFilepath:(id)arg0 ;
+(BOOL)isMetricStorageFilepath:(id)arg0 ;
+(id)columnNamesForDataSource:(id)arg0 metricsFilepath:(id)arg1 ;
+(id)dataSourceForMetricDefinition:(id)arg0 ;
+(id)dataSourceForSubsystem:(id)arg0 category:(id)arg1 ;
+(id)filepathForMetricDefinition:(id)arg0 ;
+(id)filepathForSubsystem:(id)arg0 category:(id)arg1 ;


@end


#endif