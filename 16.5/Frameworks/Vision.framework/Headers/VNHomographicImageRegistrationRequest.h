// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNHOMOGRAPHICIMAGEREGISTRATIONREQUEST_H
#define VNHOMOGRAPHICIMAGEREGISTRATIONREQUEST_H

@class NSArray;


#import "VNImageRegistrationRequest.h"

@interface VNHomographicImageRegistrationRequest : VNImageRegistrationRequest

@property (readonly, copy) NSArray *results;


-(BOOL)allowsCachingOfResults;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;


@end


#endif