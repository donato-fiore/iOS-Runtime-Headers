// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPLACECOLLECTION_H
#define GEOPLACECOLLECTION_H

@class NSString, NSURL, NSArray, NSDate;
@protocol GEOMapItemPhoto, GEOCollectionPublisherAttribution;

#import <Foundation/Foundation.h>

#import "GEOPDPlaceCollection.h"
#import "GEOMapItemIdentifier.h"
#import "GEOPublisher.h"
#import "GEOPlaceCollectionPullQuote.h"

@interface GEOPlaceCollection : NSObject {
    GEOPDPlaceCollection *_collection;
}


@property (readonly, nonatomic) NSString *authorName;
@property (readonly, nonatomic) NSObject<GEOMapItemPhoto> *authorPhoto;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic) NSString *collectionDescription;
@property (readonly, nonatomic) NSString *collectionHTMLDescription;
@property (readonly, nonatomic) GEOMapItemIdentifier *collectionIdentifier;
@property (readonly, nonatomic) NSString *collectionLongTitle;
@property (readonly, nonatomic) NSString *collectionTitle;
@property (readonly, nonatomic) NSURL *collectionURL;
@property (readonly, nonatomic) NSArray *itemIds;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSUInteger numberOfItems;
@property (readonly, nonatomic) NSArray *photos;
@property (readonly, nonatomic) GEOPublisher *publisher; // ivar: _publisher
@property (readonly, nonatomic) NSObject<GEOCollectionPublisherAttribution> *publisherAttribution; // ivar: _publisherAttribution
@property (readonly, nonatomic) NSString *publisherAttributionIdentifierString; // ivar: _publisherAttributionIdentifierString
@property (readonly, nonatomic) GEOPlaceCollectionPullQuote *publisherBlockQuote;
@property (readonly, nonatomic) NSURL *publisherCollectionURL;
@property (readonly, nonatomic, getter=isSuppressed) BOOL suppressed;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCollection:(id)arg0 usingAttribution:(id)arg1 ;


@end


#endif