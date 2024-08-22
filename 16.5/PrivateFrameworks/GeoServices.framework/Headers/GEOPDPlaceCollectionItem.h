// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDPLACECOLLECTIONITEM_H
#define GEOPDPLACECOLLECTIONITEM_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOPDQuickLinkItem.h"
#import "GEOPDMapsIdentifier.h"

@interface GEOPDPlaceCollectionItem : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDQuickLinkItem *_appClip;
    NSMutableArray *_itemDescriptionBytes;
    NSMutableArray *_itemDescriptionHtmls;
    NSMutableArray *_itemDescriptions;
    GEOPDMapsIdentifier *_itemId;
    NSMutableArray *_photos;
    NSMutableArray *_punchOutTexts;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _disableAppClipFallback;
    BOOL _enableImageFallback;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)itemDescription;
-(id)itemHTMLDescription;
-(id)jsonRepresentation;
-(id)punchOutText;
-(void)writeTo:(id)arg0 ;


@end


#endif