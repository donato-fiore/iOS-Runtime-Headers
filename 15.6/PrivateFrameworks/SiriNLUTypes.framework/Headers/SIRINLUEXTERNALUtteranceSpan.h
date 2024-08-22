// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUEXTERNALUTTERANCESPAN_H
#define SIRINLUEXTERNALUTTERANCESPAN_H

@class PBCodable;
@protocol NSCopying;



@interface SIRINLUEXTERNALUtteranceSpan : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int endIndex; // ivar: _endIndex
@property (nonatomic) int endMilliSeconds; // ivar: _endMilliSeconds
@property (nonatomic) unsigned int endUnicodeScalarIndex; // ivar: _endUnicodeScalarIndex
@property (nonatomic) BOOL hasEndIndex;
@property (nonatomic) BOOL hasEndMilliSeconds;
@property (nonatomic) BOOL hasEndUnicodeScalarIndex;
@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) BOOL hasStartMilliSeconds;
@property (nonatomic) BOOL hasStartUnicodeScalarIndex;
@property (nonatomic) unsigned int startIndex; // ivar: _startIndex
@property (nonatomic) int startMilliSeconds; // ivar: _startMilliSeconds
@property (nonatomic) unsigned int startUnicodeScalarIndex; // ivar: _startUnicodeScalarIndex


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif