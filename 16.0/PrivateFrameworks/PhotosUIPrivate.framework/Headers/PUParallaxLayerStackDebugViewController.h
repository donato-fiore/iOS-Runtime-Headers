// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPARALLAXLAYERSTACKDEBUGVIEWCONTROLLER_H
#define PUPARALLAXLAYERSTACKDEBUGVIEWCONTROLLER_H

@class UIViewController, PHAsset, UIStackView, UIButton, NSString;
@protocol PXChangeObserver;


#import "PUWallpaperPosterDateView.h"
#import "PUProgressIndicatorView.h"
#import "PUParallaxLayerStackView.h"
#import "PUParallaxLayerStackViewModel.h"
#import "PUParallaxLayerStackViewModelUpdater.h"

@interface PUParallaxLayerStackDebugViewController : UIViewController <PXChangeObserver>



@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (retain, nonatomic) UIStackView *buttonStackView; // ivar: _buttonStackView
@property (retain, nonatomic) UIButton *colorPaletteButton; // ivar: _colorPaletteButton
@property (retain, nonatomic) PUWallpaperPosterDateView *dateTimeView; // ivar: _dateTimeView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PUProgressIndicatorView *downloadProgressIndicator; // ivar: _downloadProgressIndicator
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect initialVisibleRect; // ivar: _initialVisibleRect
@property (retain, nonatomic) UIButton *layerListButton; // ivar: _layerListButton
@property (retain, nonatomic) PUParallaxLayerStackView *layerStackView; // ivar: _layerStackView
@property (retain, nonatomic) UIButton *looksButton; // ivar: _looksButton
@property (retain, nonatomic) UIButton *parallaxEnabledButton; // ivar: _parallaxEnabledButton
@property (retain, nonatomic) PUProgressIndicatorView *progressIndicator; // ivar: _progressIndicator
@property (retain, nonatomic) UIButton *radarButton; // ivar: _radarButton
@property (retain, nonatomic) UIButton *shareButton; // ivar: _shareButton
@property (readonly, nonatomic) NSUInteger signpost; // ivar: _signpost
@property (readonly) Class superclass;
@property (retain, nonatomic) PUParallaxLayerStackViewModel *viewModel; // ivar: _viewModel
@property (retain, nonatomic) PUParallaxLayerStackViewModelUpdater *viewModelUpdater; // ivar: _viewModelUpdater


-(id)_newButtonWithSystemImageName:(id)arg0 ;
-(id)init;
-(void)_dismissSheetController:(id)arg0 ;
-(void)_presentSheetController:(id)arg0 ;
-(void)_updateDateTimeView;
-(void)hideDowloadProgressIndicator;
-(void)hideProgressIndicator;
-(void)loadLayerStack:(id)arg0 ;
-(void)loadLayerStack:(id)arg0 segmentationItem:(id)arg1 ;
-(void)loadPHAsset:(id)arg0 ;
-(void)loadPartialSegmentationItem:(id)arg0 loadingState:(NSUInteger)arg1 ;
-(void)loadSegmentationItem:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)panGesture:(id)arg0 ;
-(void)pinchGesture:(id)arg0 ;
-(void)renderAfterStyleChange;
-(void)renderAfterVisibleFrameChange;
-(void)shareLayerStack:(id)arg0 ;
-(void)showColorPalettes:(id)arg0 ;
-(void)showDownloadProgressIndicator;
-(void)showLayerList:(id)arg0 ;
-(void)showLooks:(id)arg0 ;
-(void)showProgressIndicator:(id)arg0 ;
-(void)tapToRadar:(id)arg0 ;
-(void)toggleParallaxEnabled:(id)arg0 ;
-(void)updateDownloadProgressIndicator:(CGFloat)arg0 ;
-(void)updateProgressIndicator:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif