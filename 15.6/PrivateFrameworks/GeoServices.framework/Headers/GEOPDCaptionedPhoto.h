// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDCAPTIONEDPHOTO_H
#define GEOPDCAPTIONEDPHOTO_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOPDAttribution.h"
#import "GEOPDJoeColor.h"
#import "GEOPDPhoto.h"

@interface GEOPDCaptionedPhoto : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAttribution *_attribution;
    NSString *_author;
    NSString *_caption;
    CGFloat _dateAdded;
    GEOPDJoeColor *_joeColor;
    NSString *_licenseDescription;
    NSString *_licenseUrl;
    GEOPDPhoto *_photo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _displayFullPhotoInline;
    BOOL _displayFullScreenPhotoGallery;
    BOOL _highQuality;
    BOOL _isBusinessOwned;
    BOOL _useGallery;
    ? _flags;
}




+(id)captionedPhotosForPlaceData:(id)arg0 ;
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