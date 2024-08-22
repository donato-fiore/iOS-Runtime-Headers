// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSERVERPODCASTEPISODE_H
#define MTSERVERPODCASTEPISODE_H

@class NSString, NSDate;
@protocol MTFeedEpisode, _TtP18PodcastsFoundation11MediaObject_;

#import <Foundation/Foundation.h>


@interface MTServerPodcastEpisode : NSObject <MTFeedEpisode, _TtP18PodcastsFoundation11MediaObject_>

 {
    ? id;
    ? type;
    ? href;
    ? attributes;
    ? relationships;
}


@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) NSUInteger byteSize;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) CGFloat duration;
@property (nonatomic, readonly) NSString *enclosureURL;
@property (nonatomic, readonly) CGFloat entitledDuration;
@property (nonatomic, readonly) NSString *entitledEnclosureURL;
@property (nonatomic, readonly) NSString *entitledPriceType;
@property (nonatomic, readonly) NSInteger episodeNumber;
@property (nonatomic, readonly) NSString *episodeStoreId;
@property (nonatomic, readonly) NSString *episodeType;
@property (nonatomic, readonly) NSDate *firstTimeAvailableAsFree;
@property (nonatomic, readonly) NSDate *firstTimeAvailableAsPaid;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) BOOL isExplicit;
@property (nonatomic, readonly) BOOL isRestricted;
@property (nonatomic, readonly) NSString *itemDescription;
@property (nonatomic, readonly) NSString *itemSummary;
@property (nonatomic, readonly) NSString *itunesTitle;
@property (nonatomic, readonly) NSString *priceType;
@property (nonatomic, readonly) BOOL priceTypeIsPSUB;
@property (nonatomic, readonly) NSDate *pubDate;
@property (nonatomic, readonly) NSString *resolvedEnclosureUrl;
@property (nonatomic, readonly) NSInteger seasonNumber;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned int trackNum;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *uti;
@property (nonatomic, readonly) NSString *webpageURL;


-(id)init;


@end


#endif