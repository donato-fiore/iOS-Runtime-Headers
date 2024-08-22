// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNERROR_H
#define VNERROR_H


#import <Foundation/Foundation.h>


@interface VNError : NSObject



+(id)errorForCVReturnCode:(int)arg0 localizedDescription:(id)arg1 ;
+(id)errorForCancellationOfRequest:(id)arg0 ;
+(id)errorForDataUnavailableWithLocalizedDescription:(id)arg0 ;
+(id)errorForDataUnavailableWithLocalizedDescription:(id)arg0 underlyingError:(id)arg1 ;
+(id)errorForEspressoErrorInfo:(struct ? )arg0 localizedDescription:(id)arg1 ;
+(id)errorForEspressoReturnStatus:(int)arg0 localizedDescription:(id)arg1 ;
+(id)errorForExecutionTimeoutWithLocalizedDescription:(id)arg0 ;
+(id)errorForExecutionTimeoutWithLocalizedDescription:(id)arg0 underlyingError:(id)arg1 ;
+(id)errorForFailedEspressoPlan:(*void)arg0 localizedDescription:(id)arg1 ;
+(id)errorForGPURequiredByRequest:(id)arg0 ;
+(id)errorForInternalErrorWithLocalizedDescription:(id)arg0 ;
+(id)errorForInternalErrorWithLocalizedDescription:(id)arg0 underlyingError:(id)arg1 ;
+(id)errorForInvalidArgument:(id)arg0 named:(id)arg1 ;
+(id)errorForInvalidArgumentWithLocalizedDescription:(id)arg0 ;
+(id)errorForInvalidFormatErrorWithLocalizedDescription:(id)arg0 ;
+(id)errorForInvalidImageFailure;
+(id)errorForInvalidImageFailureWithLocalizedDescription:(id)arg0 ;
+(id)errorForInvalidModelWithLocalizedDescription:(id)arg0 ;
+(id)errorForInvalidModelWithLocalizedDescription:(id)arg0 underlyingError:(id)arg1 ;
+(id)errorForInvalidOperationForRequestClass:(Class)arg0 revision:(NSUInteger)arg1 ;
+(id)errorForInvalidOperationForRequestSpecifier:(id)arg0 ;
+(id)errorForInvalidOperationWithLocalizedDescription:(id)arg0 ;
+(id)errorForInvalidOption:(id)arg0 named:(id)arg1 ;
+(id)errorForInvalidOption:(id)arg0 named:(id)arg1 localizedDescription:(id)arg2 ;
+(id)errorForInvalidOptionWithLocalizedDescription:(id)arg0 ;
+(id)errorForMemoryAllocationFailure;
+(id)errorForMemoryAllocationFailureWithLocalizedDescription:(id)arg0 ;
+(id)errorForMissingOptionNamed:(id)arg0 ;
+(id)errorForOSStatus:(int)arg0 localizedDescription:(id)arg1 ;
+(id)errorForOperationFailedErrorWithLocalizedDescription:(id)arg0 ;
+(id)errorForOutOfBoundsErrorWithLocalizedDescription:(id)arg0 ;
+(id)errorForUnavailableSession;
+(id)errorForUnimplementedFunctionWithLocalizedDescription:(id)arg0 ;
+(id)errorForUnimplementedMethod:(SEL)arg0 ofObject:(id)arg1 ;
+(id)errorForUnknownErrorWithLocalizedDescription:(id)arg0 ;
+(id)errorForUnsupportedConfigurationOfRequest:(id)arg0 ;
+(id)errorForUnsupportedProcessingDevice:(id)arg0 ;
+(id)errorForUnsupportedRequestClassName:(id)arg0 ;
+(id)errorForUnsupportedRequestSpecifier:(id)arg0 ;
+(id)errorForUnsupportedRevision:(NSUInteger)arg0 ofRequest:(id)arg1 ;
+(id)errorForUnsupportedRevision:(NSUInteger)arg0 ofRequestClass:(Class)arg1 ;
+(id)errorForUnsupportedSerializingHeaderVersion:(unsigned int)arg0 ;
+(id)errorForVImageError:(NSInteger)arg0 localizedDescription:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 message:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 message:(id)arg1 underlyingError:(id)arg2 ;
+(void)VNAssert:(BOOL)arg0 log:(id)arg1 ;
+(void)logInternalError:(id)arg0 ;


@end


#endif