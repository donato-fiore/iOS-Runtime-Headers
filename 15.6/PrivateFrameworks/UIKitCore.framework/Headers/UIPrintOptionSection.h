// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTOPTIONSECTION_H
#define UIPRINTOPTIONSECTION_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "UIPrinter.h"
#import "UIPrintInfo.h"
#import "UIPrintPanelViewController.h"
#import "UITableViewCell.h"

@interface UIPrintOptionSection : NSObject

@property (retain, nonatomic) UIPrinter *currentPrinter; // ivar: _currentPrinter
@property (retain, nonatomic) UIPrintInfo *printInfo; // ivar: _printInfo
@property (retain, nonatomic) NSMutableArray *printOptions; // ivar: _printOptions
@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController; // ivar: _printPanelViewController
@property (retain, nonatomic) UITableViewCell *tableViewCell; // ivar: _tableViewCell
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)canDismiss;
-(BOOL)shouldShow;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)summaryString;
-(void)dealloc;
-(void)didSelectPrintOptionSection;
-(void)updatePrintOptionsList;
-(void)updatePrinterInfo;
-(void)updateSectionSummary:(id)arg0 ;


@end


#endif