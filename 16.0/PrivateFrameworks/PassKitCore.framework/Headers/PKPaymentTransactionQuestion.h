// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTTRANSACTIONQUESTION_H
#define PKPAYMENTTRANSACTIONQUESTION_H

@class NSArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentTransactionQuestion : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *allowedAnswers;
@property (nonatomic) BOOL answered; // ivar: _answered
@property (nonatomic) BOOL answeredOnThisDevice; // ivar: _answeredOnThisDevice
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQuestion:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif