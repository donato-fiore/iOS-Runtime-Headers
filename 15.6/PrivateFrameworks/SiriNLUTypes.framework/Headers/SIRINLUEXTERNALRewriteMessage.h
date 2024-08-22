// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUEXTERNALREWRITEMESSAGE_H
#define SIRINLUEXTERNALREWRITEMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SIRINLUEXTERNALRewriteMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasRewriteType;
@property (readonly, nonatomic) BOOL hasRewrittenUtterance;
@property (nonatomic) int rewriteType; // ivar: _rewriteType
@property (retain, nonatomic) NSString *rewrittenUtterance; // ivar: _rewrittenUtterance


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)rewriteTypeAsString:(int)arg0 ;
-(int)StringAsRewriteType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif