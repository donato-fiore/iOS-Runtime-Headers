// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POMMESSCHEMAPOMMESPEGASUSRESPONSESERVERDRIVENCONTEXT_H
#define POMMESSCHEMAPOMMESPEGASUSRESPONSESERVERDRIVENCONTEXT_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface POMMESSchemaPOMMESPegasusResponseServerDrivenContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *catIds; // ivar: _catIds
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)catIdCount;
-(NSUInteger)hash;
-(id)catIdAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addCatId:(id)arg0 ;
-(void)clearCatId;
-(void)deleteCatId;
-(void)writeTo:(id)arg0 ;


@end


#endif