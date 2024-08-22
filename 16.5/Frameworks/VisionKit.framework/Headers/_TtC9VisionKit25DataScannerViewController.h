// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9VISIONKIT25DATASCANNERVIEWCONTROLLER_H
#define _TTC9VISIONKIT25DATASCANNERVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9VisionKit25DataScannerViewController : UIViewController {
    ? shouldResumeProcessingOnEnterForeground;
    ? internalDataType;
    ? cantFindItemsTimer;
    ? pinchGestureRecognizer;
    ? tapGestureRecognizer;
    ? respondsToDidBeginPinchToZoom;
    ? respondsToDidEndPinchToZoom;
    ? textProcessor;
    ? barcodeProcessor;
    ? homographyProcessor;
    ? frameProvider;
    ? hitTestView;
    ? impl;
    ? bridge;
    ? textItems;
    ? barcodeItems;
    ? currentRecognizedItems;
    ? reticleView;
    ? highlightViewForItemUUID;
    ? guidanceView;
    ? capturePhotoCompletions;
    ? recognizedItemsContinuations;
    ? initialPinchZoom;
    ? delegate;
    ? overlayContainerView;
    ? recognizedDataTypes;
    ? qualityLevel;
    ? recognizesMultipleItems;
    ? isHighFrameRateTrackingEnabled;
    ? isPinchToZoomEnabled;
    ? isGuidanceEnabled;
    ? isHighlightingEnabled;
    ? regionOfInterest;
    ? privateDelegate;
    ? processingInterval;
    ? infrequentProcessingInterval;
    ? customWords;
    ? usesLanguageDetection;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)didEnterBackground;
-(void)loadView;
-(void)onPinch:(id)arg0 ;
-(void)onTap:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willEnterForeground;


@end


#endif