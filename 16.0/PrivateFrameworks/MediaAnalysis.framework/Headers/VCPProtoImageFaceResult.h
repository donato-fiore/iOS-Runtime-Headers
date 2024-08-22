// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPPROTOIMAGEFACERESULT_H
#define VCPPROTOIMAGEFACERESULT_H

@class PBCodable;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;


#import "VCPProtoBounds.h"

@interface VCPProtoImageFaceResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) VCPProtoBounds *bounds; // ivar: _bounds
@property (nonatomic) int eyeExpression; // ivar: _eyeExpression
@property (nonatomic) float faceQuality; // ivar: _faceQuality
@property (nonatomic) BOOL hasFaceQuality;
@property (nonatomic) BOOL isCloseup; // ivar: _isCloseup
@property (nonatomic) int mouthExpression; // ivar: _mouthExpression
@property (nonatomic) int position; // ivar: _position
@property (nonatomic) int yaw; // ivar: _yaw


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