// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGOPTIONFUNDINGSOURCE_H
#define PKPAYLATERFINANCINGOPTIONFUNDINGSOURCE_H

@class NSString;
@protocol PKPayLaterFundingSource, PKPayLaterFundingSourceDetails;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingOptionFundingSource : NSObject <PKPayLaterFundingSource>



@property (nonatomic) BOOL autoPayment; // ivar: _autoPayment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<PKPayLaterFundingSourceDetails> *details; // ivar: _details
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)bankDetails;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)displayName;
-(id)initWithAccountFundingSource:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithPaymentPass:(id)arg0 paymentApplication:(id)arg1 ;
-(id)panSuffix;
-(id)paymentPassDetails;
-(id)unmaskedPanSuffix;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif