// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTMEDIATYPEOPTION_H
#define UIPRINTMEDIATYPEOPTION_H

@class NSString, NSMutableArray, NSArray, NSIndexPath;
@protocol UIPrintOptionListDelegate;


#import "UIPrintOption.h"

@interface UIPrintMediaTypeOption : UIPrintOption <UIPrintOptionListDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *mediaTypeNames; // ivar: _mediaTypeNames
@property (retain, nonatomic) NSArray *mediaTypes; // ivar: _mediaTypes
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;


-(BOOL)shouldShow;
-(NSInteger)listItemSelected:(id)arg0 ;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)itemList;
-(id)printOptionTableViewCell;
-(id)selectedItem;
-(id)selectedMediaTypeName;
-(id)summary;
-(id)summaryString;
-(void)currentPrinterChanged;
-(void)dealloc;
-(void)didSelectPrintOption;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateFromPrintInfo;


@end


#endif