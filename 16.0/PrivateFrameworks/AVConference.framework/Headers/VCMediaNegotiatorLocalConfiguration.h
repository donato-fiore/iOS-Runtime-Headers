// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMEDIANEGOTIATORLOCALCONFIGURATION_H
#define VCMEDIANEGOTIATORLOCALCONFIGURATION_H

@class NSSet, NSString, NSMutableOrderedSet, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "VCMediaNegotiatorAudioConfiguration.h"
#import "VCVideoRuleCollections.h"

@interface VCMediaNegotiatorLocalConfiguration : NSObject <NSCopying>

 {
    CGSize _mismatchedLandscapeAspectRatio;
}


@property (nonatomic) BOOL SIPDisabled; // ivar: _SIPDisabled
@property (nonatomic) BOOL allowRTCPFB; // ivar: _allowRTCPFB
@property (nonatomic) BOOL alwaysOnAudRedEnabled; // ivar: _alwaysOnAudRedEnabled
@property (nonatomic) BOOL alwaysOnAudioRedundancyEnabled; // ivar: _alwaysOnAudioRedundancyEnabled
@property (readonly, nonatomic) CGSize aspectRatioLandscape; // ivar: _aspectRatioLandscape
@property (readonly, nonatomic) CGSize aspectRatioPortrait; // ivar: _aspectRatioPortrait
@property (retain, nonatomic) VCMediaNegotiatorAudioConfiguration *audioConfiguration; // ivar: _audioConfiguration
@property (retain, nonatomic) NSSet *bandwidthConfigurations; // ivar: _bandwidthConfigurations
@property (retain, nonatomic) NSString *basebandCodec; // ivar: _basebandCodec
@property (nonatomic) unsigned int basebandCodecSampleRate; // ivar: _basebandCodecSampleRate
@property (nonatomic) *void callLogFile; // ivar: _callLogFile
@property (retain, nonatomic) NSSet *captionsReceiverLanguages; // ivar: _captionsReceiverLanguages
@property (retain, nonatomic) NSSet *captionsSenderLanguages; // ivar: _captionsSenderLanguages
@property (nonatomic) unk creationTime; // ivar: _creationTime
@property (nonatomic) unsigned int customVideoHeight; // ivar: _customVideoHeight
@property (nonatomic) unsigned int customVideoWidth; // ivar: _customVideoWidth
@property (nonatomic) int deviceRole; // ivar: _deviceRole
@property (nonatomic) BOOL duplicateImportantPktsEnabled; // ivar: _duplicateImportantPktsEnabled
@property (nonatomic) unsigned int faceTimeSwitches; // ivar: _faceTimeSwitches
@property (nonatomic) BOOL fastMediaDuplicationEnabled; // ivar: _fastMediaDuplicationEnabled
@property (retain, nonatomic) NSSet *hdrModesSupported; // ivar: _hdrModesSupported
@property (nonatomic) BOOL highFecEnabled; // ivar: _highFecEnabled
@property (nonatomic) BOOL iRATRtpEnabled; // ivar: _iRATRtpEnabled
@property (nonatomic) BOOL isCaller; // ivar: _isCaller
@property (nonatomic) unsigned char linkProbingCapabilityVersion; // ivar: _linkProbingCapabilityVersion
@property (nonatomic) BOOL lowFpsVideoEnabled; // ivar: _lowFpsVideoEnabled
@property (nonatomic) BOOL ltrpEnabled; // ivar: _ltrpEnabled
@property (nonatomic) unsigned char mediaControlInfoFECFeedbackVersion; // ivar: _mediaControlInfoFECFeedbackVersion
@property (nonatomic) unsigned char mediaControlInfoVersion; // ivar: _mediaControlInfoVersion
@property (retain, nonatomic) NSSet *momentsImageTypes; // ivar: _momentsImageTypes
@property (retain, nonatomic) NSSet *momentsVideoCodecs; // ivar: _momentsVideoCodecs
@property (retain, nonatomic) NSMutableOrderedSet *multiwayAudioStreams; // ivar: _multiwayAudioStreams
@property (retain, nonatomic) NSMutableOrderedSet *multiwayVideoStreams; // ivar: _multiwayVideoStreams
@property (nonatomic) BOOL oneToOneModeSupported; // ivar: _oneToOneModeSupported
@property (readonly, nonatomic) CGSize orientationMismatchAspectRatioLandscape; // ivar: _orientationMismatchAspectRatioLandscape
@property (retain, nonatomic) NSSet *pixelFormats; // ivar: _pixelFormats
@property (nonatomic) BOOL preWarmCellEnabled; // ivar: _preWarmCellEnabled
@property (nonatomic) int preferredAudioCodec; // ivar: _preferredAudioCodec
@property (nonatomic) BOOL rampDownBWDropEnabled; // ivar: _rampDownBWDropEnabled
@property (retain, nonatomic) VCVideoRuleCollections *screenRuleCollections; // ivar: _screenRuleCollections
@property (nonatomic) unsigned int screenSSRC; // ivar: _screenSSRC
@property (readonly, nonatomic) CGSize screenSize; // ivar: _screenSize
@property (nonatomic) BOOL secureMessagingRequired; // ivar: _secureMessagingRequired
@property (readonly, nonatomic) NSSet *streamGroupConfigs; // ivar: _streamGroupConfigs
@property (nonatomic) unsigned int tilesPerVideoFrame; // ivar: _tilesPerVideoFrame
@property (retain, nonatomic) NSDictionary *videoFeatureStrings; // ivar: _videoFeatureStrings
@property (retain, nonatomic) VCVideoRuleCollections *videoRuleCollections; // ivar: _videoRuleCollections
@property (nonatomic) unsigned int videoSSRC; // ivar: _videoSSRC
@property (nonatomic) BOOL vplrFecEnabled; // ivar: _vplrFecEnabled


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualBandwidthConfigurations:(id)arg0 ;
-(BOOL)isEqualFaceTimeSettings:(id)arg0 ;
-(BOOL)isEqualFeatureStrings:(id)arg0 ;
-(BOOL)isEqualMomentsImageTypes:(id)arg0 ;
-(BOOL)isEqualMomentsVideoCodecs:(id)arg0 ;
-(BOOL)isEqualMultiwayAudioStreamSet:(id)arg0 ;
-(BOOL)isEqualMultiwayVideoStreamSet:(id)arg0 ;
-(BOOL)isEqualStreamGroupConfigs:(id)arg0 ;
-(BOOL)setupBandwidthConfigurationsWithArbiter:(id)arg0 ;
-(BOOL)setupBandwidthExtensionConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBitrateArbiter:(id)arg0 ;
-(void)addBandwidthConfiguration:(id)arg0 ;
-(void)addMultiwayAudioStream:(id)arg0 ;
-(void)addMultiwayVideoStream:(id)arg0 ;
-(void)addStreamGroupConfig:(id)arg0 ;
-(void)dealloc;
-(void)resetStreamGroups;


@end


#endif