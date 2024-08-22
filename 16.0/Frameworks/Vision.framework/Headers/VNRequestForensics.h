// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNREQUESTFORENSICS_H
#define VNREQUESTFORENSICS_H

@class NSArray, NSMutableArray, NSMapTable;

#import <Foundation/Foundation.h>


@interface VNRequestForensics : NSObject {
    NSArray *_originalRequests;
    NSArray *_orderedRequests;
    NSMutableArray *_implicitRequests;
    NSMutableArray *_performedRequests;
    NSMutableArray *_cachedRequestResults;
    NSMutableArray *_checkedCachedResultsOnBehalfOfRequest;
    NSMutableArray *_locatedCachedResultsOnBehalfOfRequest;
    NSMutableArray *_ledger;
    NSMapTable *_requestToHumanReadableLabelMap;
}


@property (copy, nonatomic) NSArray *orderedRequests;
@property (readonly, copy, nonatomic) NSArray *originalRequests;
@property (readonly, copy, nonatomic) NSArray *performedRequests;


-(BOOL)resultsObtainedFromObservationsCacheForRequest:(id)arg0 ;
-(id)_childRequestsImplicitlyPerformedOnBehalfOfParentRequest:(id)arg0 ;
-(id)_humanReadableLabelForRequest:(id)arg0 ;
-(id)description;
-(id)initWithOriginalRequests:(id)arg0 ;
-(id)keyUsedToCacheResultsOfRequest:(id)arg0 ;
-(id)requestThatProvidedObservationsForRequest:(id)arg0 ;
-(id)requestsImplicitlyPerformedOnBehalfOfRequest:(id)arg0 ;
-(id)requestsThatLookedUpCachedResultsKey:(id)arg0 ;
-(void)cachedObservationsWithKey:(id)arg0 wereCheckedOnBehalfOfRequest:(id)arg1 ;
-(void)cachedObservationsWithKey:(id)arg0 wereLocatedOnBehalfOfRequest:(id)arg1 ;
-(void)performedRequest:(id)arg0 withError:(id)arg1 ;
-(void)performingOrderedDependentRequests:(id)arg0 onBehalfOfRequest:(id)arg1 ;
-(void)performingRequest:(id)arg0 ;
-(void)request:(id)arg0 cachedResultsWithObservationsCacheKey:(id)arg1 ;


@end


#endif