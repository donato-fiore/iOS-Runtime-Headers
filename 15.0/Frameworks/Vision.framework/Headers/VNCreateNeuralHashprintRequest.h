// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNCREATENEURALHASHPRINTREQUEST_H
#define VNCREATENEURALHASHPRINTREQUEST_H

@class NSString, NSArray;
@protocol VNImageIdealImageSizeProviding;


#import "VNImageBasedRequest.h"

@interface VNCreateNeuralHashprintRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;


+(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
+(Class)configurationClass;
+(id)defaultProcessingDeviceForRevision:(NSUInteger)arg0 ;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
-(id)_detectorAndOptions:(*id)arg0 loadedInSession:(id)arg1 error:(*id)arg2 ;


@end


#endif