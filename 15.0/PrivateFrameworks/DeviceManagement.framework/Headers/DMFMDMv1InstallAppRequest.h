// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFMDMV1INSTALLAPPREQUEST_H
#define DMFMDMV1INSTALLAPPREQUEST_H

@class NSString, NSArray, NSNumber, NSDictionary;


#import "DMFInstallAppRequest.h"

@interface DMFMDMv1InstallAppRequest : DMFInstallAppRequest

@property (copy, nonatomic) NSString *VPNUUIDString; // ivar: _VPNUUIDString
@property (copy, nonatomic) NSArray *associatedDomains; // ivar: _associatedDomains
@property (copy, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads; // ivar: _associatedDomainsEnableDirectDownloads
@property (copy, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (nonatomic) BOOL manage; // ivar: _manage
@property (nonatomic) NSUInteger managementOptions; // ivar: _managementOptions
@property (copy, nonatomic) NSString *originator; // ivar: _originator
@property (copy, nonatomic) NSString *personaID; // ivar: _personaID
@property (copy, nonatomic) NSString *redemptionCode; // ivar: _redemptionCode
@property (copy, nonatomic) NSNumber *removable; // ivar: _removable


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif