// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDSTOREFRONTPRESENTATION_H
#define GEOPDSTOREFRONTPRESENTATION_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOPDStorefrontView.h"

@interface GEOPDStorefrontPresentation : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOPDStorefrontView *_closeUpView;
    NSString *_overlayImageUrl;
    GEOPDStorefrontView *_standOffView;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOPDStorefrontView *closeUpView;
@property (readonly, nonatomic) BOOL hasCloseUpView;
@property (readonly, nonatomic) BOOL hasOverlayImageUrl;
@property (readonly, nonatomic) BOOL hasStandOffView;
@property (retain, nonatomic) NSString *overlayImageUrl;
@property (retain, nonatomic) GEOPDStorefrontView *standOffView;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif