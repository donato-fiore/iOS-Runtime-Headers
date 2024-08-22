// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTPRESETSOPTION_H
#define UIPRINTPRESETSOPTION_H

@class NSString, NSMutableArray, NSArray, NSIndexPath;
@protocol UIPrintOptionListDelegate;


#import "UIPrintOption.h"

@interface UIPrintPresetsOption : UIPrintOption <UIPrintOptionListDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *presetNames; // ivar: _presetNames
@property (retain, nonatomic) NSArray *presets; // ivar: _presets
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;


-(BOOL)shouldShow;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)itemList;
-(id)printOptionTableViewCell;
-(id)selectedItem;
-(id)summary;
-(id)supportedPresets;
-(void)didSelectPrintOption;
-(void)listItemSelected:(id)arg0 ;
-(void)setCurrentPrinter:(id)arg0 ;
-(void)updatePrinterInfo;


@end


#endif