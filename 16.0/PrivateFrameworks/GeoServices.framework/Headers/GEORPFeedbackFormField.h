// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPFEEDBACKFORMFIELD_H
#define GEORPFEEDBACKFORMFIELD_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEORPFeedbackFormFieldAnnotations.h"
#import "GEORPFeedbackFieldValue.h"

@interface GEORPFeedbackFormField : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEORPFeedbackFormFieldAnnotations *_annotations;
    NSString *_fieldId;
    NSString *_formId;
    NSString *_parentFieldId;
    NSMutableArray *_tags;
    GEORPFeedbackFieldValue *_value;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _name;
    ? _flags;
}


@property (retain, nonatomic) GEORPFeedbackFormFieldAnnotations *annotations;
@property (retain, nonatomic) NSString *fieldId;
@property (retain, nonatomic) NSString *formId;
@property (readonly, nonatomic) BOOL hasAnnotations;
@property (readonly, nonatomic) BOOL hasFieldId;
@property (readonly, nonatomic) BOOL hasFormId;
@property (nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasParentFieldId;
@property (readonly, nonatomic) BOOL hasValue;
@property (nonatomic) int name;
@property (retain, nonatomic) NSString *parentFieldId;
@property (retain, nonatomic) NSMutableArray *tags;
@property (retain, nonatomic) GEORPFeedbackFieldValue *value;


+(BOOL)isValid:(id)arg0 ;
+(Class)tagType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
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
-(id)nameAsString:(int)arg0 ;
-(id)tagAtIndex:(NSUInteger)arg0 ;
-(int)StringAsName:(id)arg0 ;
-(void)addTag:(id)arg0 ;
-(void)clearTags;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif