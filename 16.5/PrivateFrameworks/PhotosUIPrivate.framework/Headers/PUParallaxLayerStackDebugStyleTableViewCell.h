// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPARALLAXLAYERSTACKDEBUGSTYLETABLEVIEWCELL_H
#define PUPARALLAXLAYERSTACKDEBUGSTYLETABLEVIEWCELL_H

@class UITableViewCell, UIColorWell, UISlider, UIView, NSString, UISegmentedControl;
@protocol PUParallaxLayerStackDebugStyleTableViewCellDelegate;



@interface PUParallaxLayerStackDebugStyleTableViewCell : UITableViewCell

@property (retain, nonatomic) UIColorWell *colorButton1; // ivar: _colorButton1
@property (retain, nonatomic) UIColorWell *colorButton2; // ivar: _colorButton2
@property (retain, nonatomic) UISlider *colorSlider; // ivar: _colorSlider
@property (retain, nonatomic) UIView *controlsView; // ivar: _controlsView
@property (weak, nonatomic) NSObject<PUParallaxLayerStackDebugStyleTableViewCellDelegate> *styleCellDelegate; // ivar: _styleCellDelegate
@property (retain, nonatomic) NSString *styleKind; // ivar: _styleKind
@property (retain, nonatomic) UISegmentedControl *tonalityControl; // ivar: _tonalityControl


-(id)colorButtonWithColor:(id)arg0 title:(id)arg1 ;
-(id)intensitySliderWithWidth:(CGFloat)arg0 ;
-(id)newTonalityControl;
-(void)applyToStyle:(id)arg0 ;
-(void)rebuildControlsViewForStyle:(id)arg0 ;
-(void)updateColor:(id)arg0 ;
-(void)updateDelegate:(id)arg0 ;
-(void)updateSlider:(id)arg0 ;


@end


#endif