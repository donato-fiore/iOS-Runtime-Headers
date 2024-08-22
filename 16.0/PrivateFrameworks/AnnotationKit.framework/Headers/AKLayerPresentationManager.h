// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKLAYERPRESENTATIONMANAGER_H
#define AKLAYERPRESENTATIONMANAGER_H

@class CAShapeLayer, NSMapTable, CALayer;

#import <Foundation/Foundation.h>

#import "AKPageController.h"
#import "AKPageModelController.h"

@interface AKLayerPresentationManager : NSObject

@property (nonatomic) BOOL adornmentsHidden; // ivar: _adornmentsHidden
@property (nonatomic) CGFloat alignmentGuidePositionX; // ivar: _alignmentGuidePositionX
@property (nonatomic) CGFloat alignmentGuidePositionY; // ivar: _alignmentGuidePositionY
@property (retain) CAShapeLayer *alignmentGuideXLayer; // ivar: _alignmentGuideXLayer
@property (retain) CAShapeLayer *alignmentGuideYLayer; // ivar: _alignmentGuideYLayer
@property (retain) NSMapTable *annotationsToAdornmentLayers; // ivar: _annotationsToAdornmentLayers
@property (retain) NSMapTable *annotationsToAnnotationLayers; // ivar: _annotationsToAnnotationLayers
@property (retain) CALayer *cropAdornmentLayer; // ivar: _cropAdornmentLayer
@property (retain) CALayer *cropAnnotationLayer; // ivar: _cropAnnotationLayer
@property CGFloat currentScaleFactor; // ivar: _currentScaleFactor
@property BOOL isObservingModel; // ivar: _isObservingModel
@property (weak) AKPageController *pageController; // ivar: _pageController
@property (retain) AKPageModelController *pageModelController; // ivar: _pageModelController
@property (retain) CALayer *rootLayer; // ivar: _rootLayer
@property (nonatomic) BOOL shouldPixelate; // ivar: _shouldPixelate


-(CGFloat)_hiDPIScaleFactor;
-(id)initWithPageController:(id)arg0 ;
-(void)_addAdornmentLayerForAnnotation:(id)arg0 ;
-(void)_addLayerForAnnotation:(id)arg0 ;
-(void)_applyUpdatesWithScale:(CGFloat)arg0 toLayers:(id)arg1 isLiveUpdate:(BOOL)arg2 forceUpdate:(BOOL)arg3 ;
-(void)_removeAdornmentLayerForAnnotation:(id)arg0 ;
-(void)_removeLayerForAnnotation:(id)arg0 ;
-(void)_setNeedsDisplayOnNewLayer:(id)arg0 ;
-(void)_startObservingModel;
-(void)_stopObservingModel;
-(void)_updateLoupeAnnotationsContributedToByAnnotation:(id)arg0 ;
-(void)_updateLoupeAnnotationsIntersectingRemovedAnnotation:(id)arg0 ;
-(void)dealloc;
-(void)forceUpdateAnnotationLayer:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setup;
-(void)teardown;
-(void)updateScaleFactor:(CGFloat)arg0 isLiveUpdate:(BOOL)arg1 forceUpdate:(BOOL)arg2 ;


@end


#endif