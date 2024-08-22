// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGXPCRESPONSE2_H
#define SGXPCRESPONSE2_H

@protocol NSSecureCoding;


#import "SGXPCResponse1.h"

@interface SGXPCResponse2 : SGXPCResponse1

@property (readonly, nonatomic) NSObject<NSSecureCoding> *response2; // ivar: _response2


+(BOOL)supportsSecureCoding;
+(id)responseWith:(id)arg0 also:(id)arg1 ;
+(id)responseWithError:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)response1;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif