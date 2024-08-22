// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTERSETUPCONFIGUREVIEWCONTROLLER_H
#define UIPRINTERSETUPCONFIGUREVIEWCONTROLLER_H

@class UITableViewController, NSString, UIButton, PKPrinter;
@protocol UITableViewDataSource, UITextFieldDelegate;


#import "UIPrinterSetupConnectingView.h"

@interface UIPrinterSetupConfigureViewController : UITableViewController <UITableViewDataSource, UITextFieldDelegate>



@property (nonatomic) BOOL addToNetwork; // ivar: _addToNetwork
@property (retain, nonatomic) UIPrinterSetupConnectingView *connectingView; // ivar: _connectingView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *directPasscode; // ivar: _directPasscode
@property (nonatomic) BOOL directPrinting; // ivar: _directPrinting
@property (retain, nonatomic) UIButton *finishButton; // ivar: _finishButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPrinter *printer; // ivar: _printer
@property (readonly) Class superclass;


-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithPrinter:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)dealloc;
-(void)finish;
-(void)finished:(BOOL)arg0 ;
-(void)loadView;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)textDidChange:(id)arg0 ;
-(void)toggleAddToNetwork:(id)arg0 ;
-(void)toggleDirectPrinting:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif