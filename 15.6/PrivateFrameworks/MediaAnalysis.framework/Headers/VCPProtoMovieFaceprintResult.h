// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPROTOMOVIEFACEPRINTRESULT_H
#define VCPPROTOMOVIEFACEPRINTRESULT_H

@class PBCodable, NSData;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;



@interface VCPProtoMovieFaceprintResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>



@property (nonatomic) unsigned int faceID; // ivar: _faceID
@property (retain, nonatomic) NSData *faceprintBlob; // ivar: _faceprintBlob


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