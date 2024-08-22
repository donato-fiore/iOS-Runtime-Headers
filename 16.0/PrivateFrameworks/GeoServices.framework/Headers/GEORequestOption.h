// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOREQUESTOPTION_H
#define GEOREQUESTOPTION_H

@class PBCodable, PBUnknownFields, NSString;
@protocol GEOSurchargeType, NSCopying, GEOServerFormattedString;


#import "GEOFormattedString.h"

@interface GEORequestOption : PBCodable <GEOSurchargeType, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_name;
    int _enumValue;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int enumValue;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *formattedName;
@property (nonatomic) BOOL hasEnumValue;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOFormattedString *name;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (readonly, nonatomic) int value;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif