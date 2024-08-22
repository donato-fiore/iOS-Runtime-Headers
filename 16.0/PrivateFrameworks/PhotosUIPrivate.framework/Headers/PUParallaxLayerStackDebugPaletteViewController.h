// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPARALLAXLAYERSTACKDEBUGPALETTEVIEWCONTROLLER_H
#define PUPARALLAXLAYERSTACKDEBUGPALETTEVIEWCONTROLLER_H

@class UIViewController, UISegmentedControl;


#import "PUParallaxLayerStackDebugPaletteView.h"

@interface PUParallaxLayerStackDebugPaletteViewController : UIViewController

@property (retain, nonatomic) PUParallaxLayerStackDebugPaletteView *colorBGPaletteView; // ivar: _colorBGPaletteView
@property (retain, nonatomic) PUParallaxLayerStackDebugPaletteView *colorWashDuotonePaletteView; // ivar: _colorWashDuotonePaletteView
@property (retain, nonatomic) PUParallaxLayerStackDebugPaletteView *colorWashSinglePaletteView; // ivar: _colorWashSinglePaletteView
@property (retain, nonatomic) PUParallaxLayerStackDebugPaletteView *customPaletteView; // ivar: _customPaletteView
@property (retain, nonatomic) UISegmentedControl *switchControl; // ivar: _switchControl


-(id)init;
-(void)addSwitchableView:(id)arg0 ;
-(void)modeChanged:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif