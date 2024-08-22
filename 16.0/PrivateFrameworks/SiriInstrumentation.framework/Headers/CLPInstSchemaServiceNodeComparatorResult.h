// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPINSTSCHEMASERVICENODECOMPARATORRESULT_H
#define CLPINSTSCHEMASERVICENODECOMPARATORRESULT_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface CLPInstSchemaServiceNodeComparatorResult : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int comparatorName; // ivar: _comparatorName
@property (nonatomic) BOOL hasComparatorName;
@property (nonatomic) BOOL hasIsMatched;
@property (nonatomic) BOOL hasIsValidOriginalItem;
@property (nonatomic) BOOL hasIsValidReplayedItem;
@property (nonatomic) BOOL isMatched; // ivar: _isMatched
@property (nonatomic) BOOL isValidOriginalItem; // ivar: _isValidOriginalItem
@property (nonatomic) BOOL isValidReplayedItem; // ivar: _isValidReplayedItem
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *mismatchedFields; // ivar: _mismatchedFields


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)mismatchedFieldsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addMismatchedFields:(NSUInteger)arg0 ;
-(void)clearMismatchedFields;
-(void)deleteComparatorName;
-(void)deleteIsMatched;
-(void)deleteIsValidOriginalItem;
-(void)deleteIsValidReplayedItem;
-(void)deleteMismatchedFields;
-(void)writeTo:(id)arg0 ;


@end


#endif