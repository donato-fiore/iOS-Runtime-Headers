// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSESSIONMEDIASTREAMPRESENCECONFIGURATIONPROVIDER_H
#define VCSESSIONMEDIASTREAMPRESENCECONFIGURATIONPROVIDER_H

@class NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface VCSessionMediaStreamPresenceConfigurationProvider : NSObject {
    NSDictionary *_configuration;
}


@property (readonly, nonatomic) NSSet *streamGroupConfigurations; // ivar: _streamGroupConfigurations
@property (readonly, nonatomic) NSSet *streamInputConfigurations; // ivar: _streamInputConfigurations


+(id)bdatGroupDisabled;
+(id)bdatOldGroupDisabled;
+(id)defaultOneToOneTierTable:(unsigned int)arg0 ;
+(id)fdatGroupDisabled;
+(id)foregroundCameraOneToOneTierTable:(unsigned int)arg0 ;
+(id)ftxtGroupDisabled;
+(id)ftxtOldGroupDisabled;
+(id)loadSessionConfigurationWithResourceName:(id)arg0 ;
+(id)oneToOneTierTableForStreamGroupID:(unsigned int)arg0 splitType:(unsigned int)arg1 ;
+(id)publicSessionConfigurationForType:(unsigned int)arg0 ;
+(id)replaceTag:(id)arg0 ;
+(id)resourceNameForConfigurationType:(unsigned int)arg0 ;
+(id)screenStreamBaseTierFramerate;
+(id)sessionConfigurationForType:(unsigned int)arg0 ;
+(unsigned int)defaultRemainingBitrateSplit:(unsigned int)arg0 ;
+(unsigned int)foregroundCameraRemainingBitrateSplit:(unsigned int)arg0 ;
+(unsigned int)readUint32WithPList:(id)arg0 key:(id)arg1 defaultValue:(unsigned int)arg2 ;
+(unsigned int)remainingBitrateSplitQualityIndexForStreamGroup:(unsigned int)arg0 splitType:(unsigned int)arg1 ;
+(unsigned int)streamSSRCForStreamGroupID:(unsigned int)arg0 streamIndex:(int)arg1 ;
-(BOOL)addPayload:(int)arg0 audioStreamConfig:(id)arg1 supportedAudioRules:(id)arg2 ;
-(BOOL)checkEncoderSupportForCodecType:(NSInteger)arg0 ;
-(BOOL)checkEncoderSupportForConfig:(id)arg0 ;
-(BOOL)setupAudioRedWithPlist:(id)arg0 audioStreamConfig:(id)arg1 supportedAudioRules:(id)arg2 ;
-(BOOL)setupAudioRulesWithPList:(id)arg0 audioStreamConfig:(id)arg1 supportedAudioRules:(id)arg2 ;
-(BOOL)setupAudioStreamGroupStreams:(id)arg0 streamGroupConfig:(id)arg1 supportedAudioRules:(id)arg2 streamIDGenerator:(id)arg3 ;
-(BOOL)setupRedFactorsWithPList:(id)arg0 audioStreamConfig:(id)arg1 ;
-(BOOL)setupVideoStreamGroupStreams:(id)arg0 streamGroupConfig:(id)arg1 streamIDGenerator:(id)arg2 ;
-(NSInteger)getVideoCodecFromStreamCodecPList:(id)arg0 ;
-(id)getVideoCodecConfigFromStreamConfigPList:(id)arg0 ;
-(id)initWithConfigurationType:(unsigned int)arg0 supportedAudioRules:(id)arg1 streamIDGenerator:(id)arg2 ;
-(id)newAudioMultiwayConfigWithPList:(id)arg0 audioRules:(id)arg1 maxIDSStreamIDCount:(unsigned int)arg2 streamIDGenerator:(id)arg3 ssrc:(unsigned int)arg4 ;
-(id)newAudioStreamGroupStreamConfigWithPList:(id)arg0 supportedAudioRules:(id)arg1 maxIDSStreamIDCount:(unsigned int)arg2 streamIDGenerator:(id)arg3 ssrc:(unsigned int)arg4 groupID:(unsigned int)arg5 ;
-(id)newDataStreamInputConfigurationWithPList:(id)arg0 ;
-(id)newStreamGroupConfigurationWithPList:(id)arg0 supportedAudioRules:(id)arg1 streamIDGenerator:(id)arg2 ;
-(id)newStreamGroupConfigurationsWithSupportedAudioRules:(id)arg0 streamIDGenerator:(id)arg1 ;
-(id)newStreamInputConfigurations;
-(id)newVideoMultiwayConfigWithPList:(id)arg0 codecType:(NSInteger)arg1 streamIDGenerator:(id)arg2 ssrc:(unsigned int)arg3 ;
-(id)newVideoStreamGroupStreamConfigWithPList:(id)arg0 streamIDGenerator:(id)arg1 ssrc:(unsigned int)arg2 groupID:(unsigned int)arg3 shouldSkip:(*BOOL)arg4 ;
-(id)newVideoStreamInputConfigurationWithPList:(id)arg0 ;
-(unsigned short)setParentStreamID:(unsigned short)arg0 videoConfig:(id)arg1 ;
-(void)dealloc;
-(void)updateStreamConfig:(id)arg0 forPayload:(int)arg1 networkPayload:(unsigned int)arg2 groupID:(unsigned int)arg3 ;


@end


#endif