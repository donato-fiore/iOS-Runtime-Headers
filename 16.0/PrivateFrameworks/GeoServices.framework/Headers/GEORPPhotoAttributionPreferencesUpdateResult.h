// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPPHOTOATTRIBUTIONPREFERENCESUPDATERESULT_H
#define GEORPPHOTOATTRIBUTIONPREFERENCESUPDATERESULT_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEORPPhotoAttributionPreferences.h"

@interface GEORPPhotoAttributionPreferencesUpdateResult : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _errors;
    GEORPPhotoAttributionPreferences *_preferences;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *int errors;
@property (readonly, nonatomic) NSUInteger errorsCount;
@property (readonly, nonatomic) BOOL hasPreferences;
@property (retain, nonatomic) GEORPPhotoAttributionPreferences *preferences;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)errorsAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsErrors:(id)arg0 ;
-(int)errorsAtIndex:(NSUInteger)arg0 ;
-(void)addErrors:(int)arg0 ;
-(void)clearErrors;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif