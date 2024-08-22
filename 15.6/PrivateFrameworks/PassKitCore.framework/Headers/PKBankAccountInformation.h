// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBANKACCOUNTINFORMATION_H
#define PKBANKACCOUNTINFORMATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKBankAccountInformation : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *accountNumber; // ivar: _accountNumber
@property (copy, nonatomic) NSString *bankName; // ivar: _bankName
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *routingNumber; // ivar: _routingNumber
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(Class)_classForType:(NSInteger)arg0 ;
-(BOOL)isValid;
-(id)accountSuffix;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)maskedAccountNumber;
-(void)_commonDeleteAllBankInformation;
-(void)deleteAllBankInformation;
-(void)deleteAllLocalBankInformation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateToLatestKeychainData;


@end


#endif