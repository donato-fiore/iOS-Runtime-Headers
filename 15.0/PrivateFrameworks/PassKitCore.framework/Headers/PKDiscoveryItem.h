// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDISCOVERYITEM_H
#define PKDISCOVERYITEM_H

@class NSURL, NSArray;
@protocol NSSecureCoding, NSCopying;


#import "PKDiscoveryObject.h"

@interface PKDiscoveryItem : PKDiscoveryObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL entitledToForceLargeCard; // ivar: _entitledToForceLargeCard
@property (nonatomic, getter=hasHitMaxLargeViewCount) BOOL hitMaxLargeViewCount; // ivar: _hitMaxLargeViewCount
@property (copy, nonatomic) NSURL *layoutBundleURL; // ivar: _layoutBundleURL
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) BOOL shouldBadge; // ivar: _shouldBadge
@property (retain, nonatomic) NSArray *supportedLocalizations; // ivar: _supportedLocalizations
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isTerminalStatus;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateForRuleResult:(BOOL)arg0 ;
-(void)updateWithDiscoveryItem:(id)arg0 ;


@end


#endif