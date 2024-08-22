// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKPAGECONTROLLERFORTESTING_H
#define AKPAGECONTROLLERFORTESTING_H

@class UIView;


#import "AKPageController.h"
#import "AKController.h"
#import "AKGeometryHelper.h"
#import "AKLayerPresentationManager.h"
#import "AKPageModelController.h"

@interface AKPageControllerForTesting : AKPageController

@property (retain) AKController *testingController; // ivar: _testingController
@property (retain) AKGeometryHelper *testingGeometryHelper; // ivar: _testingGeometryHelper
@property (retain) AKLayerPresentationManager *testingLayerPresentationManager; // ivar: _testingLayerPresentationManager
@property (retain) UIView *testingOverlayView; // ivar: _testingOverlayView
@property NSUInteger testingPageIndex; // ivar: _testingPageIndex
@property (retain) AKPageModelController *testingPageModelController; // ivar: _testingPageModelController


-(CGFloat)modelBaseScaleFactor;
-(NSUInteger)pageIndex;
-(id)controller;
-(id)geometryHelper;
-(id)init;
-(id)layerPresentationManager;
-(id)overlayView;
-(id)pageModelController;
-(struct CGPoint )convertPointFromModelToOverlay:(struct CGPoint )arg0 ;
-(struct CGPoint )convertPointFromOverlayToModel:(struct CGPoint )arg0 ;
-(struct CGRect )convertRectFromModelToOverlay:(struct CGRect )arg0 ;
-(struct CGRect )convertRectFromOverlayToModel:(struct CGRect )arg0 ;
-(struct CGRect )maxPageRect;


@end


#endif