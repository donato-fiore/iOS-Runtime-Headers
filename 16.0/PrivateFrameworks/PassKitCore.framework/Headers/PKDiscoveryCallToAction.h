// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISCOVERYCALLTOACTION_H
#define PKDISCOVERYCALLTOACTION_H

@class NSArray, NSSet, NSNumber, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKColor.h"
#import "PKDiscoveryMedia.h"
#import "PKDiscoveryItem.h"

@interface PKDiscoveryCallToAction : NSObject <NSSecureCoding>

 {
    NSArray *_paymentNetworks;
    NSSet *_allowedFeatureIdentifiers;
    NSSet *_transitNetworkIdentifiers;
    NSSet *_productIdentifiers;
    NSNumber *_appStoreAppIdentifier;
    NSString *_referrerIdentifier;
    BOOL _foregroundContentModeIsSet;
}


@property (readonly, nonatomic) NSInteger action; // ivar: _action
@property (readonly, nonatomic) NSDictionary *actionInfo; // ivar: _actionInfo
@property (readonly, nonatomic) NSSet *allowedFeatureIdentifiers;
@property (readonly, nonatomic) NSNumber *appStoreAppIdentifier;
@property (readonly, nonatomic) PKColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) NSString *buttonTextKey; // ivar: _buttonTextKey
@property (nonatomic) NSInteger foregroundContentMode; // ivar: _foregroundContentMode
@property (readonly, nonatomic) PKDiscoveryMedia *icon; // ivar: _icon
@property (weak, nonatomic) PKDiscoveryItem *item; // ivar: _item
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (retain, nonatomic) NSString *localizedButtonText; // ivar: _localizedButtonText
@property (retain, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (retain, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) NSArray *paymentNetworks;
@property (readonly, nonatomic) NSInteger paymentSetupMode;
@property (readonly, nonatomic) NSSet *productIdentifiers;
@property (readonly, nonatomic) NSString *referrerIdentifier;
@property (nonatomic, getter=shouldRoundIcon) BOOL roundIcon; // ivar: _roundIcon
@property (readonly, nonatomic) NSString *subtitleKey; // ivar: _subtitleKey
@property (readonly, nonatomic) NSString *titleKey; // ivar: _titleKey
@property (readonly, nonatomic) NSSet *transitNetworkIdentifiers;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 table:(id)arg1 ;


@end


#endif