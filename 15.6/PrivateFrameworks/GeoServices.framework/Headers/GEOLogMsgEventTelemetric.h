// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGEVENTTELEMETRIC_H
#define GEOLOGMSGEVENTTELEMETRIC_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgEventTelemetric : PBCodable <NSCopying>

 {
    NSMutableArray *_telemetricEntitys;
}


@property (retain, nonatomic) NSMutableArray *telemetricEntitys;


+(BOOL)isValid:(id)arg0 ;
+(Class)telemetricEntityType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)telemetricEntityAtIndex:(NSUInteger)arg0 ;
-(void)addTelemetricEntity:(id)arg0 ;
-(void)clearTelemetricEntitys;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif