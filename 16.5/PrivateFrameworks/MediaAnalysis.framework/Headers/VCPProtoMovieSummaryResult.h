// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPPROTOMOVIESUMMARYRESULT_H
#define VCPPROTOMOVIESUMMARYRESULT_H

@class PBCodable;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;


#import "VCPProtoVideoKeyFrame.h"
#import "VCPProtoBounds.h"
#import "VCPProtoTimeRange.h"

@interface VCPProtoMovieSummaryResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>



@property (nonatomic) BOOL autoPlayable; // ivar: _autoPlayable
@property (nonatomic) float curationScore; // ivar: _curationScore
@property (readonly, nonatomic) BOOL hasKeyFrame;
@property (readonly, nonatomic) BOOL hasPlaybackCrop;
@property (retain, nonatomic) VCPProtoVideoKeyFrame *keyFrame; // ivar: _keyFrame
@property (retain, nonatomic) VCPProtoBounds *playbackCrop; // ivar: _playbackCrop
@property (retain, nonatomic) VCPProtoTimeRange *timeRange; // ivar: _timeRange


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