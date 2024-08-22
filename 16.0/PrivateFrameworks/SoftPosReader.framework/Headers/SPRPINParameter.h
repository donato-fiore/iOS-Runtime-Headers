// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPRPINPARAMETER_H
#define SPRPINPARAMETER_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPRPINParameter : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *digest; // ivar: _digest
@property (readonly, copy, nonatomic) NSString *pinToken; // ivar: _pinToken
@property (readonly, nonatomic) CGFloat transactionDataLifetime; // ivar: _transactionDataLifetime


+(BOOL)supportsSecureCoding;
+(CGFloat)defaultTransactionDataLifetime;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDigest:(id)arg0 pinToken:(id)arg1 ;
-(id)initWithDigest:(id)arg0 pinToken:(id)arg1 transactionDataLifetime:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif