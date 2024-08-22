// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOANALYTICSPIPELINECURATEDCOLLECTIONACTIONOPERATION_H
#define GEOANALYTICSPIPELINECURATEDCOLLECTIONACTIONOPERATION_H



#import "GEOAnalyticsPipelineReportOperation.h"

@interface GEOAnalyticsPipelineCuratedCollectionActionOperation : GEOAnalyticsPipelineReportOperation {
    NSUInteger _actionType;
    NSUInteger _collectionId;
}




-(id)initWithSavedCollectionActionType:(NSUInteger)arg0 collectionId:(NSUInteger)arg1 remoteProxy:(id)arg2 runQueue:(id)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5 ;
-(void)main;


@end


#endif