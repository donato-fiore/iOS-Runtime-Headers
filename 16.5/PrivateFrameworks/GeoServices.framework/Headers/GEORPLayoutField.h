// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPLAYOUTFIELD_H
#define GEORPLAYOUTFIELD_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEORPFeedbackLayoutFieldName.h"

@interface GEORPLayoutField : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_displayText;
    GEORPFeedbackLayoutFieldName *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _ordinal;
    int _type;
    BOOL _enabled;
    ? _flags;
}


@property (retain, nonatomic) NSString *displayText;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL hasDisplayText;
@property (nonatomic) BOOL hasEnabled;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasOrdinal;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) GEORPFeedbackLayoutFieldName *name;
@property (nonatomic) unsigned int ordinal;
@property (nonatomic) int type;


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
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif