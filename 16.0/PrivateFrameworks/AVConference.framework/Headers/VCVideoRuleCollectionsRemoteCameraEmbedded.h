// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCVIDEORULECOLLECTIONSREMOTECAMERAEMBEDDED_H
#define VCVIDEORULECOLLECTIONSREMOTECAMERAEMBEDDED_H

@protocol VCHardwareSettingsEmbeddedProtocol;


#import "VCVideoRuleCollectionsRemoteCamera.h"

@interface VCVideoRuleCollectionsRemoteCameraEmbedded : VCVideoRuleCollectionsRemoteCamera {
    id<VCHardwareSettingsEmbeddedProtocol> *_hardwareSettings;
}




+(id)sharedInstance;
-(BOOL)initSupportedPayloads;
-(id)initWithHardwareSettings:(id)arg0 ;


@end


#endif