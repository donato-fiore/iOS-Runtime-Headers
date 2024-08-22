// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFREGISTERCONFIGURATIONSOURCEREQUEST_H
#define DMFREGISTERCONFIGURATIONSOURCEREQUEST_H

@class NSString, NSXPCListenerEndpoint;


#import "DMFTaskRequest.h"
#import "DMFReportingRequirements.h"

@interface DMFRegisterConfigurationSourceRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *configurationSourceName; // ivar: _configurationSourceName
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // ivar: _listenerEndpoint
@property (copy, nonatomic) NSString *machServiceName; // ivar: _machServiceName
@property (copy, nonatomic) NSString *organizationIdentifier; // ivar: _organizationIdentifier
@property (copy, nonatomic) DMFReportingRequirements *reportingRequirements; // ivar: _reportingRequirements


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif