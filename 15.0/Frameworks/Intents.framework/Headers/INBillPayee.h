// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INBILLPAYEE_H
#define INBILLPAYEE_H

@class NSString;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INSpeakableString.h"

@interface INBillPayee : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accountNumber; // ivar: _accountNumber
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INSpeakableString *nickname; // ivar: _nickname
@property (readonly, copy, nonatomic) INSpeakableString *organizationName; // ivar: _organizationName
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
-(id)initWithNickname:(id)arg0 number:(id)arg1 organizationName:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif