// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUICARRIERSPACESERVICESCONTROLLER_H
#define PSUICARRIERSPACESERVICESCONTROLLER_H

@class PSListController, UINavigationController, NSArray;


#import "PSUICarrierSpaceMyAccountWebViewController.h"

@interface PSUICarrierSpaceServicesController : PSListController {
    UINavigationController *_navCon;
    PSUICarrierSpaceMyAccountWebViewController *_myAccountWebViewController;
}


@property (retain, nonatomic) NSArray *appsList; // ivar: _appsList


-(BOOL)shouldShowMoreApps;
-(id)getLogger;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)primaryAppSpecifier;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)carrierSpaceChanged;
-(void)launchMyAccountInSafari:(id)arg0 ;
-(void)launchMyAccountInWebView:(id)arg0 ;
-(void)moreAppsTapped:(id)arg0 ;
-(void)simStatusChanged;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif