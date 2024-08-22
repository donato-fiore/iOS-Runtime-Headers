// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCVIDEORULECOLLECTIONSREMOTECAMERAMAC_H
#define VCVIDEORULECOLLECTIONSREMOTECAMERAMAC_H

@protocol VCHardwareSettingsMacProtocol;


#import "VCVideoRuleCollectionsRemoteCamera.h"

@interface VCVideoRuleCollectionsRemoteCameraMac : VCVideoRuleCollectionsRemoteCamera {
    id<VCHardwareSettingsMacProtocol> *_hardwareSettings;
}




+(id)sharedInstance;
-(BOOL)initSupportedPayloads;
-(id)initWithHardwareSettings:(id)arg0 ;


@end


#endif