// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTRENDERPIPELINESTATE_H
#define PTRENDERPIPELINESTATE_H

@class NSString;
@protocol PTRenderState, RenderingIntegration;

#import <Foundation/Foundation.h>

#import "PTRenderPipelineDescriptor.h"

@interface PTRenderPipelineState : NSObject <PTRenderState>

 {
    PTRenderPipelineDescriptor *_desc;
    id<RenderingIntegration> *_renderIntegration;
    CGSize _colorOutputSizeCropped;
    int _quality;
    NSUInteger _renderingVersion;
    ? visCropFactor;
}


@property (nonatomic) int conversionGain; // ivar: conversionGain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description; // ivar: description
@property (nonatomic) float focalLenIn35mmFilm; // ivar: focalLenIn35mmFilm
@property (readonly) NSUInteger hash;
@property (nonatomic) int hwModelID; // ivar: hwModelID
@property (nonatomic) float networkBias; // ivar: networkBias
@property (nonatomic) float noiseScaleFactor; // ivar: noiseScaleFactor
@property (readonly) int quality; // ivar: quality
@property (nonatomic) int rawSensorHeight; // ivar: rawSensorHeight
@property (nonatomic) int rawSensorWidth; // ivar: rawSensorWidth
@property (nonatomic) int readNoise_1x; // ivar: readNoise_1x
@property (nonatomic) int readNoise_8x; // ivar: readNoise_8x
@property (nonatomic) NSUInteger renderingVersion;
@property (nonatomic) int sensorID; // ivar: sensorID
@property (nonatomic) int sourceColorBitDepth; // ivar: sourceColorBitDepth
@property (readonly) Class superclass;
@property (nonatomic) CGRect totalSensorCrop; // ivar: totalSensorCrop
@property ? visCropFactor;


+(Class)classForVersion:(NSUInteger)arg0 ;
-(BOOL)prepareForRendering:(BOOL)arg0 ;
-(id)initWithPipelineDescriptor:(id)arg0 quality:(int)arg1 ;
-(int)encodeRenderTo:(id)arg0 withRenderRequest:(id)arg1 ;
-(void)adjustScissorRect:(id)arg0 ;


@end


#endif