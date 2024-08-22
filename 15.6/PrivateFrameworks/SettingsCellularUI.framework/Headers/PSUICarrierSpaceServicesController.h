// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUICARRIERSPACESERVICESCONTROLLER_H
#define PSUICARRIERSPACESERVICESCONTROLLER_H

@class PSListController, NSArray;



@interface PSUICarrierSpaceServicesController : PSListController

@property (retain, nonatomic) NSArray *appsList; // ivar: _appsList


-(BOOL)shouldShowMoreApps;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)primaryAppSpecifier;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)carrierSpaceChanged;
-(void)moreAppsTapped:(id)arg0 ;
-(void)simStatusChanged;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif