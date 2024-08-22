// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSSLCLIENTTRUSTPOLICY_H
#define SFSSLCLIENTTRUSTPOLICY_H

@class NSString;
@protocol NSSecureCoding;


#import "SFTrustPolicy.h"

@interface SFSSLClientTrustPolicy : SFTrustPolicy <NSSecureCoding>

 {
    id *_sslClientTrustPolicyInternal;
}


@property (copy, nonatomic) NSString *clientName;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithClientName:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif