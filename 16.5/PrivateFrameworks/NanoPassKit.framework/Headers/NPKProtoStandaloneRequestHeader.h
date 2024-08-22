// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSTANDALONEREQUESTHEADER_H
#define NPKPROTOSTANDALONEREQUESTHEADER_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface NPKProtoStandaloneRequestHeader : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *cachedHeroImages; // ivar: _cachedHeroImages
@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (readonly, nonatomic) BOOL hasStepIdentifier;
@property (nonatomic) int protocolVersion; // ivar: _protocolVersion
@property (retain, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (retain, nonatomic) NSString *stepIdentifier; // ivar: _stepIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cachedHeroImagesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)protocolVersionAsString:(int)arg0 ;
-(int)StringAsProtocolVersion:(id)arg0 ;
-(void)addCachedHeroImages:(id)arg0 ;
-(void)clearCachedHeroImages;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif