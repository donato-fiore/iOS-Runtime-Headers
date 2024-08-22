// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTERFINISHINGOPTION_H
#define UIPRINTERFINISHINGOPTION_H

@class NSString, NSArray;
@protocol UIPrintOptionListDelegate;

#import <Foundation/Foundation.h>

#import "UITableView.h"
#import "UIPrintPanelViewController.h"
#import "UIPrintOptionCell.h"

@interface UIPrinterFinishingOption : NSObject <UIPrintOptionListDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UITableView *finishingOptionsTableView; // ivar: _finishingOptionsTableView
@property (nonatomic) NSInteger finishingType; // ivar: _finishingType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *optionChoices; // ivar: _optionChoices
@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController; // ivar: _printPanelViewController
@property (retain, nonatomic) UIPrintOptionCell *printerFinishingOptionCell; // ivar: _printerFinishingOptionCell
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger value; // ivar: _value
@property (nonatomic) NSInteger viewType; // ivar: _viewType


-(id)initWithTitle:(id)arg0 finishingType:(NSInteger)arg1 viewType:(NSInteger)arg2 optionChoices:(id)arg3 printPanelViewController:(id)arg4 finishingOptionsTableView:(id)arg5 ;
-(id)itemList;
-(id)selectedItem;
-(id)summary;
-(void)listItemSelected:(id)arg0 ;
-(void)updateSwitchValue:(id)arg0 ;


@end


#endif