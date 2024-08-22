// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFMDMV1STARTMANAGINGAPPREQUEST_H
#define DMFMDMV1STARTMANAGINGAPPREQUEST_H

@class NSString, NSArray, NSNumber, NSDictionary;


#import "DMFAppRequest.h"

@interface DMFMDMv1StartManagingAppRequest : DMFAppRequest

@property (copy, nonatomic) NSString *VPNUUIDString; // ivar: _VPNUUIDString
@property (copy, nonatomic) NSArray *associatedDomains; // ivar: _associatedDomains
@property (copy, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads; // ivar: _associatedDomainsEnableDirectDownloads
@property (copy, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (copy, nonatomic) NSNumber *internal; // ivar: _internal
@property (nonatomic) NSUInteger managementOptions; // ivar: _managementOptions
@property (copy, nonatomic) NSString *originator; // ivar: _originator
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