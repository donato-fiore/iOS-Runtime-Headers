// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTFINISHINGTEMPLATESOPTION_H
#define UIPRINTFINISHINGTEMPLATESOPTION_H

@class NSString, NSArray;
@protocol UIPrintOptionListDelegate;

#import <Foundation/Foundation.h>

#import "UITableView.h"
#import "UITableViewCell.h"
#import "UIPrintPanelViewController.h"

@interface UIPrintFinishingTemplatesOption : NSObject <UIPrintOptionListDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UITableView *finishingOptionsTableView; // ivar: _finishingOptionsTableView
@property (retain, nonatomic) NSArray *finishingTemplateNames; // ivar: _finishingTemplateNames
@property (retain, nonatomic) NSArray *finishingTemplates; // ivar: _finishingTemplates
@property (retain, nonatomic) UITableViewCell *finishingTemplatesCell; // ivar: _finishingTemplatesCell
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController; // ivar: _printPanelViewController
@property (retain, nonatomic) NSString *summary; // ivar: _summary
@property (readonly) Class superclass;
@property (nonatomic) NSInteger value; // ivar: _value


-(id)initWithTemplates:(id)arg0 finishingTemplateNames:(id)arg1 printPanelViewController:(id)arg2 finishingOptionsTableView:(id)arg3 ;
-(id)itemList;
-(id)selectedItem;
-(id)title;
-(void)listItemSelected:(id)arg0 ;


@end


#endif