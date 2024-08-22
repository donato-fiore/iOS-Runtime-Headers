// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSSLSERVERTRUSTPOLICY_H
#define SFSSLSERVERTRUSTPOLICY_H

@class NSString;
@protocol NSSecureCoding;


#import "SFTrustPolicy.h"

@interface SFSSLServerTrustPolicy : SFTrustPolicy <NSSecureCoding>

 {
    id *_sslServerTrustPolicyInternal;
}


@property (copy, nonatomic) NSString *serverName;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif