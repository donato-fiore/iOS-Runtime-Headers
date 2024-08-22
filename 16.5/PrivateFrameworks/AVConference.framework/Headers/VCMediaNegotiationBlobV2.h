// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIANEGOTIATIONBLOBV2_H
#define VCMEDIANEGOTIATIONBLOBV2_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "VCMediaNegotiationBlobV2BandwidthSettings.h"
#import "VCMediaNegotiationBlobV2CameraSettingsU1.h"
#import "VCMediaNegotiationBlobV2CodecFeatures.h"
#import "VCMediaNegotiationBlobV2GeneralInfo.h"
#import "VCMediaNegotiationBlobV2MicrophoneSettingsU1.h"
#import "VCMediaNegotiationBlobV2MomentsSettings.h"

@interface VCMediaNegotiationBlobV2 : PBCodable <NSCopying>



@property (retain, nonatomic) VCMediaNegotiationBlobV2BandwidthSettings *bandwidthSettings; // ivar: _bandwidthSettings
@property (retain, nonatomic) VCMediaNegotiationBlobV2CameraSettingsU1 *cameraU1; // ivar: _cameraU1
@property (retain, nonatomic) VCMediaNegotiationBlobV2CodecFeatures *codecSupport; // ivar: _codecSupport
@property (retain, nonatomic) VCMediaNegotiationBlobV2GeneralInfo *generalInfo; // ivar: _generalInfo
@property (readonly, nonatomic) BOOL hasBandwidthSettings;
@property (readonly, nonatomic) BOOL hasCameraU1;
@property (readonly, nonatomic) BOOL hasCodecSupport;
@property (readonly, nonatomic) BOOL hasGeneralInfo;
@property (readonly, nonatomic) BOOL hasMicrophoneU1;
@property (readonly, nonatomic) BOOL hasMomentsSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobV2MicrophoneSettingsU1 *microphoneU1; // ivar: _microphoneU1
@property (retain, nonatomic) VCMediaNegotiationBlobV2MomentsSettings *momentsSettings; // ivar: _momentsSettings
@property (retain, nonatomic) NSMutableArray *streamGroups; // ivar: _streamGroups


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)streamGroupsAtIndex:(NSUInteger)arg0 ;
-(void)addStreamGroups:(id)arg0 ;
-(void)clearStreamGroups;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)printWithTitle:(id)arg0 logFile:(*void)arg1 ;
-(void)writeTo:(id)arg0 ;


@end


#endif