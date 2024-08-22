// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPROTOIMAGEBLURRESULT_H
#define VCPPROTOIMAGEBLURRESULT_H

@class PBCodable;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;



@interface VCPProtoImageBlurResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

 {
    ? _has;
}


@property (nonatomic) float faceSharpness; // ivar: _faceSharpness
@property (nonatomic) BOOL hasFaceSharpness;
@property (nonatomic) float sharpness; // ivar: _sharpness


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