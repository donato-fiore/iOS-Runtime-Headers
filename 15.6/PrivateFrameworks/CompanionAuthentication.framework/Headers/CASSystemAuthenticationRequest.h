// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CASSYSTEMAUTHENTICATIONREQUEST_H
#define CASSYSTEMAUTHENTICATIONREQUEST_H

@protocol NSSecureCoding;


#import "CASAuthenticationRequest.h"

@interface CASSystemAuthenticationRequest : CASAuthenticationRequest <NSSecureCoding>



@property (nonatomic) NSInteger service; // ivar: _service


+(BOOL)supportsSecureCoding;
-(NSInteger)authType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif