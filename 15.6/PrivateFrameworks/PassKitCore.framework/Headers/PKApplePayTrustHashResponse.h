// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLEPAYTRUSTHASHRESPONSE_H
#define PKAPPLEPAYTRUSTHASHRESPONSE_H

@class NSData, NSString;
@protocol NSSecureCoding;


#import "PKAccountWebServiceResponse.h"

@interface PKApplePayTrustHashResponse : PKAccountWebServiceResponse <NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *nonce; // ivar: _nonce
@property (readonly, copy, nonatomic) NSString *referenceIdentifier; // ivar: _referenceIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif