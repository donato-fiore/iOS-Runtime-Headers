// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VN6KBNCOR2MZLSV6YV1DLWB_H
#define VN6KBNCOR2MZLSV6YV1DLWB_H

@class NSArray;


#import "VNImageBasedRequest.h"
#import "VN6Ac6Cyl5O5oK19HboyMBR.h"

@interface VN6kBnCOr2mZlSV6yV1dLwB : VNImageBasedRequest

@property (readonly, nonatomic) NSUInteger imageSignatureHashType;
@property (readonly, nonatomic) NSUInteger imageSignatureprintType;
@property (copy, nonatomic) VN6Ac6Cyl5O5oK19HboyMBR *inputSignatureprint;
@property (readonly, copy) NSArray *results;


+(BOOL)warmUpSession:(id)arg0 error:(*id)arg1 ;
+(Class)configurationClass;
+(id)defaultProcessingDeviceForRevision:(NSUInteger)arg0 ;
+(struct ? *)dependentRequestCompatibility;
+(struct ? *)revisionAvailability;
-(BOOL)internalPerformRevision:(NSUInteger)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg0 ;
-(NSInteger)dependencyProcessingOrdinality;
-(id)applicableDetectorTypeForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)description;
-(id)imageSignaturnprintByRunningNeuralHashprintRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithImageSignatureprintType:(NSUInteger)arg0 imageSignatureHashType:(NSUInteger)arg1 ;
-(id)initWithImageSignatureprintType:(NSUInteger)arg0 imageSignatureHashType:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(NSUInteger)arg0 session:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg0 ;


@end


#endif