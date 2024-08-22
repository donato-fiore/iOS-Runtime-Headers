// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNINTENTSVALUETYPE_H
#define LNINTENTSVALUETYPE_H

@class NSString;


#import "LNValueType.h"

@interface LNIntentsValueType : LNValueType

@property (readonly, nonatomic) NSInteger typeIdentifier; // ivar: _typeIdentifier
@property (readonly, copy, nonatomic) NSString *typeIdentifierAsString;


+(BOOL)supportsSecureCoding;
+(id)applicationValueType;
+(id)calendarEventValueType;
+(id)currencyAmountValueType;
+(id)environmentValueType;
+(id)fileValueType;
+(id)mediaItemValueType;
+(id)mediaSearchValueType;
+(id)messageConversationValueType;
+(id)noteValueType;
+(id)notificationValueType;
+(id)paymentMethodValueType;
+(id)personValueType;
+(id)taskListValueType;
+(id)taskValueType;
+(id)timerValueType;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTypeIdentifier:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif