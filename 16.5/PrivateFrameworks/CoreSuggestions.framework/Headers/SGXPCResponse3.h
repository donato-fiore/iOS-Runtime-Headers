// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGXPCRESPONSE3_H
#define SGXPCRESPONSE3_H

@protocol NSSecureCoding;


#import "SGXPCResponse2.h"

@interface SGXPCResponse3 : SGXPCResponse2

@property (readonly, nonatomic) NSObject<NSSecureCoding> *response3; // ivar: _response3


+(BOOL)supportsSecureCoding;
+(id)responseWith:(id)arg0 also:(id)arg1 also:(id)arg2 ;
+(id)responseWithError:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)response1;
-(id)response2;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif