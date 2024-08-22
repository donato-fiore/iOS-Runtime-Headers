// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSTRUSTAPPLIESTOTYPE_H
#define POWSTRUSTAPPLIESTOTYPE_H



#import "POWSTrustBaseRequestType.h"
#import "POWSTrustEndpointReferenceType.h"

@interface POWSTrustAppliesToType : POWSTrustBaseRequestType

@property (retain, nonatomic) POWSTrustEndpointReferenceType *EndpointReference; // ivar: _EndpointReference


+(id)definition;
-(id)description;


@end


#endif