// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFNFCTRIGGERCONFIGURATIONVIEWCONTROLLER_H
#define WFNFCTRIGGERCONFIGURATIONVIEWCONTROLLER_H

@class WFTriggerConfigurationViewController, NSString, NSArray, UITableView;
@protocol NFReaderSessionDelegate, UITableViewDataSource, UITableViewDelegate;



@interface WFNFCTriggerConfigurationViewController : WFTriggerConfigurationViewController <NFReaderSessionDelegate, UITableViewDataSource, UITableViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)infoForSection:(NSInteger)arg0 ;
-(id)initWithTrigger:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)alertTextFieldDidChange:(id)arg0 ;
-(void)loadView;
-(void)readerSession:(id)arg0 didDetectTags:(id)arg1 ;
-(void)readerSessionDidEndUnexpectedly:(id)arg0 ;
-(void)showNameStep;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateUI;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif