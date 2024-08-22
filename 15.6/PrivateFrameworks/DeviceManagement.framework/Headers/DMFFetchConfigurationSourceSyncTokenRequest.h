// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFFETCHCONFIGURATIONSOURCESYNCTOKENREQUEST_H
#define DMFFETCHCONFIGURATIONSOURCESYNCTOKENREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFFetchConfigurationSourceSyncTokenRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *configurationSource; // ivar: _configurationSource


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif