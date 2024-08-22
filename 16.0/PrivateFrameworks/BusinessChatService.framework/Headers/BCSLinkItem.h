// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSLINKITEM_H
#define BCSLINKITEM_H

@class NSString, NSDictionary, NSURL, NSNumber;
@protocol BSDescriptionProviding, BCSLinkItemDescribing, BCSBusinessLinkContentItemDescribing, NSCopying, BCSLocaleHelperProtocol;


#import "BCSItem.h"
#import "BCSBusinessLinkContentItem.h"
#import "BCSLinkItemModel.h"

@interface BCSLinkItem : BCSItem <BSDescriptionProviding, BCSLinkItemDescribing, BCSBusinessLinkContentItemDescribing, NSCopying>

 {
    NSString *_cachedContentItemLanguage;
    BCSBusinessLinkContentItem *_cachedContentItem;
}


@property (readonly, nonatomic) NSInteger action;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BCSBusinessLinkContentItem *businessLinkContentItem;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *debugInfo;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *fullHash;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) NSURL *heroImageURL;
@property (readonly, retain, nonatomic) NSString *heroImageURLString;
@property (readonly, retain, nonatomic) NSURL *iconImageURL;
@property (readonly, retain, nonatomic) NSString *iconImageURLString;
@property (readonly, nonatomic) BOOL isPoweredBy;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, retain, nonatomic) NSURL *linkURL;
@property (readonly, nonatomic) NSObject<BCSLocaleHelperProtocol> *localeHelper; // ivar: _localeHelper
@property (readonly, retain, nonatomic) NSDictionary *mapIconStyleAttributes;
@property (readonly, retain, nonatomic) NSNumber *mapItemMUID;
@property (readonly, nonatomic) BCSLinkItemModel *model; // ivar: _model
@property (readonly, retain, nonatomic) NSURL *redirectURL;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


+(id)linkItemsFromLinkItemModels:(id)arg0 ;
-(BOOL)matchesItemIdentifying:(id)arg0 ;
-(NSInteger)truncatedHash;
-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)heroImageURLForSpecifier:(struct ? )arg0 ;
-(id)iconImageURLForSpecifier:(struct ? )arg0 ;
-(id)initWithLinkItemModel:(id)arg0 expirationDate:(id)arg1 localeHelper:(id)arg2 ;
-(id)initWithLinkItemModel:(id)arg0 localeHelper:(id)arg1 ;
-(id)itemIdentifier;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif