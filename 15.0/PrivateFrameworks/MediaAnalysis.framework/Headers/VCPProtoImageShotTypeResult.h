// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPPROTOIMAGESHOTTYPERESULT_H
#define VCPPROTOIMAGESHOTTYPERESULT_H

@class PBCodable;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;



@interface VCPProtoImageShotTypeResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>



@property (nonatomic) int shotType; // ivar: _shotType


+(id)resultFromLegacyDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)exportToLegacyDictionary;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif