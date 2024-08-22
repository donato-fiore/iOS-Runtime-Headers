// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNHOMOLOGOUSOBSERVATIONCLASSCOMPOUNDREQUEST_H
#define VNHOMOLOGOUSOBSERVATIONCLASSCOMPOUNDREQUEST_H

@class NSMapTable;


#import "VNCompoundRequest.h"

@interface VNHomologousObservationClassCompoundRequest : VNCompoundRequest {
    NSMapTable *_requestsClassMapping;
}




-(id)initWithSubrequests:(id)arg0 ;
-(id)originalRequestsOfClass:(Class)arg0 ;
-(void)assignOriginalRequestsResultsFromObservations:(id)arg0 obtainedInPerformingContext:(id)arg1 ;


@end


#endif