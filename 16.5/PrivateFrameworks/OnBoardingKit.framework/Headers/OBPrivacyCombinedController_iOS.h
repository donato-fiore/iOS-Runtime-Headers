// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBPRIVACYCOMBINEDCONTROLLER_IOS_H
#define OBPRIVACYCOMBINEDCONTROLLER_IOS_H

@class NSArray, NSString;
@protocol OBNavigationBarTitleTransistor, UITableViewDelegate, UITableViewDataSource, UITextViewDelegate;


#import "OBPrivacyCombinedController.h"

@interface OBPrivacyCombinedController_iOS : OBPrivacyCombinedController <OBNavigationBarTitleTransistor, UITableViewDelegate, UITableViewDataSource, UITextViewDelegate>



@property (retain, nonatomic) NSArray *bundles; // ivar: _bundles
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isUnifiedAbout; // ivar: _isUnifiedAbout
@property (retain) NSArray *privacyFlowGroups; // ivar: _privacyFlowGroups
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_privacyFlowForIndexPath:(id)arg0 ;
-(id)initWithBundles:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)setCustomTintColor:(id)arg0 ;
-(void)showPrivacyGateway:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif