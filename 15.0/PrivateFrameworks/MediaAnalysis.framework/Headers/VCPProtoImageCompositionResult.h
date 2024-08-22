// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPPROTOIMAGECOMPOSITIONRESULT_H
#define VCPPROTOIMAGECOMPOSITIONRESULT_H

@class PBCodable;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;


#import "VCPProtoLine.h"
#import "VCPProtoPoint.h"

@interface VCPProtoImageCompositionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>



@property (nonatomic) float confidence; // ivar: _confidence
@property (retain, nonatomic) VCPProtoLine *dominantLine; // ivar: _dominantLine
@property (retain, nonatomic) VCPProtoPoint *vanishingPoint; // ivar: _vanishingPoint


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