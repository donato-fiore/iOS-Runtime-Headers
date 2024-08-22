// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELRESPONSE_H
#define MUSICKIT_SOFTLINKING_MPMODELRESPONSE_H

@class MPModelResponse, MusicKit_SoftLinking_MPSectionedCollection;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPModelResponse : NSObject {
    MPModelResponse *_underlyingResponse;
}


@property (readonly, copy, nonatomic) MusicKit_SoftLinking_MPSectionedCollection *results;


-(id)initWithUnderlyingResponse:(id)arg0 ;


@end


#endif