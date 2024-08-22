// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRAUTHORIZATIONCATEGORYGROUPVIEWCONTROLLER_H
#define SRAUTHORIZATIONCATEGORYGROUPVIEWCONTROLLER_H

@class UITableViewController, NSBundle, SRAuthorizationStore, NSString, NSMutableDictionary, NSArray;
@protocol SRAuthorizationCellDelegate, UITableViewDelegatePrivate;



@interface SRAuthorizationCategoryGroupViewController : UITableViewController <SRAuthorizationCellDelegate, UITableViewDelegatePrivate>



@property (retain, nonatomic) NSBundle *appBundle; // ivar: _appBundle
@property (retain) SRAuthorizationStore *authStore; // ivar: _authStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *readerAuthState; // ivar: _readerAuthState
@property (retain, nonatomic) NSArray *sortedReaderAuthorizationServices; // ivar: _sortedReaderAuthorizationServices
@property (retain, nonatomic) NSArray *sortedWriterAuthorizationServices; // ivar: _sortedWriterAuthorizationServices
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *writerAuthState; // ivar: _writerAuthState


-(BOOL)indexPathIsInWriterSection:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)readerAuthSectionStart;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)usageSectionStart;
-(NSInteger)writerAuthSectionStart;
-(id)init;
-(id)serviceFromIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)authorizationSwitchToggledWithValue:(BOOL)arg0 indexPath:(id)arg1 ;
-(void)confirmAuthChangeForService:(id)arg0 value:(BOOL)arg1 indexPath:(id)arg2 setOverride:(BOOL)arg3 ;
-(void)dealloc;
-(void)openPrivacy;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif