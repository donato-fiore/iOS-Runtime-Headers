// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELGENERICAVITEMTIMEDMETADATARESPONSE_H
#define MPCMODELGENERICAVITEMTIMEDMETADATARESPONSE_H

@class MPModelResponse, NSData, MPSectionedCollection;


#import "MPCModelGenericAVItemTimedMetadataStreamFields.h"

@interface MPCModelGenericAVItemTimedMetadataResponse : MPModelResponse {
    MPModelResponse *_personalizationResponse;
}


@property (copy, nonatomic) NSData *adamIDData; // ivar: _adamIDData
@property (nonatomic, getter=isFinalResponse) BOOL finalResponse; // ivar: _finalResponse
@property (nonatomic, getter=isFirstResponse) BOOL firstResponse; // ivar: _firstResponse
@property (retain, nonatomic) MPCModelGenericAVItemTimedMetadataStreamFields *streamFields; // ivar: _streamFields
@property (copy, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors; // ivar: _unpersonalizedContentDescriptors


-(id)initWithRequest:(id)arg0 personalizationResponse:(id)arg1 firstResponse:(BOOL)arg2 finalResponse:(BOOL)arg3 ;
-(void)_personalizationResponseDidInvalidateNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif