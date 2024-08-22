// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC17MEASUREFOUNDATION11ADPROCESSOR_H
#define _TTC17MEASUREFOUNDATION11ADPROCESSOR_H

@class SwiftObject;



@interface _TtC17MeasureFoundation11ADProcessor : SwiftObject {
    ? shouldUse128BitInput;
    ? $__lazy_storage_$_adInputTextureFormat;
    ? $__lazy_storage_$_adInputPixelFormat;
    ? $__lazy_storage_$_adConfig;
    ? $__lazy_storage_$_transformer;
    ? $__lazy_storage_$_textureCache;
    ? $__lazy_storage_$_mpsYCbCrToRGB;
    ? $__lazy_storage_$_capturedTexture;
    ? $__lazy_storage_$_capturedPixelBuffer;
    ? $__lazy_storage_$_outputDepthTexture;
    ? $__lazy_storage_$_outputConfidenceTexture;
    ? $__lazy_storage_$_outputPersonTexture;
    ? lastDepthOutput;
    ? lastConfidenceOutput;
    ? lastPersonOutput;
    ? lastDepthAddress;
    ? lastConfidenceAddress;
    ? lastPersonAddress;
    ? cameraToWorld;
    ? isPreProcessed;
    ? isGuidedFilterEnabled;
    ? isNoiseReductionEnabled;
    ? $__lazy_storage_$_guidedFilter;
    ? guidedDepthTexture;
    ? sceneView;
    ? orientation;
    ? device;
    ? commandQueue;
    ? lock;
}






@end


#endif