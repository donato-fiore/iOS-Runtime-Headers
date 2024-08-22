// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFSETDECLARATIONSREQUEST_H
#define DMFSETDECLARATIONSREQUEST_H

@class NSArray, NSString;


#import "DMFTaskRequest.h"

@interface DMFSetDeclarationsRequest : DMFTaskRequest

@property (copy, nonatomic) NSArray *declarations; // ivar: _declarations
@property (copy, nonatomic) NSString *organizationIdentifier; // ivar: _organizationIdentifier
@property (copy, nonatomic) NSString *syncToken; // ivar: _syncToken


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif