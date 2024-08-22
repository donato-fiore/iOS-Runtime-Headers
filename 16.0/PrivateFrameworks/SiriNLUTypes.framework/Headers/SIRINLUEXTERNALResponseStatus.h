// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUEXTERNALRESPONSESTATUS_H
#define SIRINLUEXTERNALRESPONSESTATUS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SIRINLUEXTERNALResponseStatus : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int code; // ivar: _code
@property (retain, nonatomic) NSString *descriptionA; // ivar: _descriptionA
@property (nonatomic) BOOL hasCode;
@property (readonly, nonatomic) BOOL hasDescriptionA;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)codeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCode:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif