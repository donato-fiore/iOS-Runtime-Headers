// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELRADIOPERSONALIZATIONRESPONSE_H
#define MPCMODELRADIOPERSONALIZATIONRESPONSE_H

@class MPModelResponse, MPStoreLibraryPersonalizationResponse, MPSectionedCollection;



@interface MPCModelRadioPersonalizationResponse : MPModelResponse {
    MPStoreLibraryPersonalizationResponse *_personalizationResponse;
}


@property (copy, nonatomic) MPSectionedCollection *radioStationTracks; // ivar: _radioStationTracks
@property (readonly, copy, nonatomic) MPSectionedCollection *results;


-(id)initWithRequest:(id)arg0 personalizationResponse:(id)arg1 ;
-(void)dealloc;


@end


#endif