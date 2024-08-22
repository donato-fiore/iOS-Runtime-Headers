// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STEPBYSTEPUIVIEWCONTROLLER_CREATE_CONFIG_H
#define STEPBYSTEPUIVIEWCONTROLLER_CREATE_CONFIG_H

@class NSString;
@protocol TableViewManagerDelegate, UIPopoverControllerDelegate;


#import "StepByStepUIViewController.h"
#import "RecommendationActionController.h"

@interface StepByStepUIViewController_Create_Config : StepByStepUIViewController <TableViewManagerDelegate, UIPopoverControllerDelegate>



@property (retain, nonatomic) RecommendationActionController *actionController; // ivar: actionController
@property (copy, nonatomic) NSString *basePassword; // ivar: _basePassword
@property (copy, nonatomic) NSString *basePasswordVerify; // ivar: _basePasswordVerify
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *diskPassword; // ivar: _diskPassword
@property (copy, nonatomic) NSString *diskPasswordVerify; // ivar: _diskPasswordVerify
@property (nonatomic) BOOL hasDisk; // ivar: hasDisk
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *personalizedBaseName; // ivar: _personalizedBaseName
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDifferentDiskPassword; // ivar: useDifferentDiskPassword
@property (nonatomic) BOOL useSinglePassword; // ivar: useSinglePassword
@property (copy, nonatomic) NSString *wifiName; // ivar: _wifiName
@property (copy, nonatomic) NSString *wifiPassword; // ivar: _wifiPassword
@property (copy, nonatomic) NSString *wifiPasswordVerify; // ivar: _wifiPasswordVerify


-(BOOL)shouldChangeTextField:(id)arg0 atIndexPath:(id)arg1 forTextIndex:(NSUInteger)arg2 toString:(id)arg3 ;
-(BOOL)validateAndSetValues;
-(void)addDiskPasswordSection;
-(void)setupInitialTableHeaderConfiguration;
-(void)setupTable;
-(void)switchTouchedInCellAtIndexPath:(id)arg0 forSwitchIndex:(NSUInteger)arg1 isOn:(BOOL)arg2 ;
-(void)textFieldDidChangeAtIndexPath:(id)arg0 ;
-(void)touchInCellAtIndexPath:(id)arg0 ;
-(void)updateSinglePasswordSwitchExplanation:(BOOL)arg0 ;
-(void)updateTable;
-(void)updateTableForMultiplePasswords;
-(void)updateTableForSinglePassword;
-(void)validateAndUpdateNextButton;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif