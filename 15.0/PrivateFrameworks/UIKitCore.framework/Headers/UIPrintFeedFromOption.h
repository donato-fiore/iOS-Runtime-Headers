// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTFEEDFROMOPTION_H
#define UIPRINTFEEDFROMOPTION_H

@class NSString, NSIndexPath, NSMutableArray, NSArray;
@protocol UIPrintOptionListDelegate;


#import "UIPrintOption.h"

@interface UIPrintFeedFromOption : UIPrintOption <UIPrintOptionListDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *trayNames; // ivar: _trayNames
@property (retain, nonatomic) NSArray *trays; // ivar: _trays


-(BOOL)shouldShow;
-(id)getTrayList;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)itemList;
-(id)printOptionTableViewCell;
-(id)selectedItem;
-(id)selectedTrayName;
-(id)shortSummary;
-(id)summary;
-(void)didSelectPrintOption;
-(void)listItemSelected:(id)arg0 ;
-(void)setCurrentPrinter:(id)arg0 ;
-(void)updatePrinterInfo;


@end


#endif