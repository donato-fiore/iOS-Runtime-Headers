// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMPODCASTFEEDITEM_H
#define IMPODCASTFEEDITEM_H

@class NSString, NSDate;
@protocol MTFeedEpisode;

#import <Foundation/Foundation.h>


@interface IMPodcastFeedItem : NSObject <MTFeedEpisode>



@property (retain, nonatomic) NSString *author; // ivar: _author
@property (nonatomic) NSUInteger byteSize; // ivar: _byteSize
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSString *enclosureParameterString; // ivar: _enclosureParameterString
@property (retain, nonatomic) NSString *enclosureURL; // ivar: _enclosureURL
@property (nonatomic) CGFloat entitledDuration; // ivar: _entitledDuration
@property (retain, nonatomic) NSString *entitledEnclosureURL; // ivar: _entitledEnclosureURL
@property (retain, nonatomic) NSString *entitledPriceType; // ivar: _entitledPriceType
@property (nonatomic) NSInteger episodeNumber; // ivar: _episodeNumber
@property (retain, nonatomic) NSString *episodeStoreId; // ivar: _episodeStoreId
@property (retain, nonatomic) NSString *episodeType; // ivar: _episodeType
@property (retain, nonatomic) NSDate *firstTimeAvailableAsFree; // ivar: _firstTimeAvailableAsFree
@property (retain, nonatomic) NSDate *firstTimeAvailableAsPaid; // ivar: _firstTimeAvailableAsPaid
@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (nonatomic) BOOL isExplicit; // ivar: _isExplicit
@property (retain, nonatomic) NSString *itemDescription; // ivar: _itemDescription
@property (retain, nonatomic) NSString *itemDescriptionSourceElement; // ivar: _itemDescriptionSourceElement
@property (retain, nonatomic) NSString *itemSummary; // ivar: _itemSummary
@property (retain, nonatomic) NSString *itemSummarySourceElement; // ivar: _itemSummarySourceElement
@property (retain, nonatomic) NSString *itunesTitle; // ivar: _itunesTitle
@property (nonatomic) BOOL preferredCategoryFound; // ivar: _preferredCategoryFound
@property (retain, nonatomic) NSString *priceType; // ivar: _priceType
@property (retain, nonatomic) NSDate *pubDate; // ivar: _pubDate
@property (readonly, nonatomic) NSString *resolvedEnclosureUrl;
@property (nonatomic) NSInteger seasonNumber; // ivar: _seasonNumber
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) unsigned int trackNum; // ivar: _trackNum
@property (retain, nonatomic) NSString *uti; // ivar: _uti
@property (retain, nonatomic) NSString *webpageURL; // ivar: _webpageURL


-(BOOL)isEqual:(id)arg0 ;
-(id)description;


@end


#endif