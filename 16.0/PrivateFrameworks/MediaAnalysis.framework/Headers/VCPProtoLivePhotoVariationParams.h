// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPPROTOLIVEPHOTOVARIATIONPARAMS_H
#define VCPPROTOLIVEPHOTOVARIATIONPARAMS_H

@class PBCodable;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;



@interface VCPProtoLivePhotoVariationParams : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasLoopFadeLen;
@property (nonatomic) BOOL hasLoopPeriod;
@property (nonatomic) BOOL hasLoopStart;
@property (nonatomic) int loopFadeLen; // ivar: _loopFadeLen
@property (nonatomic) int loopPeriod; // ivar: _loopPeriod
@property (nonatomic) int loopStart; // ivar: _loopStart


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