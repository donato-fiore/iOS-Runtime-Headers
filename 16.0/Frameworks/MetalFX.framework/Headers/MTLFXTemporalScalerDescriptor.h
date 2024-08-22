// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLFXTEMPORALSCALERDESCRIPTOR_H
#define MTLFXTEMPORALSCALERDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface MTLFXTemporalScalerDescriptor : NSObject

@property (nonatomic, getter=isAutoExposureEnabled) BOOL autoExposureEnabled; // ivar: autoExposureEnabled
@property (nonatomic) NSUInteger colorTextureFormat; // ivar: colorTextureFormat
@property (nonatomic) NSUInteger depthTextureFormat; // ivar: depthTextureFormat
@property (nonatomic) float inputContentMaxScale; // ivar: inputContentMaxScale
@property (nonatomic) float inputContentMinScale; // ivar: inputContentMinScale
@property (nonatomic, getter=isInputContentPropertiesEnabled) BOOL inputContentPropertiesEnabled; // ivar: inputContentPropertiesEnabled
@property (nonatomic) NSUInteger inputHeight; // ivar: inputHeight
@property (nonatomic) NSUInteger inputWidth; // ivar: inputWidth
@property (nonatomic) NSUInteger motionTextureFormat; // ivar: motionTextureFormat
@property (nonatomic) NSUInteger outputHeight; // ivar: outputHeight
@property (nonatomic) NSUInteger outputTextureFormat; // ivar: _outputTextureFormat
@property (nonatomic) NSUInteger outputWidth; // ivar: outputWidth
@property NSUInteger version; // ivar: version


+(BOOL)supportsDevice:(id)arg0 ;
-(BOOL)enableInputContentProperties;
-(id)newTemporalScalerWithDevice:(id)arg0 ;
-(void)setEnableInputContentProperties:(BOOL)arg0 ;


@end


#endif