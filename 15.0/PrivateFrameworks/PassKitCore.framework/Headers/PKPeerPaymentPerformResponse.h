// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTPERFORMRESPONSE_H
#define PKPEERPAYMENTPERFORMRESPONSE_H

@class NSUUID;


#import "PKPeerPaymentStatusResponse.h"

@interface PKPeerPaymentPerformResponse : PKPeerPaymentStatusResponse

@property (readonly, copy, nonatomic) NSUUID *deviceScoreIdentifier; // ivar: _deviceScoreIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 deviceScoreIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif