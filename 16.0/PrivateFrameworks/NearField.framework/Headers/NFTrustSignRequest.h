// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFTRUSTSIGNREQUEST_H
#define NFTRUSTSIGNREQUEST_H

@class NSData;


#import "NFTrustObject.h"

@interface NFTrustSignRequest : NFTrustObject

@property (retain, nonatomic) NSData *challenge; // ivar: _challenge
@property (retain, nonatomic) NSData *data; // ivar: _data


+(BOOL)supportsSecureCoding;
+(id)signRequestWithChallenge:(id)arg0 data:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif