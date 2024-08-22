// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFENDTRANSACTIONREQUEST_H
#define DMFENDTRANSACTIONREQUEST_H

@class NSUUID;


#import "DMFTaskRequest.h"

@interface DMFEndTransactionRequest : DMFTaskRequest

@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif