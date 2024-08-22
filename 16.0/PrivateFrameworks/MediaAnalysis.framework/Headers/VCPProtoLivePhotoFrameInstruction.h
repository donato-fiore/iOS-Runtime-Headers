// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPPROTOLIVEPHOTOFRAMEINSTRUCTION_H
#define VCPPROTOLIVEPHOTOFRAMEINSTRUCTION_H

@class PBCodable;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;



@interface VCPProtoLivePhotoFrameInstruction : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

 {
    ? _homographyParams;
}


@property (nonatomic) NSInteger epoch; // ivar: _epoch
@property (nonatomic) int flags; // ivar: _flags
@property (readonly, nonatomic) *float homographyParams;
@property (readonly, nonatomic) NSUInteger homographyParamsCount;
@property (nonatomic) int timeScale; // ivar: _timeScale
@property (nonatomic) NSInteger timeValue; // ivar: _timeValue


+(id)resultFromLegacyDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)homographyParamAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)exportToLegacyDictionary;
-(void)addHomographyParam:(float)arg0 ;
-(void)clearHomographyParams;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif