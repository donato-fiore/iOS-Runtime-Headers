// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBLACKHOLETRANSCRIPTVIEWCONTROLLER_H
#define CKBLACKHOLETRANSCRIPTVIEWCONTROLLER_H

@class UITableViewController, STConversationContext, NSString, UITextView, UIView, STLockoutViewController, NSMutableArray;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "CKConversation.h"

@interface CKBlackholeTranscriptViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource>



@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (retain, nonatomic) STConversationContext *conversationContext; // ivar: _conversationContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextView *headerTextView; // ivar: _headerTextView
@property (nonatomic) BOOL isShowingLockoutView; // ivar: _isShowingLockoutView
@property (retain, nonatomic) UIView *lockoutView; // ivar: _lockoutView
@property (retain, nonatomic) STLockoutViewController *lockoutViewController; // ivar: _lockoutViewController
@property (retain, nonatomic) NSMutableArray *messages; // ivar: _messages
@property (readonly) Class superclass;


-(BOOL)isChatAllowedByScreenTime:(id)arg0 ;
-(BOOL)shouldPresentBlockingDowntimeViewController;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_alertTitleForDelete;
-(id)_handleIDsForCurrentConversation;
-(id)generateHeader;
-(id)initWithConversation:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_confirmDeleteConversation:(id)arg0 view:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_deleteConversation:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_openRestoredChatInMessages;
-(void)_restoreConversation;
-(void)_updateTranscriptHistory;
-(void)chatAllowedByScreenTimeChanged:(id)arg0 ;
-(void)dealloc;
-(void)layoutLockoutView;
-(void)removeLockoutControllerIfNeeded;
-(void)showScreenTimeShieldIfNeeded;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateScreenTimeShieldIfNeededForChat:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif