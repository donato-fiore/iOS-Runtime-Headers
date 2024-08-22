// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHAVAILABLEOSUPDATESREQUEST_H
#define DMFFETCHAVAILABLEOSUPDATESREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFFetchAvailableOSUpdatesRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (nonatomic) BOOL useDelay; // ivar: _useDelay


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
+(id)permittedPlatforms;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif