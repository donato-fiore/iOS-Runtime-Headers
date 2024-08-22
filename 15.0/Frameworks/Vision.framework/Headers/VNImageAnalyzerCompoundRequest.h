// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNIMAGEANALYZERCOMPOUNDREQUEST_H
#define VNIMAGEANALYZERCOMPOUNDREQUEST_H



#import "VNCompoundRequest.h"
#import "VNImageAnalyzerCompoundRequestGroupingConfiguration.h"

@interface VNImageAnalyzerCompoundRequest : VNCompoundRequest {
    VNImageAnalyzerCompoundRequestGroupingConfiguration *_groupingConfiguration;
}




+(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
+(Class)configurationClass;
+(id)compoundRequestsForOriginalRequests:(id)arg0 withPerformingContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(id)initWithDetectorType:(id)arg0 groupingConfiguration:(id)arg1 ;
-(id)resultsSortingComparator:(SEL)arg0 ;


@end


#endif