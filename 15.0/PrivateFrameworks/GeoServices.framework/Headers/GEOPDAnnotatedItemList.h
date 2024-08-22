// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDANNOTATEDITEMLIST_H
#define GEOPDANNOTATEDITEMLIST_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOPDPictureItemContainer.h"
#import "GEOPDTextItemContainer.h"

@interface GEOPDAnnotatedItemList : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDPictureItemContainer *_picItemContainer;
    GEOPDTextItemContainer *_textItemContainer;
    NSString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _annotatedItemStyle;
    ? _flags;
}




+(id)annotatedItemListForPlaceData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif