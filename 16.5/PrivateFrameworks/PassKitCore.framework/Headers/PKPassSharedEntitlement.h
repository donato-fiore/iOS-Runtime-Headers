// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHAREDENTITLEMENT_H
#define PKPASSSHAREDENTITLEMENT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKPassShareTimeConfiguration.h"

@interface PKPassSharedEntitlement : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger carKeyEntitlementValue;
@property (nonatomic) NSInteger creationVersion; // ivar: _creationVersion
@property (retain, nonatomic) NSString *entitlementIdentifier; // ivar: _entitlementIdentifier
@property (nonatomic) NSUInteger recipientManageability; // ivar: _recipientManageability
@property (nonatomic) NSUInteger recipientShareability; // ivar: _recipientShareability
@property (nonatomic) NSUInteger recipientVisibility; // ivar: _recipientVisibility
@property (retain, nonatomic) PKPassShareTimeConfiguration *timeConfiguration; // ivar: _timeConfiguration


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCarKeyEntitlementValue:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithEntitlement:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif