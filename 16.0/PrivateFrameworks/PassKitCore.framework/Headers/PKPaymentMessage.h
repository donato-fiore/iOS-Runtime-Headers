// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTMESSAGE_H
#define PKPAYMENTMESSAGE_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentMessage : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowDeepLink; // ivar: _allowDeepLink
@property (readonly, nonatomic) BOOL archiveOnNextTransaction;
@property (nonatomic, getter=isArchived) BOOL archived; // ivar: _archived
@property (copy, nonatomic) NSString *content; // ivar: _content
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (nonatomic) BOOL hasAssociatedPaymentApplication; // ivar: _hasAssociatedPaymentApplication
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDate *messageDate; // ivar: _messageDate
@property (nonatomic) NSUInteger messageType; // ivar: _messageType
@property (copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)supportsSecureCoding;
+(id)paymentMessageWithDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPaymentMessage:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif