// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPSTORELIBRARYPERSONALIZATIONRESPONSE_H
#define MUSICKIT_SOFTLINKING_MPSTORELIBRARYPERSONALIZATIONRESPONSE_H

@class MPModelResponse, MPStoreLibraryPersonalizationResponse;


#import "MusicKit_SoftLinking_MPMutableSectionedCollection.h"

@interface MusicKit_SoftLinking_MPStoreLibraryPersonalizationResponse : MPModelResponse {
    MPStoreLibraryPersonalizationResponse *_underlyingResponse;
}


@property (readonly, nonatomic) MusicKit_SoftLinking_MPMutableSectionedCollection *representedObjectResults;


-(id)initWithUnderlyingPersonalizationResponse:(id)arg0 ;


@end


#endif