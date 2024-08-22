// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKGENERATEIDENTITYREQUEST_H
#define CRKGENERATEIDENTITYREQUEST_H

@class CATTaskRequest, NSString;



@interface CRKGenerateIdentityRequest : CATTaskRequest

@property (copy, nonatomic) NSString *commonName; // ivar: _commonName


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif