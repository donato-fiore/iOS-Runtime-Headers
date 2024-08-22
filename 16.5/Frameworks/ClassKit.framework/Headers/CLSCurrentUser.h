// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSCURRENTUSER_H
#define CLSCURRENTUSER_H

@class NSString, NSDictionary, NSURL, NSError, NSData, CKRecordID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CLSPerson.h"

@interface CLSCurrentUser : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _hasSecurityScopedSchoolworkUbiquitousContainerURL;
    BOOL _hasSecurityScopedMultimediaCacheDirectoryURL;
}


@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *accountPersonaUniqueIdentifier; // ivar: _accountPersonaUniqueIdentifier
@property (nonatomic) NSInteger catalogEnvironment; // ivar: _catalogEnvironment
@property (copy, nonatomic) NSString *clientPersonaUniqueIdentifier; // ivar: _clientPersonaUniqueIdentifier
@property (readonly, copy, nonatomic) NSString *clientPersonaUniqueString;
@property (nonatomic) int devMode; // ivar: _devMode
@property (nonatomic) int handoutServiceAuthenticationState; // ivar: _handoutServiceAuthenticationState
@property (nonatomic) BOOL hasDataSeparatedAccount; // ivar: _hasDataSeparatedAccount
@property (nonatomic) BOOL hasEDUAccount; // ivar: _hasEDUAccount
@property (nonatomic) BOOL hasManagedAccount; // ivar: _hasManagedAccount
@property (nonatomic) BOOL hasMatchingPersona; // ivar: _hasMatchingPersona
@property (nonatomic) BOOL hasUbiquityEnabled; // ivar: _hasUbiquityEnabled
@property (nonatomic) int iCloudDriveAuthenticationState; // ivar: _iCloudDriveAuthenticationState
@property (readonly, nonatomic) BOOL isAdministrator;
@property (readonly, nonatomic) BOOL isInstructor;
@property (readonly, nonatomic) BOOL isStudent;
@property (retain, nonatomic) NSDictionary *locationIDsByAXMRoleType; // ivar: _locationIDsByAXMRoleType
@property (copy, nonatomic) NSURL *multimediaCacheDirectoryURL; // ivar: _multimediaCacheDirectoryURL
@property (copy, nonatomic) NSError *multimediaCacheDirectoryURLError; // ivar: _multimediaCacheDirectoryURLError
@property (copy, nonatomic) NSData *multimediaCacheDirectoryURLSandboxExtension; // ivar: _multimediaCacheDirectoryURLSandboxExtension
@property (copy, nonatomic) NSError *orgAdminUserFetchError; // ivar: _orgAdminUserFetchError
@property (retain, nonatomic) CKRecordID *orgAdminUserRecordID; // ivar: _orgAdminUserRecordID
@property (nonatomic) BOOL organizationMaidAnalyticsEnabled; // ivar: _organizationMaidAnalyticsEnabled
@property (copy, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (nonatomic) BOOL organizationProgressTrackingAllowed; // ivar: _organizationProgressTrackingAllowed
@property (retain, nonatomic) CLSPerson *person; // ivar: _person
@property (nonatomic) BOOL personMaidAnalyticsEnabled; // ivar: _personMaidAnalyticsEnabled
@property (readonly, copy, nonatomic) NSString *personaUniqueString;
@property (nonatomic) BOOL requiresPersonaMatch; // ivar: _requiresPersonaMatch
@property (nonatomic) NSUInteger roles; // ivar: _roles
@property (nonatomic) int rosterServiceAuthenticationState; // ivar: _rosterServiceAuthenticationState
@property (copy, nonatomic) NSError *schoolworkUbiquitousContainerError; // ivar: _schoolworkUbiquitousContainerError
@property (copy, nonatomic) NSURL *schoolworkUbiquitousContainerURL; // ivar: _schoolworkUbiquitousContainerURL
@property (copy, nonatomic) NSData *schoolworkUbiquitousContainerURLSandboxExtension; // ivar: _schoolworkUbiquitousContainerURLSandboxExtension
@property (copy, nonatomic) NSError *userFetchError; // ivar: _userFetchError
@property (retain, nonatomic) CKRecordID *userRecordID; // ivar: _userRecordID


+(BOOL)supportsSecureCoding;
+(NSUInteger)userRolesFromUserLocationIDsByAXMRoleType:(id)arg0 ;
+(id)magicValue;
-(BOOL)_hasRole:(NSUInteger)arg0 ;
-(BOOL)hasRole:(NSUInteger)arg0 ;
-(NSUInteger)_useRoles;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif