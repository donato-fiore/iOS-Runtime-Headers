// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNEMERGENCYCONTACTACTION_H
#define CNEMERGENCYCONTACTACTION_H

@class UIAlertController, CNContactProperty, CNContactStore, NSString;
@protocol CNUINavigationListViewControllerDelegate, CNPickerControllerDelegate, HKMedicalIDViewControllerDelegate, CNScheduler;


#import "CNPropertyAction.h"
#import "CNHealthStoreManager.h"
#import "CNUINavigationListViewController.h"

@interface CNEmergencyContactAction : CNPropertyAction <CNUINavigationListViewControllerDelegate, CNPickerControllerDelegate, HKMedicalIDViewControllerDelegate>



@property (nonatomic) BOOL addingToEmergency; // ivar: _addingToEmergency
@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (retain, nonatomic) CNContactProperty *contactProperty; // ivar: _contactProperty
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNHealthStoreManager *healthStoreManager; // ivar: _healthStoreManager
@property (retain, nonatomic) CNUINavigationListViewController *listController; // ivar: _listController
@property (retain, nonatomic) NSObject<CNScheduler> *mainThreadScheduler; // ivar: _mainThreadScheduler
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CNScheduler> *workQueue; // ivar: _workQueue


+(id)log;
-(id)initWithContact:(id)arg0 healthStoreManager:(id)arg1 propertyItems:(id)arg2 ;
-(void)createMedicalIDWithEmergencyContact:(id)arg0 ;
-(void)medicalIDViewControllerDidCancel:(id)arg0 ;
-(void)medicalIDViewControllerDidFinish:(id)arg0 ;
-(void)medicalIDViewControllerDidSave:(id)arg0 ;
-(void)navigationListController:(id)arg0 didSelectItem:(id)arg1 ;
-(void)performActionForItem:(id)arg0 sender:(id)arg1 ;
-(void)performActionWithContactProperty:(id)arg0 relationship:(id)arg1 ;
-(void)performActionWithSender:(id)arg0 ;
-(void)picker:(id)arg0 didPickItem:(id)arg1 ;
-(void)pickerDidCancel:(id)arg0 ;
-(void)presentDisambiguationAlertWithSender:(id)arg0 ;
-(void)showConfirmRemoveAlertWithSender:(id)arg0 completion:(id)arg1 ;
-(void)showHKMedicalIDViewControllerForMedicalID:(id)arg0 ;
-(void)showRelationshipPickerForContactProperty:(id)arg0 sender:(id)arg1 ;


@end


#endif