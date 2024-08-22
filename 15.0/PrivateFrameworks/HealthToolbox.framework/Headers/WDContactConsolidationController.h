// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDCONTACTCONSOLIDATIONCONTROLLER_H
#define WDCONTACTCONSOLIDATIONCONTROLLER_H

@class UIAlertController, HKHealthStore, _HKMedicalIDData, UIViewController, SOSContactsManager;

#import <Foundation/Foundation.h>

#import "WDNotificationManager.h"

@interface WDContactConsolidationController : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (weak, nonatomic) UIAlertController *consolidationAlertController; // ivar: _consolidationAlertController
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) BOOL isPresentingConsolidationAlert;
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData; // ivar: _medicalIDData
@property (retain, nonatomic) WDNotificationManager *notificationManager; // ivar: _notificationManager
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) SOSContactsManager *sosContactsManager; // ivar: _sosContactsManager


-(id)initWithProfile:(id)arg0 presentingViewController:(id)arg1 ;
-(void)_consolidateSOSContactsWithMedicalIDContacts;
-(void)_showLearnMoreViewController;
-(void)checkAlertNecessity;
-(void)presentContactConsolidationAlertWithCompletionHandler:(id)arg0 ;
-(void)presentContactsConsolidationAlert;


@end


#endif