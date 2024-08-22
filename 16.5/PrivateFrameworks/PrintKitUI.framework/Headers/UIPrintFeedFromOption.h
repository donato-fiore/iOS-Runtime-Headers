// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(NSInteger)listItemSelected:(id)arg0 ;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)itemList;
-(id)printOptionTableViewCell;
-(id)selectedItem;
-(id)selectedTrayName;
-(id)summary;
-(id)summaryString;
-(void)currentPrinterChanged;
-(void)dealloc;
-(void)didSelectPrintOption;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateFromPrintInfo;


@end


#endif