// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTPAPERSIZEOPTION_H
#define UIPRINTPAPERSIZEOPTION_H

@class NSString, NSArray, NSIndexPath;
@protocol UIPrintOptionListDelegate, OS_dispatch_queue;


#import "UIPrintOption.h"
#import "UIPrinter.h"

@interface UIPrintPaperSizeOption : UIPrintOption <UIPrintOptionListDelegate>

 {
    NSObject<OS_dispatch_queue> *_pkPrinterQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *loadedPaperNames; // ivar: _loadedPaperNames
@property (retain, nonatomic) NSArray *loadedPaperSizes; // ivar: _loadedPaperSizes
@property (retain, nonatomic) UIPrinter *observedPrinter; // ivar: _observedPrinter
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedPaperNames; // ivar: _supportedPaperNames
@property (retain, nonatomic) NSArray *supportedPaperSizes; // ivar: _supportedPaperSizes


-(NSInteger)listItemSelected:(id)arg0 ;
-(id)_removeRollsFrom:(id)arg0 ;
-(id)defaultPaperIndex;
-(id)getPaperNames:(id)arg0 ;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)itemList;
-(id)paperList;
-(id)printOptionTableViewCell;
-(id)selectedItem;
-(id)summary;
-(void)currentPrinterChanged;
-(void)dealloc;
-(void)didSelectPrintOption;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateSelectedPaper;


@end


#endif