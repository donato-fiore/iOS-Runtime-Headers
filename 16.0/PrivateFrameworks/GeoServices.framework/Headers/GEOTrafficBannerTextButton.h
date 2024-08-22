// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTRAFFICBANNERTEXTBUTTON_H
#define GEOTRAFFICBANNERTEXTBUTTON_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOFormattedString.h"

@interface GEOTrafficBannerTextButton : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_text;
    int _action;
    int _buttonDisplay;
    ? _flags;
}


@property (nonatomic) int action;
@property (nonatomic) int buttonDisplay;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL hasButtonDisplay;
@property (readonly, nonatomic) BOOL hasText;
@property (retain, nonatomic) GEOFormattedString *text;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionAsString:(int)arg0 ;
-(id)buttonDisplayAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsAction:(id)arg0 ;
-(int)StringAsButtonDisplay:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif