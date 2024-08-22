// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCVIDEORULECOLLECTIONSSCREENAIRPLAYMAC_H
#define VCVIDEORULECOLLECTIONSSCREENAIRPLAYMAC_H

@protocol VCHardwareSettingsMacProtocol;


#import "VCVideoRuleCollectionsScreenAirplay.h"

@interface VCVideoRuleCollectionsScreenAirplayMac : VCVideoRuleCollectionsScreenAirplay {
    id<VCHardwareSettingsMacProtocol> *_hardwareSettings;
}




+(id)sharedInstance;
-(BOOL)setupH264Rules;
-(BOOL)setupHEVCRules;
-(BOOL)setupRules;
-(id)initWithHardwareSettings:(id)arg0 ;
-(unsigned int)tilesPerFrame:(int)arg0 hdrMode:(NSUInteger)arg1 ;
-(void)initSupportedPayloads;


@end


#endif