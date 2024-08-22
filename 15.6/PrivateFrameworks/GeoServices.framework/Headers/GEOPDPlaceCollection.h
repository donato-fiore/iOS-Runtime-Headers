// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDPLACECOLLECTION_H
#define GEOPDPLACECOLLECTION_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOPDCaptionedPhoto.h"
#import "GEOPDMapsIdentifier.h"
#import "GEOPDPublisher.h"

@interface GEOPDPlaceCollection : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_authorName;
    GEOPDCaptionedPhoto *_authorPhoto;
    NSMutableArray *_collectionClassDisplayNames;
    NSMutableArray *_collectionClassSpokenNames;
    NSMutableArray *_collectionDescriptionBytes;
    NSMutableArray *_collectionDescriptionHtmls;
    NSMutableArray *_collectionDescriptions;
    GEOPDMapsIdentifier *_collectionId;
    NSMutableArray *_collectionItemDescriptionHtmls;
    NSMutableArray *_collectionItemDescriptions;
    NSMutableArray *_displayTitles;
    NSMutableArray *_itemIds;
    NSMutableArray *_longSpokenTitles;
    NSMutableArray *_longTitles;
    NSMutableArray *_mediaLinks;
    CGFloat _modifiedTime;
    NSMutableArray *_photos;
    NSMutableArray *_placeCollectionItems;
    GEOPDMapsIdentifier *_publisherId;
    GEOPDPublisher *_publisher;
    NSMutableArray *_spokenTitles;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _errorState;
    unsigned int _numItems;
    BOOL _enableFallbackImagesForItems;
    ? _flags;
}




+(id)collectionComponentsForPlaceData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)collectionDescription;
-(id)collectionHTMLDescription;
-(id)collectionLongTitle;
-(id)collectionTitle;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(id)publisherDescriptionOfCollectionItem;
-(id)publisherHTMLDescriptionOfCollectionItem;
-(void)writeTo:(id)arg0 ;


@end


#endif