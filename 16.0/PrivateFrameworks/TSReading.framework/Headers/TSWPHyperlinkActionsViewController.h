// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPHYPERLINKACTIONSVIEWCONTROLLER_H
#define TSWPHYPERLINKACTIONSVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "TSWPHyperlinkSettingsViewController.h"
#import "TSWPHyperlinkField.h"

@interface TSWPHyperlinkActionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

 {
    BOOL _readOnly;
    TSWPHyperlinkSettingsViewController *_hyperlinkSettingsViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSWPHyperlinkField *hyperlink; // ivar: _hyperlink
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithHyperlink:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif