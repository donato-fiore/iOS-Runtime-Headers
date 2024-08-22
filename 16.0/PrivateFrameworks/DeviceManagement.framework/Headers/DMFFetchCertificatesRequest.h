// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHCERTIFICATESREQUEST_H
#define DMFFETCHCERTIFICATESREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFFetchCertificatesRequest : DMFTaskRequest

@property (nonatomic) BOOL managedOnly; // ivar: _managedOnly


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif