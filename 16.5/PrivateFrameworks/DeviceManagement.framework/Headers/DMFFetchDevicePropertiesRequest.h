// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFFETCHDEVICEPROPERTIESREQUEST_H
#define DMFFETCHDEVICEPROPERTIESREQUEST_H

@class NSArray;


#import "DMFTaskRequest.h"

@interface DMFFetchDevicePropertiesRequest : DMFTaskRequest

@property (copy, nonatomic) NSArray *propertyKeys; // ivar: _propertyKeys


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
+(id)currentDevicePropertyKeys;
+(id)devicePropertyKeysForPlatform:(NSUInteger)arg0 ;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif