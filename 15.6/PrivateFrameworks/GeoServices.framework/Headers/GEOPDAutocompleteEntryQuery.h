// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDAUTOCOMPLETEENTRYQUERY_H
#define GEOPDAUTOCOMPLETEENTRYQUERY_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOStyleAttributes.h"

@interface GEOPDAutocompleteEntryQuery : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_completion;
    NSMutableArray *_resultRefinements;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _tapBehavior;
    BOOL _queryHasAttributeIntentsInRefinements;
    BOOL _showIntermediateStateTapBehaviorListView;
    ? _flags;
}


@property (retain, nonatomic) NSString *completion;
@property (readonly, nonatomic) BOOL hasCompletion;
@property (nonatomic) BOOL hasQueryHasAttributeIntentsInRefinements;
@property (nonatomic) BOOL hasShowIntermediateStateTapBehaviorListView;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (nonatomic) BOOL hasTapBehavior;
@property (nonatomic) BOOL queryHasAttributeIntentsInRefinements;
@property (retain, nonatomic) NSMutableArray *resultRefinements;
@property (nonatomic) BOOL showIntermediateStateTapBehaviorListView;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (nonatomic) int tapBehavior;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)resultRefinementType;
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
-(id)resultRefinementAtIndex:(NSUInteger)arg0 ;
-(id)tapBehaviorAsString:(int)arg0 ;
-(int)StringAsTapBehavior:(id)arg0 ;
-(void)addResultRefinement:(id)arg0 ;
-(void)clearResultRefinements;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif