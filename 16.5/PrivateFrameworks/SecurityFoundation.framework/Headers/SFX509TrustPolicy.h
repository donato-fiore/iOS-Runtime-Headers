// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFX509TRUSTPOLICY_H
#define SFX509TRUSTPOLICY_H

@protocol NSSecureCoding;


#import "SFTrustPolicy.h"

@interface SFX509TrustPolicy : SFTrustPolicy <NSSecureCoding>

 {
    id *_x509TrustPolicyInternal;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif