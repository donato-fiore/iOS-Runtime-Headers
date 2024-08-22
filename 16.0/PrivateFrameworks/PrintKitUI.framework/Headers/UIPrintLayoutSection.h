// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTLAYOUTSECTION_H
#define UIPRINTLAYOUTSECTION_H

@class NSString, UITableViewController;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "UIPrintOptionSection.h"
#import "UIPrintBorderOption.h"
#import "UIPrintFlipHorizontalOption.h"
#import "UIPrintLayoutDirectionOption.h"
#import "UIPrintPagesPerSheetOption.h"

@interface UIPrintLayoutSection : UIPrintOptionSection <UITableViewDelegate, UITableViewDataSource>



@property (retain, nonatomic) UIPrintBorderOption *borderPrintOption; // ivar: _borderPrintOption
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIPrintFlipHorizontalOption *flipHorizontalPrintOption; // ivar: _flipHorizontalPrintOption
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPrintLayoutDirectionOption *layoutDirectionPrintOption; // ivar: _layoutDirectionPrintOption
@property (retain, nonatomic) UITableViewController *layoutSectionController; // ivar: _layoutSectionController
@property (retain, nonatomic) UIPrintPagesPerSheetOption *pagesPerSheetPrintOption; // ivar: _pagesPerSheetPrintOption
@property (readonly) Class superclass;


-(BOOL)shouldShow;
-(BOOL)updatePrintOptionsList;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)printOptionAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)didSelectPrintOptionSection;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif