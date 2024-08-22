// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTOPTION_H
#define UIPRINTOPTION_H

@class NSString, UITableViewCell;

#import <Foundation/Foundation.h>

#import "UIPrintInfo.h"
#import "UIPrintPanelViewController.h"

@interface UIPrintOption : NSObject

@property (nonatomic) BOOL collapsed; // ivar: _collapsed
@property (retain, nonatomic) UIPrintInfo *printInfo; // ivar: _printInfo
@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController; // ivar: _printPanelViewController
@property (nonatomic) BOOL shouldShow; // ivar: _shouldShow
@property (retain, nonatomic) NSString *summary; // ivar: _summary
@property (retain, nonatomic) UITableViewCell *tableViewCell; // ivar: _tableViewCell
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)canDismiss;
-(BOOL)keyboardShowing;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)printOptionDetailView;
-(id)printOptionTableViewCell;
-(void)didSelectPrintOption;
-(void)dismissKeyboard;
-(void)updatePrintOptionSummary;


@end


#endif