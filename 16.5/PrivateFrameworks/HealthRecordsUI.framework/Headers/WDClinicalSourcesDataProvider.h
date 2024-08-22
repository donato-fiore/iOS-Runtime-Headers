// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDCLINICALSOURCESDATAPROVIDER_H
#define WDCLINICALSOURCESDATAPROVIDER_H

@class HKClinicalAccountStore, HKHealthRecordsStore, HKHealthStore;

#import <Foundation/Foundation.h>


@interface WDClinicalSourcesDataProvider : NSObject

@property (readonly, nonatomic) HKClinicalAccountStore *clinicalAccountStore; // ivar: _clinicalAccountStore
@property (readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore; // ivar: _healthRecordsStore
@property (readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKHealthStore *healthStore;


+(id)_logoCompletionOnMainQueue:(SEL)arg0 cancellationToken:(id)arg1 ;
+(id)_objectCompletionOnMainQueue:(SEL)arg0 cancellationToken:(id)arg1 ;
-(BOOL)anyRegisteredAccounts;
-(id)_accountsForGateways:(id)arg0 ;
-(id)_createLoginSafariViewControllerForURL:(id)arg0 error:(*id)arg1 ;
-(id)_fetchLogoForBrand:(id)arg0 fallback:(id)arg1 size:(CGFloat)arg2 options:(NSUInteger)arg3 completion:(id)arg4 ;
-(id)_logoForFallback:(id)arg0 size:(CGFloat)arg1 ;
-(id)_orderAccountsForDisplay:(id)arg0 ;
-(id)_stateValueFromURL:(id)arg0 ;
-(id)accountsForDisplay;
-(id)accountsForDisplayForGateways:(id)arg0 ;
-(id)appSourceRequestingAuthorizationForClinicalTypeWithBundleIdentifier:(id)arg0 ;
-(id)fetchAccessedAccountsForDisplayWithCompletion:(id)arg0 ;
-(id)fetchAccountForSource:(id)arg0 ;
-(id)fetchAccountOwnerForSource:(id)arg0 ;
-(id)fetchAccountsForDisplayWithCompletion:(id)arg0 ;
-(id)fetchLogoForBrand:(id)arg0 fallback:(id)arg1 size:(CGFloat)arg2 completion:(id)arg3 ;
-(id)formattedFullName:(id)arg0 birthDate:(id)arg1 useMultipleLines:(BOOL)arg2 ;
-(id)gatewaysWithExistingAccountsFromGateways:(id)arg0 ;
-(id)init;
-(id)initWithHealthRecordsStore:(id)arg0 ;
-(id)nameAndFormattedBirthDateForAccountOwner:(id)arg0 ;
-(id)nameAndFormattedBirthDateForAccountOwner:(id)arg0 useMultipleLines:(BOOL)arg1 ;
-(id)nameAndFormattedBirthDateForSignedClinicalDataSubject:(id)arg0 ;
-(id)nameAndFormattedBirthDateForSignedClinicalDataSubject:(id)arg0 useMultipleLines:(BOOL)arg1 ;
-(id)sourcesRequestingAuthorizationForClinicalTypes;
-(void)_fetchAccountsForDisplayWithCompletion:(id)arg0 ;
-(void)beginInitialLoginSessionForGateway:(id)arg0 completion:(id)arg1 ;
-(void)beginReloginSessionForAccount:(id)arg0 completion:(id)arg1 ;
-(void)fetchAccountForSource:(id)arg0 completion:(id)arg1 ;
-(void)fetchAccountOwnerForSource:(id)arg0 completion:(id)arg1 ;
-(void)fetchSubjectAndExpirationDateForSignedClinicalDataRecordWithIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif