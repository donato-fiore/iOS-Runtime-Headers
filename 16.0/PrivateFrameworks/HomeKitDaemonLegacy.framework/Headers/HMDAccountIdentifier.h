// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCOUNTIDENTIFIER_H
#define HMDACCOUNTIDENTIFIER_H

@class HMFObject, NSArray, NSString, NSUUID;
@protocol HMFObject, NSCopying, NSSecureCoding;


#import "_HMDAccountIdentifier.h"

@interface HMDAccountIdentifier : HMFObject <HMFObject, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, getter=isAuthenticated) BOOL authenticated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) _HMDAccountIdentifier *internal; // ivar: _internal
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *senderCorrelationIdentifier;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)accountIdentifierForAccountHandle:(id)arg0 ;
+(id)accountIdentifierForAppleAccountContext:(id)arg0 ;
+(id)accountIdentifierForMessageContext:(id)arg0 ;
+(id)accountIdentifierForSenderCorrelationIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternal:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif