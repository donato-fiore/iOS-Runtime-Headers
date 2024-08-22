// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTPURCHASEDATA_H
#define PKPEERPAYMENTPURCHASEDATA_H



#import "PKServiceProviderPurchaseData.h"

@interface PKPeerPaymentPurchaseData : PKServiceProviderPurchaseData

@property (nonatomic) BOOL requiresInteraction; // ivar: _requiresInteraction
@property (nonatomic) NSUInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPKPeerPaymentPurchaseData:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif