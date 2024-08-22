// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUIREPORTCONTROLLER_H
#define PUIREPORTCONTROLLER_H

@class PSListController, NSArray, PSSpecifier;
@protocol PUIOnboardingCellDelegate;


#import "PUITrackingReportManager.h"
#import "PUIReportSensorManager.h"

@interface PUIReportController : PSListController <PUIOnboardingCellDelegate>



@property (retain, nonatomic) NSArray *appNetworkActivityHeader; // ivar: _appNetworkActivityHeader
@property (retain, nonatomic) NSArray *appNetworkActivityRows; // ivar: _appNetworkActivityRows
@property (retain, nonatomic) NSArray *appNetworkActivityRowsAwaitingDisplay; // ivar: _appNetworkActivityRowsAwaitingDisplay
@property (nonatomic) NSUInteger currentControllerMode; // ivar: _currentControllerMode
@property (retain, nonatomic) NSArray *domainNetworkActivityHeader; // ivar: _domainNetworkActivityHeader
@property (retain, nonatomic) NSArray *domainNetworkActivityRows; // ivar: _domainNetworkActivityRows
@property (retain, nonatomic) NSArray *domainNetworkActivityRowsAwaitingDisplay; // ivar: _domainNetworkActivityRowsAwaitingDisplay
@property (nonatomic) BOOL hasData; // ivar: _hasData
@property (retain, nonatomic) NSArray *learnMoreHeader; // ivar: _learnMoreHeader
@property (nonatomic) BOOL reportEnabled; // ivar: _reportEnabled
@property (retain, nonatomic) PUITrackingReportManager *reportManager; // ivar: _reportManager
@property (retain, nonatomic) PSSpecifier *saveAppActivitySpecifier; // ivar: _saveAppActivitySpecifier
@property (retain, nonatomic) NSArray *sensorActivityHeader; // ivar: _sensorActivityHeader
@property (retain, nonatomic) NSArray *sensorActivityRows; // ivar: _sensorActivityRows
@property (retain, nonatomic) PUIReportSensorManager *sensorManager; // ivar: _sensorManager
@property (retain, nonatomic) NSArray *websiteNetworkActivityHeader; // ivar: _websiteNetworkActivityHeader
@property (retain, nonatomic) NSArray *websiteNetworkActivityRows; // ivar: _websiteNetworkActivityRows
@property (retain, nonatomic) NSArray *websiteNetworkActivityRowsAwaitingDisplay; // ivar: _websiteNetworkActivityRowsAwaitingDisplay


-(BOOL)appAccessHasData;
-(BOOL)eitherSourceHasData;
-(BOOL)isRecordActivityEnabled;
-(BOOL)shouldReloadSpecifiersOnResume;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(NSUInteger)controllerMode;
-(id)appNetworkActivityGroupSpecifiers;
-(id)dataAccessGroupSpecifiers;
-(id)dataAccessSpecifiers;
-(id)headerSpecifiers;
-(id)init;
-(id)isRecordActivityEnabled:(id)arg0 ;
-(id)mostContactedDomainsGroupSpecifiers;
-(id)saveAppActivityFooterText;
-(id)specifiers;
-(id)specifiersForAppPrivacyReport;
-(id)specifiersForRecordAppActivity;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)websiteNetworkActivityGroupSpecifiers;
-(void)dataDidChange;
-(void)dealloc;
-(void)didBecomeActive;
-(void)didTapOnboardingCellLink:(id)arg0 ;
-(void)didTapSave;
-(void)didTapTurnOffAppPrivacyReport;
-(void)didTapTurnOnAppPrivacyReport;
-(void)presentAboutController;
-(void)reloadAppAccessHasDataWithCompletion:(id)arg0 ;
-(void)reloadAppAndTrackingData;
-(void)reloadAppNetworkActivitySpecifiersWithCompletion:(id)arg0 ;
-(void)reloadMostContactedDomainsSpecifiersWithCompletion:(id)arg0 ;
-(void)reloadSensorAndNetworkSpecifiersAnimated:(BOOL)arg0 ;
-(void)reloadWebsiteNetworkActivitySpecifiersWithCompletion:(id)arg0 ;
-(void)setRecordActivityEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif