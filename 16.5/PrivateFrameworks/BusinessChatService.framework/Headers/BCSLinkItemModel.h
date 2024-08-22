// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSLINKITEMMODEL_H
#define BCSLINKITEMMODEL_H

@class NSArray, NSDictionary, NSString, NSURL, NSNumber;
@protocol BSDescriptionProviding, BCSLinkItemDescribing, BCSItemIdentifying, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BCSLinkItemIdentifier.h"

@interface BCSLinkItemModel : NSObject <BSDescriptionProviding, BCSLinkItemDescribing, BCSItemIdentifying, NSCopying, NSSecureCoding>

 {
    BCSLinkItemIdentifier *_itemIdentifier;
    NSArray *_businessLinkContentItemModels;
    NSDictionary *_debugInfo;
}


@property (readonly, nonatomic) NSInteger action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *fullHash;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) NSString *heroImageURLString; // ivar: _heroImageURLString
@property (readonly, retain, nonatomic) NSString *iconImageURLString; // ivar: _iconImageURLString
@property (readonly, nonatomic) BOOL isPoweredBy; // ivar: _isPoweredBy
@property (readonly, nonatomic) NSObject *itemIdentifier;
@property (readonly, retain, nonatomic) NSURL *linkURL; // ivar: _linkURL
@property (readonly, retain, nonatomic) NSDictionary *mapIconStyleAttributes; // ivar: _mapIconStyleAttributes
@property (readonly, retain, nonatomic) NSNumber *mapItemMUID; // ivar: _mapItemMUID
@property (readonly, retain, nonatomic) NSURL *redirectURL; // ivar: _redirectURL
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger truncatedHash;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
+(id)linkItemModelsFromLinkJSONObj:(id)arg0 ;
+(id)linkItemModelsFromRecords:(id)arg0 ;
-(BOOL)matchesItemIdentifying:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLinkMessage:(id)arg0 bucketID:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif