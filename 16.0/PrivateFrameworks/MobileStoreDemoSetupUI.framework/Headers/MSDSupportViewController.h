// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSDSUPPORTVIEWCONTROLLER_H
#define MSDSUPPORTVIEWCONTROLLER_H

@class UIViewController, OBWelcomeController, NSString, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface MSDSupportViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) OBWelcomeController *contentViewController; // ivar: _contentViewController
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITableView *optionsTableView; // ivar: _optionsTableView
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_currentCountryStackView;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif