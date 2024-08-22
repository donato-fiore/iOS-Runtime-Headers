// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSTRUSTREFERENCETYPE_H
#define POWSTRUSTREFERENCETYPE_H



#import "POWSTrustBaseRequestType.h"
#import "POWSTrustSecurityTokenReferenceType.h"

@interface POWSTrustReferenceType : POWSTrustBaseRequestType

@property (retain, nonatomic) POWSTrustSecurityTokenReferenceType *SecurityTokenReference; // ivar: _SecurityTokenReference


+(id)definition;
-(id)description;


@end


#endif