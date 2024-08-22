// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUEXTERNALUUID_H
#define SIRINLUEXTERNALUUID_H

@class PBCodable;
@protocol NSCopying;



@interface SIRINLUEXTERNALUUID : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasHighInt;
@property (nonatomic) BOOL hasLowInt;
@property (nonatomic) BOOL hasNamespaceA;
@property (nonatomic) NSUInteger highInt; // ivar: _highInt
@property (nonatomic) NSUInteger lowInt; // ivar: _lowInt
@property (nonatomic) int namespaceA; // ivar: _namespaceA


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)namespaceAAsString:(int)arg0 ;
-(int)StringAsNamespaceA:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif