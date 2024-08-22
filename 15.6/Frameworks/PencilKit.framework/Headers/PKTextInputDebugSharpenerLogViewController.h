// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTDEBUGSHARPENERLOGVIEWCONTROLLER_H
#define PKTEXTINPUTDEBUGSHARPENERLOGVIEWCONTROLLER_H

@class UIViewController, UITableView, NSMutableDictionary, UILabel, NSString, NSURL;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "PKTextInputDebugLogEntryRerun.h"
#import "PKTextInputDebugSharpenerLog.h"

@interface PKTextInputDebugSharpenerLogViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) PKTextInputDebugLogEntryRerun *_currentEntryRerun; // ivar: __currentEntryRerun
@property (retain, nonatomic) UITableView *_mainTableView; // ivar: __mainTableView
@property (readonly, nonatomic) NSMutableDictionary *_rerunResultsBySection; // ivar: __rerunResultsBySection
@property (retain, nonatomic) UILabel *_tableHeaderLabel; // ivar: __tableHeaderLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKTextInputDebugSharpenerLog *sharpenerLog; // ivar: _sharpenerLog
@property (readonly, nonatomic) NSURL *sharpenerLogURL; // ivar: _sharpenerLogURL
@property (readonly) Class superclass;


+(BOOL)canLoadFromFileAtURL:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_tableHeaderText;
-(id)initWithSharpenerLog:(id)arg0 ;
-(id)initWithSharpenerLogURL:(id)arg0 error:(*id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_configureCell:(id)arg0 asDrawingDisplayForEntry:(id)arg1 ;
-(void)_configureCell:(id)arg0 withTitle:(id)arg1 details:(id)arg2 ;
-(void)_handleActionButton:(id)arg0 ;
-(void)_handleDoneButton:(id)arg0 ;
-(void)_handleRerunButton:(id)arg0 ;
-(void)_rerunRecognitionForEntryAtIndex:(NSInteger)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif