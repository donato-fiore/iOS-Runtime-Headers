// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPLOGENTRYVISIONVLLOCALIZATIONRESULT_H
#define CLPLOGENTRYVISIONVLLOCALIZATIONRESULT_H

@class PBCodable;
@protocol NSCopying;


#import "CLPLOGENTRYVISIONVLMatrixfMxN.h"
#import "CLPLOGENTRYVISIONVLLocalizationDebugInfo.h"
#import "CLPLOGENTRYVISIONVLLocation.h"
#import "CLPLOGENTRYVISIONTimeStamp.h"
#import "CLPLOGENTRYVISIONSimdDoubleMxN.h"

@interface CLPLOGENTRYVISIONVLLocalizationResult : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) float confidence; // ivar: _confidence
@property (retain, nonatomic) CLPLOGENTRYVISIONVLMatrixfMxN *covariance; // ivar: _covariance
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocalizationDebugInfo *debugInfo; // ivar: _debugInfo
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) BOOL hasCovariance;
@property (readonly, nonatomic) BOOL hasDebugInfo;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTransform;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocation *location; // ivar: _location
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *timestamp; // ivar: _timestamp
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleMxN *transform; // ivar: _transform


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif