// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNIMAGEREGISTRATIONREQUEST_H
#define VNIMAGEREGISTRATIONREQUEST_H



#import "VNTargetedImageRequest.h"
#import "VNImageBuffer.h"
#import "VNImageRegistrationSignature.h"

@interface VNImageRegistrationRequest : VNTargetedImageRequest {
    VNImageBuffer *_cachedFloatingImageBuffer;
    VNImageRegistrationSignature *_cachedFloatingImageSignature;
}




-(BOOL)allowsCachingOfResults;
-(BOOL)getReferenceImageBuffer:(*id)arg0 registrationSignature:(*id)arg1 forRequestPerformingContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(id)cachedFloatingImageBufferReturningError:(*id)arg0 ;
-(id)cachedFloatingImageRegistrationSignatureReturningError:(*id)arg0 ;


@end


#endif