// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMPODCASTFEED_H
#define IMPODCASTFEED_H

@class NSString, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "IMPodcastFeedChannelItem.h"

@interface IMPodcastFeed : NSObject

@property (retain, nonatomic) NSString *artworkPrimaryColor; // ivar: _artworkPrimaryColor
@property (retain, nonatomic) NSString *author; // ivar: _author
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) IMPodcastFeedChannelItem *channelItem; // ivar: _channelItem
@property (retain, nonatomic) NSString *displayType; // ivar: _displayType
@property (retain, nonatomic) NSString *feedDescription; // ivar: _feedDescription
@property (retain, nonatomic) NSString *globalImageURL; // ivar: _globalImageURL
@property (retain, nonatomic) NSString *imageURL; // ivar: _imageURL
@property (nonatomic) BOOL isExplicit; // ivar: _isExplicit
@property (nonatomic) BOOL isNotSubscribable; // ivar: _isNotSubscribable
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (retain, nonatomic) NSArray *offers; // ivar: _offers
@property (retain, nonatomic) NSString *podcastStoreId; // ivar: _podcastStoreId
@property (nonatomic) BOOL preferredCategoryFound; // ivar: _preferredCategoryFound
@property (retain, nonatomic) NSString *provider; // ivar: _provider
@property (retain, nonatomic) NSString *resolvedFeedURL; // ivar: _resolvedFeedURL
@property (retain, nonatomic) NSString *shareURL; // ivar: _shareURL
@property (retain, nonatomic) NSString *showType; // ivar: _showType
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *uberBackgroundImageURL; // ivar: _uberBackgroundImageURL
@property (retain, nonatomic) NSString *uberBackgroundJoeColor; // ivar: _uberBackgroundJoeColor
@property (retain, nonatomic) NSString *updatedFeedURL; // ivar: _updatedFeedURL
@property (retain, nonatomic) NSString *webpageURL; // ivar: _webpageURL


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)offerTypesAsFlagBits;
-(id)init;


@end


#endif