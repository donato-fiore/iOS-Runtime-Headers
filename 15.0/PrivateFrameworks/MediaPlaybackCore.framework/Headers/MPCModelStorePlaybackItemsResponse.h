// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCMODELSTOREPLAYBACKITEMSRESPONSE_H
#define MPCMODELSTOREPLAYBACKITEMSRESPONSE_H

@class MPModelResponse, MPStoreLibraryPersonalizationResponse, NSString, NSDate, NSDictionary;
@protocol MPModelStoreEquivalencyMapping, MPModelResponseDetailedKeepLocalStatusRequesting, MPCModelPlaybackResponse, OS_dispatch_source;



@interface MPCModelStorePlaybackItemsResponse : MPModelResponse <MPModelStoreEquivalencyMapping, MPModelResponseDetailedKeepLocalStatusRequesting, MPCModelPlaybackResponse>

 {
    NSObject<OS_dispatch_source> *_invalidationTimer;
}


@property (readonly, nonatomic) MPStoreLibraryPersonalizationResponse *_personalizationResponse; // ivar: _personalizationResponse
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFinalResponse) BOOL finalResponse; // ivar: _finalResponse
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidForPersonalization) BOOL invalidForPersonalization; // ivar: _invalidForPersonalization
@property (copy, nonatomic) NSDate *invalidationDate; // ivar: _invalidationDate
@property (copy, nonatomic) NSDictionary *localStoreAdamIDToEquivalencySourceStoreAdamIDMap; // ivar: _localStoreAdamIDToEquivalencySourceStoreAdamIDMap
@property (readonly) Class superclass;


-(id)equivalencySourceStoreAdamIDForLocalStoreAdamID:(NSInteger)arg0 ;
-(id)initWithRequest:(id)arg0 personalizationResponse:(id)arg1 ;
-(id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(NSInteger)arg0 responseHandler:(id)arg1 ;
-(void)_activeUserDidChangeNotification:(id)arg0 ;
-(void)_allowsExplicitContentDidChangeNotification:(id)arg0 ;
-(void)_invalidate;
-(void)_personalizationResponseDidInvalidateNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif