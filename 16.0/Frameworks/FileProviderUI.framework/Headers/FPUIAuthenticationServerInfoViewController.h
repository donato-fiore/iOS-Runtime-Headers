// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPUIAUTHENTICATIONSERVERINFOVIEWCONTROLLER_H
#define FPUIAUTHENTICATIONSERVERINFOVIEWCONTROLLER_H

@protocol FPUIAuthenticationServerRepresentation, FPUIAuthenticationServerInfoDelegate;


#import "FPUIAuthenticationTableViewController.h"

@interface FPUIAuthenticationServerInfoViewController : FPUIAuthenticationTableViewController {
    id<FPUIAuthenticationServerRepresentation> *_serverRepresentation;
}


@property (weak, nonatomic) NSObject<FPUIAuthenticationServerInfoDelegate> *serverInfoDelegate; // ivar: _serverInfoDelegate


-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(id)defaultLeftBarButtonItem;
-(id)initWithServerRepresentation:(id)arg0 ;
-(void)removeButtonTapped:(id)arg0 ;
-(void)setupTableViewSections;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)viewDidLoad;


@end


#endif