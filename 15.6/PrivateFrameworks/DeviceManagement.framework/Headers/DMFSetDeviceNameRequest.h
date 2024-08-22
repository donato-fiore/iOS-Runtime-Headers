// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFSETDEVICENAMEREQUEST_H
#define DMFSETDEVICENAMEREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFSetDeviceNameRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif