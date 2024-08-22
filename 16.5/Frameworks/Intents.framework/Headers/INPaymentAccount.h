// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INPAYMENTACCOUNT_H
#define INPAYMENTACCOUNT_H

@class NSString;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INBalanceAmount.h"
#import "INSpeakableString.h"

@interface INPaymentAccount : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accountNumber; // ivar: _accountNumber
@property (readonly, nonatomic) NSInteger accountType; // ivar: _accountType
@property (readonly, copy, nonatomic) INBalanceAmount *balance; // ivar: _balance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INSpeakableString *nickname; // ivar: _nickname
@property (readonly, copy, nonatomic) INSpeakableString *organizationName; // ivar: _organizationName
@property (readonly, copy, nonatomic) INBalanceAmount *secondaryBalance; // ivar: _secondaryBalance
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNickname:(id)arg0 number:(id)arg1 accountType:(NSInteger)arg2 organizationName:(id)arg3 ;
-(id)initWithNickname:(id)arg0 number:(id)arg1 accountType:(NSInteger)arg2 organizationName:(id)arg3 balance:(id)arg4 secondaryBalance:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif