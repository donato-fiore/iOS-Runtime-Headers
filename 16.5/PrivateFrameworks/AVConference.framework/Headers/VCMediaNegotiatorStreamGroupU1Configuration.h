// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIANEGOTIATORSTREAMGROUPU1CONFIGURATION_H
#define VCMEDIANEGOTIATORSTREAMGROUPU1CONFIGURATION_H

@class NSSet, NSArray, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "VCVideoRuleCollections.h"

@interface VCMediaNegotiatorStreamGroupU1Configuration : NSObject <NSCopying>



@property (nonatomic) BOOL allowAudioRecording; // ivar: _allowAudioRecording
@property (retain, nonatomic) NSSet *audioPayloads; // ivar: _audioPayloads
@property (retain, nonatomic) NSArray *payloadPreference; // ivar: _payloadPreference
@property (nonatomic) unsigned int screenPixelCount; // ivar: _screenPixelCount
@property (nonatomic) unsigned int ssrc; // ivar: _ssrc
@property (retain, nonatomic) NSDictionary *videoFeatureStrings; // ivar: _videoFeatureStrings
@property (retain, nonatomic) NSArray *videoParameterSet; // ivar: _videoParameterSet
@property (retain, nonatomic) NSArray *videoPayloads; // ivar: _videoPayloads
@property (retain, nonatomic) VCVideoRuleCollections *videoRuleCollections; // ivar: _videoRuleCollections


+(BOOL)ssrcForStreamGroup:(unsigned int)arg0 localConfig:(id)arg1 ssrc:(*unsigned int)arg2 ;
+(BOOL)updateCommonNegotiatedVideoSettings:(id)arg0 localU1Config:(id)arg1 remoteU1Config:(id)arg2 ;
+(id)negotiatedAudioSettingsForGroupID:(unsigned int)arg0 localU1Config:(id)arg1 remoteU1Config:(id)arg2 ;
+(id)negotiatedCameraSettingsBetweenLocalU1Config:(id)arg0 remoteU1Config:(id)arg1 ;
+(id)negotiatedMicrophoneSettingsBetweenLocalU1Config:(id)arg0 remoteU1Config:(id)arg1 ;
+(id)negotiatedScreenSettingsBetweenLocalU1Config:(id)arg0 remoteU1Config:(id)arg1 ;
+(id)negotiatedSystemAudioSettingsBetweenLocalU1Config:(id)arg0 remoteU1Config:(id)arg1 ;
+(id)negotiatedVideoSettingsForGroupID:(unsigned int)arg0 localU1Config:(id)arg1 remoteU1Config:(id)arg2 ;
+(void)updateCameraU1Config:(id)arg0 localConfig:(id)arg1 ;
+(void)updateScreenU1Config:(id)arg0 localConfig:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initStreamGroupU1ConfigForGroupId:(unsigned int)arg0 withLocalConfig:(id)arg1 ;
-(id)initWithSSRC:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif