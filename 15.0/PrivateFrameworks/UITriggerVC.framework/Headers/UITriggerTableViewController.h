// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITRIGGERTABLEVIEWCONTROLLER_H
#define UITRIGGERTABLEVIEWCONTROLLER_H

@class UITableViewController, NSString, IDSService, NSMutableDictionary, NSMutableArray;
@protocol IDSServiceDelegate, CSLUIUITriggerIDSProtocolResponse, UITableViewDelegate, UITableViewDataSource;



@interface UITriggerTableViewController : UITableViewController <IDSServiceDelegate, CSLUIUITriggerIDSProtocolResponse, UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSService *idsService; // ivar: _idsService
@property (nonatomic) BOOL loading; // ivar: _loading
@property (retain, nonatomic) NSMutableDictionary *sectionContents; // ivar: _sectionContents
@property (retain, nonatomic) NSMutableArray *sectionList; // ivar: _sectionList
@property (readonly) Class superclass;


-(BOOL)requestPluginList;
-(BOOL)triggerUIProvider:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)sectionStringForIndexPath:(id)arg0 ;
// -(id)sendProtobufRequest:(id)arg0 type:(unsigned short)arg1 priority:(NSInteger)arg2 expectsResponse:(BOOL)arg3 errorHandler:(id)arg4 withTimeout:(unk)arg5  ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tailStringForIndexPath:(id)arg0 ;
-(void)_extractSections:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)idsRequestUITriggerResponse:(id)arg0 ;
-(void)idsUIProvidersResponse:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif