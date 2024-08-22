// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFKNOWNNETWORKDETAILSVIEWCONTROLLER_H
#define WFKNOWNNETWORKDETAILSVIEWCONTROLLER_H

@class UITableViewController, NSDate, NSDateFormatter, NSArray, NSString, NSDictionary;
@protocol WFKnownNetworksViewControllerDelegate;



@interface WFKnownNetworkDetailsViewController : UITableViewController

@property (retain, nonatomic) NSDate *dateAdded; // ivar: _dateAdded
@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (retain, nonatomic) NSDate *dateLastJoined; // ivar: _dateLastJoined
@property (retain, nonatomic) NSArray *geoTagsArray; // ivar: _geoTagsArray
@property (nonatomic) BOOL isHidden; // ivar: _isHidden
@property (weak, nonatomic) NSObject<WFKnownNetworksViewControllerDelegate> *knownNetworksDelegate; // ivar: _knownNetworksDelegate
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSDictionary *scoreDict; // ivar: _scoreDict
@property (retain, nonatomic) NSString *securityType; // ivar: _securityType
@property (copy, nonatomic) NSString *ssid; // ivar: _ssid


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif