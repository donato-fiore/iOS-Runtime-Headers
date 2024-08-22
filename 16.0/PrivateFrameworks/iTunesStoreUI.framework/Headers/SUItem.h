// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUITEM_H
#define SUITEM_H

@class NSString, NSDictionary, SSItemOffer, SSItemImageCollection, NSArray, NSDate, NSURL, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SUItem.h"
#import "SUItemContentRating.h"
#import "SUItemLink.h"
#import "SUItemReviewStatistics.h"

@interface SUItem : NSObject <NSCopying>

 {
    char _isInstalled;
    NSString *_releaseDateString;
    NSDictionary *_tellAFriendDictionary;
    NSDictionary *_tweetDictionary;
}


@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (copy, nonatomic) NSString *collectionName; // ivar: _collectionName
@property (retain, nonatomic) SUItem *containerItem; // ivar: _containerItem
@property (copy, nonatomic) NSString *containerName; // ivar: _containerName
@property (copy, nonatomic) SUItemContentRating *contentRating; // ivar: _contentRating
@property (copy, nonatomic) NSString *copyrightString; // ivar: _copyrightString
@property (readonly, nonatomic) SSItemOffer *defaultStoreOffer; // ivar: _defaultStoreOffer
@property (copy, nonatomic) NSString *disclaimerString; // ivar: _disclaimerString
@property (readonly, nonatomic, getter=isDownloadable) BOOL downloadable;
@property (readonly, nonatomic) SUItemLink *externalArtistPageLink;
@property (nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled; // ivar: _gameCenterEnabled
@property (copy, nonatomic) NSString *genreName; // ivar: _genreName
@property (copy, nonatomic) NSString *humanReadableDescription; // ivar: _humanReadableDescription
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (readonly, nonatomic) NSDictionary *itemDictionary; // ivar: _dictionary
@property (nonatomic) NSInteger itemDisplayType; // ivar: _itemDisplayType
@property (nonatomic) NSUInteger itemIdentifier; // ivar: _itemIdentifier
@property (copy, nonatomic) SSItemImageCollection *itemImageCollection; // ivar: _itemImageCollection
@property (copy, nonatomic) NSArray *itemLinks; // ivar: _itemLinks
@property (copy, nonatomic) NSString *itemMediaKind; // ivar: _itemMediaKind
@property (nonatomic) NSInteger itemType; // ivar: _itemType
@property (readonly, nonatomic) NSString *itemTypeString;
@property (retain, nonatomic) NSDate *releaseDate; // ivar: _releaseDate
@property (nonatomic) NSInteger representedItemCount; // ivar: _representedItemCount
@property (copy, nonatomic) SUItemReviewStatistics *reviewStatistics; // ivar: _reviewStatistics
@property (copy, nonatomic) NSString *secondaryTitle; // ivar: _secondaryTitle
@property (copy, nonatomic) NSString *softwareType; // ivar: _softwareType
@property (copy, nonatomic) NSArray *storeOffers; // ivar: _storeOffers
@property (readonly, nonatomic) NSString *tellAFriendBody;
@property (readonly, nonatomic) NSString *tellAFriendBodyMIMEType;
@property (readonly, nonatomic) NSURL *tellAFriendBodyURL;
@property (readonly, nonatomic) NSString *tellAFriendSubject;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *tweetInitialText;
@property (readonly, nonatomic) NSURL *tweetURL;
@property (copy, nonatomic) NSString *unmodifiedTitle; // ivar: _unmodifiedTitle
@property (retain, nonatomic) NSNumber *versionIdentifier; // ivar: _versionIdentifier
@property (copy, nonatomic) NSArray *versionOrdering; // ivar: _versionOrdering


-(BOOL)boolValueForProperty:(id)arg0 ;
-(BOOL)isDisplayable:(*id)arg0 ;
-(NSInteger)_linkTargetForTargetString:(id)arg0 typeString:(id)arg1 ;
-(NSInteger)_linkTypeForString:(id)arg0 ;
-(NSInteger)integerValueForProperty:(id)arg0 ;
-(id)_newItemLinkWithType:(NSInteger)arg0 URLKey:(id)arg1 titleKey:(id)arg2 ;
-(id)_newItemLinkWithType:(NSInteger)arg0 dictionary:(id)arg1 ;
-(id)_newPrimaryItemLink;
-(id)_squishImageForSquishDictionary:(id)arg0 ;
-(id)_valueForFirstAvailableKey:(id)arg0 ;
-(id)copyReleaseDateStringWithStyle:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateValueForProperty:(id)arg0 ;
-(id)firstItemLinkForType:(NSInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)itemLinksForType:(NSInteger)arg0 ;
-(id)relatedItemsForRelationType:(id)arg0 ;
-(id)storeOfferForIdentifier:(id)arg0 ;
-(id)stringValueForProperty:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)_reloadDefaultStoreOffer;
-(void)_reloadImagesAndLinksFromSquishes:(id)arg0 ;
-(void)_reloadItemImages;
-(void)_reloadItemLinks;
-(void)_reloadProperties;
-(void)_reloadStoreOffers;
-(void)dealloc;


@end


#endif