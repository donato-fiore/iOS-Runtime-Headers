// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AALOGINRESPONSEAPPLEACCOUNTINFO_H
#define AALOGINRESPONSEAPPLEACCOUNTINFO_H

@class NSString, NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface AALoginResponseAppleAccountInfo : NSObject

@property (readonly, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, nonatomic) NSString *appleID; // ivar: _appleID
@property (readonly, nonatomic) NSArray *appleIDAliases; // ivar: _appleIDAliases
@property (readonly, nonatomic) NSNumber *cloudDocsMigrated; // ivar: _cloudDocsMigrated
@property (readonly, nonatomic, getter=isFamilyEligible) BOOL familyEligible; // ivar: _familyEligible
@property (readonly, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, nonatomic, getter=isManagedAppleID) BOOL managedAppleID; // ivar: _managedAppleID
@property (readonly, nonatomic) NSNumber *notesMigrated; // ivar: _notesMigrated
@property (readonly, nonatomic, getter=hasOptionalTerms) BOOL optionalTerms; // ivar: _optionalTerms
@property (readonly, nonatomic) NSString *personID; // ivar: _personID
@property (readonly, nonatomic) NSString *primaryEmail; // ivar: _primaryEmail
@property (readonly, nonatomic) NSNumber *primaryEmailVerified; // ivar: _primaryEmailVerified
@property (readonly, nonatomic) NSNumber *remindersAutoMigratableToCK; // ivar: _remindersAutoMigratableToCK
@property (readonly, nonatomic) NSNumber *remindersMigrated; // ivar: _remindersMigrated
@property (readonly, nonatomic, getter=isSandboxAccount) BOOL sandboxAccount; // ivar: _sandboxAccount


-(id)initWithDictionary:(id)arg0 ;


@end


#endif