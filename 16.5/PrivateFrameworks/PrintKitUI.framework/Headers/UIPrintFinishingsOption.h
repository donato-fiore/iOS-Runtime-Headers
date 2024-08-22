// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTFINISHINGSOPTION_H
#define UIPRINTFINISHINGSOPTION_H

@class NSString, UITableView, NSArray;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "UIPrintOption.h"
#import "UIPrintFinishingTemplatesOption.h"

@interface UIPrintFinishingsOption : UIPrintOption <UITableViewDataSource, UITableViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITableView *finishingOptionsTableView; // ivar: _finishingOptionsTableView
@property (retain, nonatomic) UIPrintFinishingTemplatesOption *finishingTemplatesOption; // ivar: _finishingTemplatesOption
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *printerFinishingOptions; // ivar: _printerFinishingOptions
@property (readonly) Class superclass;


-(BOOL)shouldShow;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)summary;
-(id)summaryString;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)title;
-(void)clearFinishingOptions;
-(void)currentPrinterChanged;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateFromPrintInfo;


@end


#endif