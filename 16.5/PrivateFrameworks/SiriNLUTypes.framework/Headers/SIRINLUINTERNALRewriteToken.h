// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALREWRITETOKEN_H
#define SIRINLUINTERNALREWRITETOKEN_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SIRINLUINTERNALRewriteToken : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat asrConfidence; // ivar: _asrConfidence
@property (nonatomic) unsigned int endIndex; // ivar: _endIndex
@property (nonatomic) BOOL hasAsrConfidence;
@property (nonatomic) BOOL hasEndIndex;
@property (readonly, nonatomic) BOOL hasPhoneSequence;
@property (nonatomic) BOOL hasRemoveSpaceAfter;
@property (nonatomic) BOOL hasStartIndex;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *phoneSequence; // ivar: _phoneSequence
@property (nonatomic) BOOL removeSpaceAfter; // ivar: _removeSpaceAfter
@property (nonatomic) unsigned int startIndex; // ivar: _startIndex
@property (retain, nonatomic) NSString *value; // ivar: _value


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