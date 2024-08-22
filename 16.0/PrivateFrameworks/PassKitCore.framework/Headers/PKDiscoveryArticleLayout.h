// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISCOVERYARTICLELAYOUT_H
#define PKDISCOVERYARTICLELAYOUT_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKDiscoveryCard.h"
#import "PKDiscoveryCallToAction.h"
#import "PKDiscoveryItem.h"
#import "PKMiniDiscoveryCard.h"

@interface PKDiscoveryArticleLayout : NSObject <NSSecureCoding>



@property (copy, nonatomic) id *actionOnDismiss; // ivar: _actionOnDismiss
@property (readonly, nonatomic) PKDiscoveryCard *card; // ivar: _card
@property (readonly, nonatomic) BOOL entitledToForceLargeCard; // ivar: _entitledToForceLargeCard
@property (readonly, nonatomic) PKDiscoveryCallToAction *footerLockup; // ivar: _footerLockup
@property (readonly, nonatomic, getter=hasHitMaxLargeViewCount) BOOL hitMaxLargeViewCount; // ivar: _hitMaxLargeViewCount
@property (retain, nonatomic) PKDiscoveryItem *item; // ivar: _item
@property (retain, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) PKMiniDiscoveryCard *miniCard; // ivar: _miniCard
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic, getter=hasRequestedBadge) BOOL requestedBadge; // ivar: _requestedBadge
@property (readonly, nonatomic) NSArray *shelves; // ivar: _shelves
@property (readonly, nonatomic) NSInteger variant; // ivar: _variant
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualForUI:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 table:(id)arg1 ;


@end


#endif