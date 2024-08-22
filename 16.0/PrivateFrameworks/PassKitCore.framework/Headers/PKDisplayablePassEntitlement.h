// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISPLAYABLEPASSENTITLEMENT_H
#define PKDISPLAYABLEPASSENTITLEMENT_H

@class NSString, NSDictionary, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKPassEntitlement.h"
#import "PKPassSharedEntitlement.h"

@interface PKDisplayablePassEntitlement : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_entitlementTemplate;
    NSDictionary *_templateFields;
}


@property (nonatomic) BOOL clearGroupWhenSelected; // ivar: _clearGroupWhenSelected
@property (nonatomic) NSUInteger displayStyle; // ivar: _displayStyle
@property (readonly, nonatomic) PKPassEntitlement *entitlement; // ivar: _entitlement
@property (readonly, nonatomic) NSString *entitlementIdentifier;
@property (nonatomic) NSInteger groupPriority; // ivar: _groupPriority
@property (retain, nonatomic) NSString *iconName; // ivar: _iconName
@property (retain, nonatomic) NSString *localizedGroup; // ivar: _localizedGroup
@property (retain, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (retain, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) PKPassSharedEntitlement *sharedEntitlement; // ivar: _sharedEntitlement
@property (retain, nonatomic) NSNumber *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)displayableEntitlementFrom:(id)arg0 pass:(id)arg1 ;
+(id)displayableEntitlementFrom:(id)arg0 template:(id)arg1 pass:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)replaceEntitlementWithSharedEntitlement:(id)arg0 ;


@end


#endif