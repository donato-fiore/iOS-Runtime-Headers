// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFUNDINGSOURCEBANKDETAILS_H
#define PKPAYLATERFUNDINGSOURCEBANKDETAILS_H

@class NSString;
@protocol PKPayLaterFundingSourceDetails;

#import <Foundation/Foundation.h>


@interface PKPayLaterFundingSourceBankDetails : NSObject <PKPayLaterFundingSourceDetails>



@property (copy, nonatomic) NSString *accountNumberSuffix; // ivar: _accountNumberSuffix
@property (copy, nonatomic) NSString *bankName; // ivar: _bankName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDetails:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithAccountFundingSource:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 type:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif