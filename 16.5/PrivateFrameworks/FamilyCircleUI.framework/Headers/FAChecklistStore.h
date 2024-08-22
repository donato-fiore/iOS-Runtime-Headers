// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FACHECKLISTSTORE_H
#define FACHECKLISTSTORE_H

@class HKHealthStore, HKMedicalIDStore, _HKMedicalIDData, NSArray, FMFSession, AACustodianController, NSSet, STSetupClient, NSMutableDictionary, AKAccountManager, ACAccount, NSNumber, FAFamilyCircle, FASharedService, NSURL;

#import <Foundation/Foundation.h>


@interface FAChecklistStore : NSObject {
    HKHealthStore *_healthStore;
    HKMedicalIDStore *_medicalIDStore;
    NSUInteger _countEmergencyContacts;
    _HKMedicalIDData *_medicalIDData;
    NSArray *_currEmergencyContacts;
    FMFSession *_session;
    AACustodianController *_custodianController;
    NSSet *_membersWithLocation;
    STSetupClient *_setupClient;
    NSMutableDictionary *_incompleteCounts;
    AKAccountManager *_accountManager;
    ACAccount *_authKitAccount;
    NSNumber *_computedIncompleteCount;
}


@property (retain, nonatomic) ACAccount *appleAccount; // ivar: _appleAccount
@property (nonatomic) NSUInteger countMembersIcloudPlus; // ivar: _countMembersIcloudPlus
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (retain, nonatomic) FAFamilyCircle *familyCircle; // ivar: _familyCircle
@property (readonly, nonatomic) FASharedService *iCloudService; // ivar: _iCloudService
@property (retain, nonatomic) NSURL *icloudPlusUrl; // ivar: _icloudPlusUrl
@property (retain, nonatomic) FASharedService *icloudService; // ivar: _icloudService
@property (retain, nonatomic) NSNumber *incompleteItems; // ivar: _incompleteItems
@property (retain, nonatomic) FASharedService *locationSharedService; // ivar: _locationSharedService


-(BOOL)screenTimeEnabledForChild:(id)arg0 ;
-(NSInteger)contactManagementEnabledForChild:(id)arg0 ;
-(NSUInteger)_handleSubscriptionListResponse:(id)arg0 ;
-(id)_getLocationSharedService:(id)arg0 ;
-(id)init;
-(void)clearChecklistCounts;
-(void)familyLocationSharingStatus:(id)arg0 ;
-(void)fetchIcloudPlusMembership:(id)arg0 ;
-(void)fetchMedicalIDData:(id)arg0 ;
-(void)fetchMyCustodians:(id)arg0 ;
-(void)finishSetup;
-(void)notifyObservable;
-(void)refreshChecklistCount:(id)arg0 account:(id)arg1 iCloudService:(id)arg2 completionHandler:(id)arg3 ;
-(void)setIncompleteCountFor:(NSUInteger)arg0 count:(int)arg1 ;


@end


#endif