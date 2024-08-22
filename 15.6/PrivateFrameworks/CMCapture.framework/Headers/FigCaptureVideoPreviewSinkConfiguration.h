// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTUREVIDEOPREVIEWSINKCONFIGURATION_H
#define FIGCAPTUREVIDEOPREVIEWSINKCONFIGURATION_H

@class NSArray;


#import "FigCaptureSinkConfiguration.h"
#import "FigCaptureSemanticStyle.h"

@interface FigCaptureVideoPreviewSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL depthDataDeliveryEnabled; // ivar: _depthDataDeliveryEnabled
@property (nonatomic) BOOL filterRenderingEnabled; // ivar: _filterRenderingEnabled
@property (copy, nonatomic) NSArray *filters; // ivar: _filters
@property (nonatomic) float portraitLightingEffectStrength; // ivar: _portraitLightingEffectStrength
@property (nonatomic) CGFloat primaryCaptureRectAspectRatio; // ivar: _primaryCaptureRectAspectRatio
@property (nonatomic) CGPoint primaryCaptureRectCenter; // ivar: _primaryCaptureRectCenter
@property (nonatomic) BOOL primaryCaptureRectModificationEnabled; // ivar: _primaryCaptureRectModificationEnabled
@property (nonatomic) NSInteger primaryCaptureRectUniqueID; // ivar: _primaryCaptureRectUniqueID
@property (retain, nonatomic) FigCaptureSemanticStyle *semanticStyle; // ivar: _semanticStyle
@property (nonatomic) BOOL semanticStyleRenderingEnabled; // ivar: _semanticStyleRenderingEnabled
@property (nonatomic) float simulatedAperture; // ivar: _simulatedAperture


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)description;
-(id)init;
-(id)initWithXPCEncoding:(id)arg0 ;
-(int)sinkType;
-(void)dealloc;


@end


#endif