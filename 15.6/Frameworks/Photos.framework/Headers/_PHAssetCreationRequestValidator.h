// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PHASSETCREATIONREQUESTVALIDATOR_H
#define _PHASSETCREATIONREQUESTVALIDATOR_H

@class NSString;


#import "PHValidator.h"
#import "PHAssetCreationRequest.h"

@interface _PHAssetCreationRequestValidator : PHValidator

@property (readonly, weak, nonatomic) PHAssetCreationRequest *assetCreationRequest; // ivar: _assetCreationRequest
@property (readonly, nonatomic) ? validatedImageDisplayTime; // ivar: _validatedImageDisplayTime
@property (readonly, nonatomic) NSString *validatedPairingIdentifier; // ivar: _validatedPairingIdentifier
@property (readonly, nonatomic) ? validatedVideoDuration; // ivar: _validatedVideoDuration


-(BOOL)getLivePhotoVideoMetadataFromURL:(id)arg0 pairingIdentifier:(*id)arg1 videoDuration:(struct ? *)arg2 imageDisplayTime:(struct ? *)arg3 error:(*id)arg4 ;
-(id)initWithAssetCreationRequest:(id)arg0 ;


@end


#endif