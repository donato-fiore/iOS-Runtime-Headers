// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTOPTIONSECTION_H
#define UIPRINTOPTIONSECTION_H

@class NSMutableArray, UITableViewCell, NSString;

#import <Foundation/Foundation.h>

#import "UIPrintInfo.h"
#import "UIPrintPanelViewController.h"

@interface UIPrintOptionSection : NSObject

@property (retain, nonatomic) UIPrintInfo *printInfo; // ivar: _printInfo
@property (retain, nonatomic) NSMutableArray *printOptions; // ivar: _printOptions
@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController; // ivar: _printPanelViewController
@property (nonatomic) BOOL shouldShow; // ivar: _shouldShow
@property (retain, nonatomic) UITableViewCell *tableViewCell; // ivar: _tableViewCell
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)canDismiss;
-(BOOL)keyboardShowing;
-(BOOL)updatePrintOptionsList;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)summaryString;
-(void)didSelectPrintOptionSection;
-(void)dismissKeyboard;
-(void)updateSectionSummary;


@end


#endif