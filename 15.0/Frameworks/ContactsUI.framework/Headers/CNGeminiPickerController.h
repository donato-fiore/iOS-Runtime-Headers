// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNGEMINIPICKERCONTROLLER_H
#define CNGEMINIPICKERCONTROLLER_H

@class UINavigationController, NSString, NSMutableArray, CNGeminiChannel, NSIndexPath, UITableViewController;
@protocol UITableViewDataSource, UITableViewDelegate, CNPickerControllerDelegate><UINavigationControllerDelegate;



@interface CNGeminiPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNPickerControllerDelegate><UINavigationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *geminiChannels; // ivar: _geminiChannels
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNGeminiChannel *preferredGeminiChannel; // ivar: _preferredGeminiChannel
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableViewController *tableViewController; // ivar: _tableViewController


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)geminiChannelForIndexPath:(id)arg0 ;
-(id)indexPathForGeminiChannel:(id)arg0 ;
-(id)initWithGeminiResult:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)cancelPicker:(id)arg0 ;
-(void)didPickItem;
-(void)donePicker:(id)arg0 ;
-(void)prepareCell:(id)arg0 atIndexPath:(id)arg1 ;
-(void)setGeminiResult:(id)arg0 ;
-(void)setGeminiResult:(id)arg0 reload:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif