// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFUPDATEDECLARATIONSREQUEST_H
#define DMFUPDATEDECLARATIONSREQUEST_H

@class NSString, NSArray;


#import "DMFTaskRequest.h"

@interface DMFUpdateDeclarationsRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *organizationIdentifier; // ivar: _organizationIdentifier
@property (copy, nonatomic) NSArray *removeDeclarations; // ivar: _removeDeclarations
@property (copy, nonatomic) NSString *syncToken; // ivar: _syncToken
@property (copy, nonatomic) NSArray *upsertDeclarations; // ivar: _upsertDeclarations


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif