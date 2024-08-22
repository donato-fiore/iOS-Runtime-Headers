// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTFINISHINGSOPTION_H
#define UIPRINTFINISHINGSOPTION_H

@class NSString, NSMutableArray, NSArray;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "UIPrintOption.h"
#import "UITableView.h"
#import "UIPrintFinishingTemplatesOption.h"

@interface UIPrintFinishingsOption : UIPrintOption <UITableViewDataSource, UITableViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger finishingOptionSelection; // ivar: _finishingOptionSelection
@property (retain, nonatomic) UITableView *finishingOptionsTableView; // ivar: _finishingOptionsTableView
@property (retain, nonatomic) NSMutableArray *finishingTemplateNames; // ivar: _finishingTemplateNames
@property (retain, nonatomic) NSArray *finishingTemplates; // ivar: _finishingTemplates
@property (retain, nonatomic) UIPrintFinishingTemplatesOption *finishingTemplatesOption; // ivar: _finishingTemplatesOption
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *printerFinishingOptions; // ivar: _printerFinishingOptions
@property (readonly) Class superclass;


-(BOOL)shouldShow;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)preparepPrinterFinishingOptions;
-(id)summary;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)title;
-(void)clearFinishingOptions;
-(void)setCurrentPrinter:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updatePrinterInfo;


@end


#endif