// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSENTITLEMENT_H
#define PKPASSENTITLEMENT_H

@class NSString, NSArray, NSDictionary, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKPassShareTimeConfiguration.h"

@interface PKPassEntitlement : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL active; // ivar: _active
@property (readonly, nonatomic) NSInteger carKeyEntitlementType;
@property (retain, nonatomic) NSString *entitlementTemplate; // ivar: _entitlementTemplate
@property (nonatomic) BOOL hasRemainingShares; // ivar: _hasRemainingShares
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSArray *manageability; // ivar: _manageability
@property (retain, nonatomic) NSArray *shareability; // ivar: _shareability
@property (retain, nonatomic) NSString *subcredentialIdentifier; // ivar: _subcredentialIdentifier
@property (retain, nonatomic) NSDictionary *templateFields; // ivar: _templateFields
@property (retain, nonatomic) PKPassShareTimeConfiguration *timeConfiguration; // ivar: _timeConfiguration
@property (retain, nonatomic) NSNumber *value; // ivar: _value
@property (retain, nonatomic) NSArray *visibility; // ivar: _visibility


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSubcredentialDictionary:(id)arg0 subcredentialIdentifier:(id)arg1 ;
-(id)subcredentialDictionaryRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif