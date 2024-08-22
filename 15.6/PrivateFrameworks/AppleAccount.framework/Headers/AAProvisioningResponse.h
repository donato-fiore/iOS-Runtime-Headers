// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAPROVISIONINGRESPONSE_H
#define AAPROVISIONINGRESPONSE_H

@class NSDictionary, NSString, NSArray, NSNumber;


#import "AAAuthenticationResponse.h"

@interface AAProvisioningResponse : AAAuthenticationResponse {
    NSDictionary *_icloud;
}


@property (readonly, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSArray *appleIDAliases;
@property (readonly, nonatomic, getter=isCloudDocsMigrated) BOOL cloudDocsMigrated;
@property (readonly, nonatomic) NSDictionary *dataclassProperties;
@property (readonly, nonatomic, getter=isFamilyEligible) BOOL familyEligible;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *fmipAppToken;
@property (readonly, nonatomic) NSString *fmipAuthToken;
@property (readonly, nonatomic) NSString *fmipSiriToken;
@property (readonly, nonatomic) NSString *iCloudAuthToken;
@property (readonly, nonatomic) NSString *keyTransparencyToken;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic, getter=isManagedAppleID) BOOL managedAppleID;
@property (readonly, nonatomic, getter=isNotesMigrated) BOOL notesMigrated;
@property (readonly, nonatomic, getter=hasOptionalTerms) BOOL optionalTerms;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSNumber *primaryEmailVerified;
@property (readonly, nonatomic) NSArray *provisionedDataclasses;
@property (readonly, nonatomic) NSDictionary *regionInfo;
@property (readonly, nonatomic, getter=isRemindersAutoMigratableToCK) BOOL remindersAutoMigratableToCK;
@property (readonly, nonatomic, getter=isRemindersMigrated) BOOL remindersMigrated;
@property (readonly, nonatomic, getter=isSandboxAccount) BOOL sandboxAccount;
@property (readonly, nonatomic) NSString *searchPartyToken;


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif