// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCREATENEURALHASHPRINTREQUEST_H
#define VNCREATENEURALHASHPRINTREQUEST_H

@class NSArray;


#import "VNImageBasedRequest.h"

@interface VNCreateNeuralHashprintRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;


+(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
+(Class)configurationClass;
+(id)defaultProcessingDeviceForRevision:(NSUInteger)arg0 ;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;


@end


#endif