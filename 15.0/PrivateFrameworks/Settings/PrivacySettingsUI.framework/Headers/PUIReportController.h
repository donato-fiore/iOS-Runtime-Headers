// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIREPORTCONTROLLER_H
#define PUIREPORTCONTROLLER_H

@class PSListController, PSSpecifier;


#import "PUITrackingReportManager.h"

@interface PUIReportController : PSListController

@property (nonatomic) BOOL hasData; // ivar: _hasData
@property (nonatomic) BOOL reportEnabled; // ivar: _reportEnabled
@property (retain, nonatomic) PSSpecifier *saveAppActivitySpecifier; // ivar: _saveAppActivitySpecifier
@property (retain, nonatomic) PUITrackingReportManager *trackingReportManager; // ivar: _trackingReportManager


-(BOOL)appAccessHasData;
-(BOOL)eitherSourceHasData;
-(BOOL)isRecordActivityEnabled;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)init;
-(id)isRecordActivityEnabled:(id)arg0 ;
-(id)saveAppActivityFooterText;
-(id)specifiers;
-(void)dataDidChange;
-(void)dealloc;
-(void)didBecomeActive;
-(void)didTapSave;
-(void)reloadAppAccessHasDataWithCompletion:(id)arg0 ;
-(void)reloadAppAndTrackingData;
-(void)setRecordActivityEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif