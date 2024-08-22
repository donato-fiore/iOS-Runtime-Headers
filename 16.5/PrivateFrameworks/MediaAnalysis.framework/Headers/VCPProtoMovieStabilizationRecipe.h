// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPPROTOMOVIESTABILIZATIONRECIPE_H
#define VCPPROTOMOVIESTABILIZATIONRECIPE_H

@class PBCodable;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;



@interface VCPProtoMovieStabilizationRecipe : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

 {
    ? _homographyParams;
    ? _timeValues;
}


@property (nonatomic) float cropRectHeight; // ivar: _cropRectHeight
@property (nonatomic) float cropRectWidth; // ivar: _cropRectWidth
@property (nonatomic) float cropRectX; // ivar: _cropRectX
@property (nonatomic) float cropRectY; // ivar: _cropRectY
@property (readonly, nonatomic) *float homographyParams;
@property (readonly, nonatomic) NSUInteger homographyParamsCount;
@property (nonatomic) float inputBoundsHeight; // ivar: _inputBoundsHeight
@property (nonatomic) float inputBoundsWidth; // ivar: _inputBoundsWidth
@property (nonatomic) float inputBoundsX; // ivar: _inputBoundsX
@property (nonatomic) float inputBoundsY; // ivar: _inputBoundsY
@property (nonatomic) float sourceSizeHeight; // ivar: _sourceSizeHeight
@property (nonatomic) float sourceSizeWidth; // ivar: _sourceSizeWidth
@property (nonatomic) int timeScale; // ivar: _timeScale
@property (readonly, nonatomic) *NSInteger timeValues;
@property (readonly, nonatomic) NSUInteger timeValuesCount;


+(id)resultFromLegacyDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)timeValueAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(float)homographyParamsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)exportToLegacyDictionary;
-(void)addHomographyParams:(float)arg0 ;
-(void)addTimeValue:(NSInteger)arg0 ;
-(void)clearHomographyParams;
-(void)clearTimeValues;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif