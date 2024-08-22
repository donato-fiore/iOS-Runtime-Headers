// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUSICKIT_SOFTLINKING_MPSTORELIBRARYPERSONALIZATIONRESPONSE_H
#define MUSICKIT_SOFTLINKING_MPSTORELIBRARYPERSONALIZATIONRESPONSE_H

@class MPModelResponse, MPStoreLibraryPersonalizationResponse, MusicKit_SoftLinking_MPMutableSectionedCollection;



@interface MusicKit_SoftLinking_MPStoreLibraryPersonalizationResponse : MPModelResponse {
    MPStoreLibraryPersonalizationResponse *_underlyingResponse;
}


@property (readonly, nonatomic) MusicKit_SoftLinking_MPMutableSectionedCollection *representedObjectResults;


-(id)initWithUnderlyingPersonalizationResponse:(id)arg0 ;


@end


#endif