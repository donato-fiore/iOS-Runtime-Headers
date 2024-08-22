// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOFORMATTEDSTRING_H
#define GEOFORMATTEDSTRING_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString, NSArray;
@protocol GEOServerFormattedString, NSCopying, GEOServerConditionalString;


#import "GEOConditionalFormattedString.h"
#import "GEOFormattedStringMetaData.h"

@interface GEOFormattedString : PBCodable <GEOServerFormattedString, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOConditionalFormattedString *_alternativeString;
    NSMutableArray *_formatArguments;
    NSMutableArray *_formatStrings;
    NSMutableArray *_formatStyles;
    GEOFormattedStringMetaData *_metaData;
    NSMutableArray *_separators;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) NSObject<GEOServerConditionalString> *alternativeString;
@property (retain, nonatomic) GEOConditionalFormattedString *alternativeString;
@property (readonly, nonatomic) NSString *basicString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *formatArguments;
@property (readonly, nonatomic) NSArray *formatStrings;
@property (retain, nonatomic) NSMutableArray *formatStrings;
@property (readonly, nonatomic) NSArray *formatStyles;
@property (retain, nonatomic) NSMutableArray *formatStyles;
@property (readonly, nonatomic) NSArray *formatTokens;
@property (readonly, nonatomic) BOOL hasAlternativeString;
@property (readonly, nonatomic) BOOL hasMetaData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPrivate;
@property (retain, nonatomic) GEOFormattedStringMetaData *metaData;
@property (readonly, nonatomic) NSArray *separators;
@property (retain, nonatomic) NSMutableArray *separators;
@property (readonly, nonatomic) NSString *stringWithDefaultValues;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)formatArgumentType;
+(Class)formatStringType;
+(Class)formatStyleType;
+(Class)separatorType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)_joinFormattedComponentsWithSeparators:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)formatArgumentAtIndex:(NSUInteger)arg0 ;
-(id)formatStringAtIndex:(NSUInteger)arg0 ;
-(id)formatStyleAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)jsonRepresentation;
-(id)separatorAtIndex:(NSUInteger)arg0 ;
-(void)addFormatArgument:(id)arg0 ;
-(void)addFormatString:(id)arg0 ;
-(void)addFormatStyle:(id)arg0 ;
-(void)addSeparator:(id)arg0 ;
-(void)clearFormatArguments;
-(void)clearFormatStrings;
-(void)clearFormatStyles;
-(void)clearSeparators;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif