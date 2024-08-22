// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTOPTION_H
#define UIPRINTOPTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIPrinter.h"
#import "UIPrintInfo.h"
#import "UIPrintPanelViewController.h"
#import "UITableViewCell.h"

@interface UIPrintOption : NSObject

@property (nonatomic) BOOL collapsed; // ivar: _collapsed
@property (retain, nonatomic) UIPrinter *currentPrinter; // ivar: _currentPrinter
@property (retain, nonatomic) UIPrintInfo *printInfo; // ivar: _printInfo
@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController; // ivar: _printPanelViewController
@property (retain, nonatomic) NSString *summary; // ivar: _summary
@property (retain, nonatomic) UITableViewCell *tableViewCell; // ivar: _tableViewCell
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)canDismiss;
-(BOOL)shouldShow;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)printOptionDetailView;
-(id)printOptionTableViewCell;
-(void)didSelectPrintOption;
-(void)updatePrintOptionSummary;
-(void)updatePrinterInfo;


@end


#endif