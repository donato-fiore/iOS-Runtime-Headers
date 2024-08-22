// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIPASSWORDSETTINGSVIEWCONTROLLER_H
#define AMSUIPASSWORDSETTINGSVIEWCONTROLLER_H

@class UIViewController, ACAccount, NSBundle, NSString, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, AMSUIPasswordSettingsFreeDownloadsCellDelegate, AMSURLProtocolDelegate, NSURLSessionDelegate;



@interface AMSUIPasswordSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AMSUIPasswordSettingsFreeDownloadsCellDelegate, AMSURLProtocolDelegate, NSURLSessionDelegate>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger freeSetting; // ivar: _freeSetting
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger paidSetting; // ivar: _paidSetting
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithAccount:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleDialogRequest:(id)arg2 completion:(id)arg3 ;
-(void)donePressed:(id)arg0 ;
-(void)freeDownloadsToggle:(id)arg0 changedValue:(BOOL)arg1 ;
-(void)handleAuthenticateRequest:(id)arg0 completion:(id)arg1 ;
-(void)handleDialogRequest:(id)arg0 completion:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif