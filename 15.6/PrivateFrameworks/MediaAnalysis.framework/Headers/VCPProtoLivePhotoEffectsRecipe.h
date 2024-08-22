// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPROTOLIVEPHOTOEFFECTSRECIPE_H
#define VCPPROTOLIVEPHOTOEFFECTSRECIPE_H

@class PBCodable, NSMutableArray;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;


#import "VCPProtoLivePhotoVariationParams.h"

@interface VCPProtoLivePhotoEffectsRecipe : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) VCPProtoLivePhotoVariationParams *autoloop; // ivar: _autoloop
@property (retain, nonatomic) VCPProtoLivePhotoVariationParams *bounce; // ivar: _bounce
@property (nonatomic) int cropRectHeight; // ivar: _cropRectHeight
@property (nonatomic) int cropRectWidth; // ivar: _cropRectWidth
@property (nonatomic) int cropRectX; // ivar: _cropRectX
@property (nonatomic) int cropRectY; // ivar: _cropRectY
@property (nonatomic) NSInteger epoch; // ivar: _epoch
@property (nonatomic) int flags; // ivar: _flags
@property (retain, nonatomic) NSMutableArray *frameInstructions; // ivar: _frameInstructions
@property (nonatomic) BOOL hasEpoch;
@property (nonatomic) BOOL hasFlags;
@property (retain, nonatomic) VCPProtoLivePhotoVariationParams *longexposure; // ivar: _longexposure
@property (nonatomic) int minVersion; // ivar: _minVersion
@property (nonatomic) NSInteger outputFrameDurValue; // ivar: _outputFrameDurValue
@property (retain, nonatomic) VCPProtoLivePhotoVariationParams *stabilize; // ivar: _stabilize
@property (nonatomic) int stabilizeResult; // ivar: _stabilizeResult
@property (nonatomic) int timeScale; // ivar: _timeScale
@property (nonatomic) int version; // ivar: _version


+(id)resultFromLegacyDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)exportToLegacyDictionary;
-(id)exportToLegacyDictionaryFromFrameInstruction:(id)arg0 ;
-(id)exportToLegacyDictionaryFromParam:(id)arg0 withLoopFlavor:(id)arg1 ;
-(id)frameInstructionsAtIndex:(NSUInteger)arg0 ;
-(void)addFrameInstructions:(id)arg0 ;
-(void)clearFrameInstructions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif