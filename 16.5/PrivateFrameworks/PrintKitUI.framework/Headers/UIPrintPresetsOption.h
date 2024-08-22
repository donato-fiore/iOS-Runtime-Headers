// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTPRESETSOPTION_H
#define UIPRINTPRESETSOPTION_H

@class UILabel, NSDictionary, NSString, NSMutableArray, NSArray, NSIndexPath;
@protocol UIPrintOptionListDelegate;


#import "UIPrintOption.h"
#import "UIPrinter.h"
#import "UIPrintInfo.h"

@interface UIPrintPresetsOption : UIPrintOption <UIPrintOptionListDelegate>



@property (retain, nonatomic) UILabel *appliedPresetsSummaryLabel; // ivar: _appliedPresetsSummaryLabel
@property (retain, nonatomic) NSDictionary *colorFineStandardPreset; // ivar: _colorFineStandardPreset
@property (retain, nonatomic) NSDictionary *colorStandardPreset; // ivar: _colorStandardPreset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *grayscaleDraftStandardPreset; // ivar: _grayscaleDraftStandardPreset
@property (retain, nonatomic) NSDictionary *grayscaleStandardPreset; // ivar: _grayscaleStandardPreset
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPrinter *observedPrinter; // ivar: _observedPrinter
@property (retain, nonatomic) UIPrintInfo *origPrintInfo; // ivar: _origPrintInfo
@property (retain, nonatomic) NSMutableArray *presetNames; // ivar: _presetNames
@property (retain, nonatomic) NSArray *presets; // ivar: _presets
@property (retain, nonatomic) NSArray *printerPresets; // ivar: _printerPresets
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (retain, nonatomic) NSArray *standardPresets; // ivar: _standardPresets
@property (readonly) Class superclass;


-(BOOL)isItemSelected:(id)arg0 ;
-(BOOL)printerContainsQuality:(NSInteger)arg0 ;
-(BOOL)shouldShow;
-(NSInteger)listItemSelected:(id)arg0 ;
-(id)appliedPresetsSummary;
-(id)getPrinterPresets;
-(id)getStandardPresets;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)itemList;
-(id)printOptionTableViewCell;
-(id)selectedItem;
-(id)selectedItems;
-(id)summary;
-(id)titleForFooterInSection:(NSInteger)arg0 ;
-(id)titleForHeaderInSection:(NSInteger)arg0 ;
-(void)currentPrinterChanged;
-(void)dealloc;
-(void)didSelectPrintOption;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateFromPrintInfo;
-(void)updatePresetsList;
-(void)updatePrintInfoWithSelectedIndex:(id)arg0 ;


@end


#endif