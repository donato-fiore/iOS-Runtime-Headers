// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNINFERENCENETWORKDESCRIPTOR_H
#define VNINFERENCENETWORKDESCRIPTOR_H

@class NSDictionary, NSArray, NSURL;


#import "VNProcessingDescriptor.h"
#import "VNTensorDescriptor.h"
#import "VNResourceVersion.h"
#import "VNImageTensorDescriptor.h"

@interface VNInferenceNetworkDescriptor : VNProcessingDescriptor {
    NSDictionary *_networkHeadVersions;
    NSDictionary *_inputs;
    NSDictionary *_outputs;
    NSDictionary *_inputImages;
}


@property (readonly, copy, nonatomic) NSArray *allInputImages;
@property (readonly, copy, nonatomic) NSArray *allInputs;
@property (readonly, copy, nonatomic) NSArray *allOutputs;
@property (readonly, nonatomic) VNTensorDescriptor *confidencesOutput; // ivar: _confidencesOutput
@property (readonly, nonatomic) NSURL *networkFileURL; // ivar: _networkFileURL
@property (readonly, nonatomic) VNResourceVersion *networkVersion; // ivar: _networkVersion
@property (readonly, nonatomic) VNImageTensorDescriptor *onlyInputImage;


+(BOOL)supportsSecureCoding;
+(id)_detectorTypesForIdentifier:(id)arg0 ;
+(id)availableIdentifiers;
+(id)availableVersionsForIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)descriptorForIdentifier:(id)arg0 version:(id)arg1 error:(*id)arg2 ;
+(void)_configureVNProcessingDescriptorIdentifierSceneNetV3DetectorConfigurationOptions:(id)arg0 ;
+(void)_configureVNProcessingDescriptorIdentifierSceneNetV3_ObjDetNet_SliderNetDetectorConfigurationOptions:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNetworkFileURL:(id)arg0 version:(id)arg1 networkHeadVersions:(id)arg2 inputImage:(id)arg3 outputs:(id)arg4 confidencesOutput:(id)arg5 ;
-(id)initWithNetworkFileURL:(id)arg0 version:(id)arg1 networkHeadVersions:(id)arg2 inputs:(id)arg3 outputs:(id)arg4 inputImages:(id)arg5 confidencesOutput:(id)arg6 ;
-(id)inputNamed:(id)arg0 error:(*id)arg1 ;
-(id)outputNamed:(id)arg0 error:(*id)arg1 ;
-(id)versionOfNetworkHead:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif