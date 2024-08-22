// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIANEGOTIATIONBLOBV2CODECFEATURES_H
#define VCMEDIANEGOTIATIONBLOBV2CODECFEATURES_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface VCMediaNegotiationBlobV2CodecFeatures : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL allowAudioRecording;
@property (nonatomic) unsigned int audioFeatures; // ivar: _audioFeatures
@property (nonatomic) BOOL hasAudioFeatures;
@property (readonly, nonatomic) BOOL hasVideoFeatures;
@property (retain, nonatomic) NSData *videoFeatures; // ivar: _videoFeatures


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithAllowAudioRecording:(BOOL)arg0 videoFeatures:(id)arg1 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)printWithLogFile:(*void)arg0 prefix:(id)arg1 ;
-(void)writeTo:(id)arg0 ;


@end


#endif