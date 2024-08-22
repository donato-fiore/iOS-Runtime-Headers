// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNUNIQUEOBSERVATIONCLASSCOMPOUNDREQUEST_H
#define VNUNIQUEOBSERVATIONCLASSCOMPOUNDREQUEST_H

@class NSMapTable;


#import "VNCompoundRequest.h"

@interface VNUniqueObservationClassCompoundRequest : VNCompoundRequest {
    NSMapTable *_requestToObservationClassMap;
}




-(id)initWithOriginalRequests:(id)arg0 requestToObservationClassMap:(id)arg1 ;
-(id)initWithSubrequests:(id)arg0 uniqueObservationClasses:(id)arg1 ;
-(void)assignOriginalRequestsResultsFromObservations:(id)arg0 obtainedInPerformingContext:(id)arg1 ;


@end


#endif