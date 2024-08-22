// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELSTOREPLAYBACKITEMSRESPONSE_H
#define MPCMODELSTOREPLAYBACKITEMSRESPONSE_H

@class MPModelResponse, MPStoreLibraryPersonalizationResponse, NSString, NSDate, NSDictionary, ICURLAggregatedPerformanceMetrics;
@protocol MPModelStoreEquivalencyMapping, MPCModelPlaybackResponse, OS_dispatch_source;


#import "MPCModelStorePlaybackItemsRequestAccumulation.h"

@interface MPCModelStorePlaybackItemsResponse : MPModelResponse <MPModelStoreEquivalencyMapping, MPCModelPlaybackResponse>

 {
    NSObject<OS_dispatch_source> *_invalidationTimer;
}


@property (readonly, nonatomic) MPStoreLibraryPersonalizationResponse *_personalizationResponse; // ivar: _personalizationResponse
@property (readonly, nonatomic) MPCModelStorePlaybackItemsRequestAccumulation *accumulation; // ivar: _accumulation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFinalResponse) BOOL finalResponse; // ivar: _finalResponse
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidForPersonalization) BOOL invalidForPersonalization; // ivar: _invalidForPersonalization
@property (copy, nonatomic) NSDate *invalidationDate; // ivar: _invalidationDate
@property (copy, nonatomic) NSDictionary *localStoreAdamIDToEquivalencySourceStoreAdamIDMap; // ivar: _localStoreAdamIDToEquivalencySourceStoreAdamIDMap
@property (retain, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics; // ivar: _performanceMetrics
@property (readonly) Class superclass;


-(id)equivalencySourceStoreAdamIDForLocalStoreAdamID:(NSInteger)arg0 ;
-(id)initWithRequest:(id)arg0 accumulation:(id)arg1 performanceMetrics:(id)arg2 ;
-(id)initWithRequest:(id)arg0 personalizationResponse:(id)arg1 results:(id)arg2 performanceMetrics:(id)arg3 ;
-(void)_activeUserDidChangeNotification:(id)arg0 ;
-(void)_allowsExplicitContentDidChangeNotification:(id)arg0 ;
-(void)_invalidate;
-(void)_mediaLibraryDidChangeNotification:(id)arg0 ;
-(void)_personalizationResponseDidInvalidateNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif