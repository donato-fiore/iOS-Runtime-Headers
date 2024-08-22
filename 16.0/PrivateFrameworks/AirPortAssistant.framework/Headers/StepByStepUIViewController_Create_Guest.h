// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STEPBYSTEPUIVIEWCONTROLLER_CREATE_GUEST_H
#define STEPBYSTEPUIVIEWCONTROLLER_CREATE_GUEST_H

@class NSString;
@protocol TableViewManagerDelegate;


#import "StepByStepUIViewController.h"

@interface StepByStepUIViewController_Create_Guest : StepByStepUIViewController <TableViewManagerDelegate>



@property (nonatomic) int guestNetSecMode; // ivar: _guestNetSecMode
@property (nonatomic) BOOL guestNetworkEnabled; // ivar: _guestNetworkEnabled
@property (copy, nonatomic) NSString *wifiName; // ivar: _wifiName
@property (copy, nonatomic) NSString *wifiPassword; // ivar: _wifiPassword


-(BOOL)shouldChangeTextField:(id)arg0 atIndexPath:(id)arg1 forTextIndex:(NSUInteger)arg2 toString:(id)arg3 ;
-(BOOL)validateAndSetValues;
-(void)addGuestNetworkIsEnabledSection;
-(void)addGuestNetworkPasswordSection;
-(void)loadView;
-(void)setupInitialTableHeaderConfiguration;
-(void)setupTable;
-(void)switchTouchedInCellAtIndexPath:(id)arg0 forSwitchIndex:(NSUInteger)arg1 isOn:(BOOL)arg2 ;
-(void)textFieldDidChangeAtIndexPath:(id)arg0 ;
-(void)updateTable;
-(void)validateAndUpdateNextButton;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif