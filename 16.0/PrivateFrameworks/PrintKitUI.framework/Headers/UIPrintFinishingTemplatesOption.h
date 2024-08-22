// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTFINISHINGTEMPLATESOPTION_H
#define UIPRINTFINISHINGTEMPLATESOPTION_H

@class NSString, UITableView, NSMutableArray, UITableViewCell;
@protocol UIPrintOptionListDelegate;

#import <Foundation/Foundation.h>

#import "UIPrintInfo.h"
#import "UIPrintPanelViewController.h"

@interface UIPrintFinishingTemplatesOption : NSObject <UIPrintOptionListDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UITableView *finishingOptionsTableView; // ivar: _finishingOptionsTableView
@property (retain, nonatomic) NSMutableArray *finishingTemplateNames; // ivar: _finishingTemplateNames
@property (retain, nonatomic) UITableViewCell *finishingTemplatesCell; // ivar: _finishingTemplatesCell
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPrintInfo *printInfo; // ivar: _printInfo
@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController; // ivar: _printPanelViewController
@property (nonatomic) NSInteger selectedTemplate; // ivar: _selectedTemplate
@property (retain, nonatomic) NSString *summary; // ivar: _summary
@property (readonly) Class superclass;


-(BOOL)shouldShow;
-(NSInteger)listItemSelected:(id)arg0 ;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 finishingOptionsTableView:(id)arg2 ;
-(id)itemList;
-(id)selectedItem;
-(id)title;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateFromPrintInfo;


@end


#endif