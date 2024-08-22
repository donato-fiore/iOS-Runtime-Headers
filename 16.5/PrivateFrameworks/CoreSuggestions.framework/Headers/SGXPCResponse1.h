// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGXPCRESPONSE1_H
#define SGXPCRESPONSE1_H

@protocol NSSecureCoding;


#import "SGXPCResponse.h"

@interface SGXPCResponse1 : SGXPCResponse

@property (readonly, nonatomic) NSObject<NSSecureCoding> *response1; // ivar: _response1


+(BOOL)supportsSecureCoding;
+(id)responseWith:(id)arg0 ;
+(id)responseWithError:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif