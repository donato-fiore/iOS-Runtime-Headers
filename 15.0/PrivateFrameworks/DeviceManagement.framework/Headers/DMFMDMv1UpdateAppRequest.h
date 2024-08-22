// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFMDMV1UPDATEAPPREQUEST_H
#define DMFMDMV1UPDATEAPPREQUEST_H

@class NSString, NSArray, NSNumber, NSDictionary;


#import "DMFUpdateAppRequest.h"

@interface DMFMDMv1UpdateAppRequest : DMFUpdateAppRequest

@property (copy, nonatomic) NSString *VPNUUIDString; // ivar: _VPNUUIDString
@property (copy, nonatomic) NSArray *associatedDomains; // ivar: _associatedDomains
@property (copy, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads; // ivar: _associatedDomainsEnableDirectDownloads
@property (copy, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (nonatomic) NSUInteger managementOptions; // ivar: _managementOptions
@property (copy, nonatomic) NSString *originator; // ivar: _originator
@property (copy, nonatomic) NSNumber *removable; // ivar: _removable


+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif