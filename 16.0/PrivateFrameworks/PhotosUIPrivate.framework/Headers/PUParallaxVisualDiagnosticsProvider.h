// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPARALLAXVISUALDIAGNOSTICSPROVIDER_H
#define PUPARALLAXVISUALDIAGNOSTICSPROVIDER_H

@class PHAsset, PFParallaxLayerStack;
@protocol PXVisualDiagnosticsProvider, PISegmentationItem;

#import <Foundation/Foundation.h>


@interface PUParallaxVisualDiagnosticsProvider : NSObject <PXVisualDiagnosticsProvider>



@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (retain, nonatomic) PFParallaxLayerStack *layerStack; // ivar: _layerStack
@property (retain, nonatomic) NSObject<PISegmentationItem> *segmentationItem; // ivar: _segmentationItem


-(void)_addCoverPage:(id)arg0 ;
-(void)_addImagingGatingScores:(id)arg0 ;
-(void)_addLayerStack:(id)arg0 ;
-(void)_addLayerStackProperties:(id)arg0 ;
-(void)_addLayersTable:(id)arg0 ;
-(void)_drawLayer:(id)arg0 inRect:(struct CGRect )arg1 context:(id)arg2 ;
-(void)addVisualDiagnosticsToContext:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif