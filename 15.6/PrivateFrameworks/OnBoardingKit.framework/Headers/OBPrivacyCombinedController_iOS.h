// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBPRIVACYCOMBINEDCONTROLLER_IOS_H
#define OBPRIVACYCOMBINEDCONTROLLER_IOS_H

@class NSString, NSArray;
@protocol OBNavigationBarTitleTransistor, UITableViewDelegate, UITableViewDataSource;


#import "OBPrivacyCombinedController.h"

@interface OBPrivacyCombinedController_iOS : OBPrivacyCombinedController <OBNavigationBarTitleTransistor, UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property BOOL isUnifiedAbout; // ivar: _isUnifiedAbout
@property (retain) NSArray *privacyFlows; // ivar: _privacyFlows
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithIdentifiers:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)setCustomTintColor:(id)arg0 ;
-(void)showPrivacyGateway:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif