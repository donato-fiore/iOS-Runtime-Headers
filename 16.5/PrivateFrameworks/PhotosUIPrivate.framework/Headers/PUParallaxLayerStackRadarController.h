// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPARALLAXLAYERSTACKRADARCONTROLLER_H
#define PUPARALLAXLAYERSTACKRADARCONTROLLER_H

@class PHAsset, NSURL, PFParallaxLayerStack, PFPosterConfiguration, PFPosterDescriptor;
@protocol PXTapToRadarDiagnosticProvider, PISegmentationItem;

#import <Foundation/Foundation.h>


@interface PUParallaxLayerStackRadarController : NSObject <PXTapToRadarDiagnosticProvider>



@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) NSURL *baseTemporaryURL; // ivar: _baseTemporaryURL
@property (retain, nonatomic) PFParallaxLayerStack *layerStack; // ivar: _layerStack
@property (readonly, nonatomic) PFPosterConfiguration *posterConfiguration; // ivar: _posterConfiguration
@property (readonly, nonatomic) PFPosterDescriptor *posterDescriptor; // ivar: _posterDescriptor
@property (retain, nonatomic) NSURL *screenshotURL; // ivar: _screenshotURL
@property (retain, nonatomic) NSObject<PISegmentationItem> *segmentationItem; // ivar: _segmentationItem


// +(id)visualDiagnosticsActionForAsset:(id)arg0 layerStack:(id)arg1 segmentationItem:(id)arg2 fromViewController:(id)arg3 actionBeingHandler:(id)arg4 actionEndHandler:(unk)arg5  ;
+(id)visualDiagnosticsConfigurationForAsset:(id)arg0 layerStack:(id)arg1 segmentationItem:(id)arg2 ;
+(void)loadLayerStackForAsset:(id)arg0 completion:(id)arg1 ;
-(id)initWithAsset:(id)arg0 layerStack:(id)arg1 segmentationItem:(id)arg2 posterDescriptor:(id)arg3 posterConfiguration:(id)arg4 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)saveDebugLayerStack:(id)arg0 toFileName:(id)arg1 item:(id)arg2 completion:(id)arg3 ;


@end


#endif