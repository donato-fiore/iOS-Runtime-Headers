// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESTILLIMAGESINKPIPELINECONFIGURATION_H
#define FIGCAPTURESTILLIMAGESINKPIPELINECONFIGURATION_H

@class NSDictionary;
@protocol NSSecureCoding;


#import "FigCaptureBaseStillImageSinkPipelineConfiguration.h"

@interface FigCaptureStillImageSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration <NSSecureCoding>

 {
    int _clientPID;
    NSDictionary *_stillImageColorInfoForFramesOriginatingFromVideoStream;
    BOOL _stillImageISPChromaNoiseReductionEnabled;
    BOOL _stereoFusionSupported;
    BOOL _isIrisSupported;
    BOOL _hdrSupported;
    BOOL _gnrHDRSupported;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif