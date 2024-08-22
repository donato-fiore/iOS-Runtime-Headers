// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFFETCHDECLARATIONSREQUEST_H
#define DMFFETCHDECLARATIONSREQUEST_H

@class NSString, NSArray;


#import "DMFTaskRequest.h"

@interface DMFFetchDeclarationsRequest : DMFTaskRequest

@property (nonatomic) BOOL includeInternalState; // ivar: _includeInternalState
@property (nonatomic) BOOL includePayloadContents; // ivar: _includePayloadContents
@property (copy, nonatomic) NSString *organizationIdentifier; // ivar: _organizationIdentifier
@property (copy, nonatomic) NSArray *payloadIdentifiers; // ivar: _payloadIdentifiers


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif