// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPFEEDBACKFIELDOPTION_H
#define GEORPFEEDBACKFIELDOPTION_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEORPFeedbackFieldOptionAnnotations.h"

@interface GEORPFeedbackFieldOption : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEORPFeedbackFieldOptionAnnotations *_annotations;
    NSString *_defaultText;
    NSString *_localizedText;
    NSMutableArray *_tags;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _key;
    ? _flags;
}


@property (retain, nonatomic) GEORPFeedbackFieldOptionAnnotations *annotations;
@property (retain, nonatomic) NSString *defaultText;
@property (readonly, nonatomic) BOOL hasAnnotations;
@property (readonly, nonatomic) BOOL hasDefaultText;
@property (nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasLocalizedText;
@property (nonatomic) int key;
@property (retain, nonatomic) NSString *localizedText;
@property (retain, nonatomic) NSMutableArray *tags;


+(BOOL)isValid:(id)arg0 ;
+(Class)tagType;
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
-(id)keyAsString:(int)arg0 ;
-(id)tagAtIndex:(NSUInteger)arg0 ;
-(int)StringAsKey:(id)arg0 ;
-(void)addTag:(id)arg0 ;
-(void)clearTags;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif