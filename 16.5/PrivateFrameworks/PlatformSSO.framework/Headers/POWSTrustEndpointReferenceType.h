// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSTRUSTENDPOINTREFERENCETYPE_H
#define POWSTRUSTENDPOINTREFERENCETYPE_H

@class NSString;


#import "POWSTrustBaseRequestType.h"

@interface POWSTrustEndpointReferenceType : POWSTrustBaseRequestType

@property (copy, nonatomic) NSString *Address; // ivar: _Address


+(id)definition;
-(id)description;


@end


#endif