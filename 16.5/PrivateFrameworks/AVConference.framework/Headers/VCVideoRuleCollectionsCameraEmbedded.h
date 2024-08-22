// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVIDEORULECOLLECTIONSCAMERAEMBEDDED_H
#define VCVIDEORULECOLLECTIONSCAMERAEMBEDDED_H

@protocol VCHardwareSettingsEmbeddedProtocol;


#import "VCVideoRuleCollectionsCamera.h"

@interface VCVideoRuleCollectionsCameraEmbedded : VCVideoRuleCollectionsCamera {
    id<VCHardwareSettingsEmbeddedProtocol> *_hardwareSettings;
}




+(id)sharedInstance;
-(BOOL)isPreferredVideoRule:(id)arg0 preferredFormat:(id)arg1 ;
-(BOOL)setupH264Rules;
-(BOOL)setupHEVCRules;
-(BOOL)setupRules;
-(BOOL)setupVideoRulesForPayload:(int)arg0 transportType:(unsigned char)arg1 encodingType:(unsigned char)arg2 formatList:(struct _VCVideoFormat *)arg3 formatListCount:(unsigned int)arg4 preferredFormat:(id)arg5 supportsHighDef:(*BOOL)arg6 ;
-(BOOL)supportsHEVCWifiDecoding;
-(BOOL)supportsHEVCWifiEncoding;
-(CGFloat)preferredAspectRatio;
-(id)description;
-(id)initWithHardwareSettings:(id)arg0 ;
-(struct _VCBitrateConfiguration *)bitrateConfiguration;
-(struct _VCHardwareConfiguration *)hardwareConfigurationForPayload:(int)arg0 transportType:(unsigned char)arg1 ;
-(void)dealloc;
-(void)initSupportedPayloads;


@end


#endif