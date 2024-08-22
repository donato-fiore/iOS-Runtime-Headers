// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCLEARASMCREDENTIALSREQUEST_H
#define CRKCLEARASMCREDENTIALSREQUEST_H

@class CATTaskRequest;



@interface CRKClearASMCredentialsRequest : CATTaskRequest

@property (nonatomic) NSInteger role; // ivar: _role
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif