// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTEMOREOPTIONSVIEWCONTROLLER_H
#define PKPALETTEMOREOPTIONSVIEWCONTROLLER_H

@class UIViewController, UITraitCollection, UIStackView, NSArray;
@protocol PKPaletteMoreOptionsViewControllerDelegate;


#import "PKPaletteOptionSwitchCell.h"
#import "PKPaletteOptionButtonCell.h"

@interface PKPaletteMoreOptionsViewController : UIViewController

@property (nonatomic, getter=isAutoHideOn) BOOL autoHideOn; // ivar: _autoHideOn
@property (retain, nonatomic) PKPaletteOptionSwitchCell *autoMinimizeCell; // ivar: _autoMinimizeCell
@property (weak, nonatomic) NSObject<PKPaletteMoreOptionsViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UITraitCollection *externalTraitCollection; // ivar: _externalTraitCollection
@property (retain, nonatomic) PKPaletteOptionSwitchCell *fingerDrawsCell; // ivar: _fingerDrawsCell
@property (nonatomic) BOOL isFingerDrawsOn; // ivar: _isFingerDrawsOn
@property (retain, nonatomic) PKPaletteOptionButtonCell *openPencilSettingsCell; // ivar: _openPencilSettingsCell
@property (retain, nonatomic) PKPaletteOptionSwitchCell *shapesCell; // ivar: _shapesCell
@property (nonatomic) BOOL shouldShowAutoMinimizeOption; // ivar: _shouldShowAutoMinimizeOption
@property (nonatomic) BOOL shouldShowFingerDrawsOption; // ivar: _shouldShowFingerDrawsOption
@property (nonatomic) BOOL shouldShowOpenPencilSettingsOption; // ivar: _shouldShowOpenPencilSettingsOption
@property (nonatomic) BOOL shouldShowTapToRadarOption; // ivar: _shouldShowTapToRadarOption
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) NSArray *stackViewPositioningConstraints; // ivar: _stackViewPositioningConstraints
@property (retain, nonatomic) PKPaletteOptionButtonCell *tapToRadarCell; // ivar: _tapToRadarCell


-(BOOL)_canShowWhileLocked;
-(BOOL)_isCellInstalled:(id)arg0 ;
-(BOOL)_shouldInstallOpenPencilSettingsCell;
-(BOOL)_shouldInstallTapToRadarCell;
-(BOOL)_shouldRemoveOpenPencilSettingsCell;
-(BOOL)_shouldRemoveTapToRadarCell;
-(CGFloat)_contentSizeMinWidth;
-(id)_makeAutoMinimizeCell;
-(id)_makeOpenPencilSettingsCell;
-(id)_makeTapToRadarCell;
-(void)_autoMinimizeCellDidChangeValue:(id)arg0 ;
-(void)_fingerDrawsCellDidChangeValue:(id)arg0 ;
-(void)_handleOpenPencilSettingsCellTapped;
-(void)_handleTapToRadarCellTapped;
-(void)_installCell:(id)arg0 ;
-(void)_reloadItems;
-(void)_removeCell:(id)arg0 ;
-(void)_updateAutoMinimizeCell;
-(void)_updateContentSize;
-(void)_updateFingerDrawsCell;
-(void)updateUIForTraitCollection:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif