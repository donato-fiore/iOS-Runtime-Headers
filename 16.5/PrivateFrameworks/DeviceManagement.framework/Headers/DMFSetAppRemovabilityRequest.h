// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFSETAPPREMOVABILITYREQUEST_H
#define DMFSETAPPREMOVABILITYREQUEST_H

@class NSNumber;


#import "DMFAppRequest.h"

@interface DMFSetAppRemovabilityRequest : DMFAppRequest

@property (copy, nonatomic) NSNumber *removable; // ivar: _removable


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif