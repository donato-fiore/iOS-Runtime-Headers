// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVIDEORULECOLLECTIONSSCREENAIRPLAYEMBEDDED_H
#define VCVIDEORULECOLLECTIONSSCREENAIRPLAYEMBEDDED_H

@protocol VCHardwareSettingsEmbeddedProtocol;


#import "VCVideoRuleCollectionsScreenAirplay.h"

@interface VCVideoRuleCollectionsScreenAirplayEmbedded : VCVideoRuleCollectionsScreenAirplay {
    id<VCHardwareSettingsEmbeddedProtocol> *_hardwareSettings;
}




+(id)sharedInstance;
-(BOOL)setupH264Rules;
-(BOOL)setupHEVCRules;
-(BOOL)setupRules;
-(id)initWithHardwareSettings:(id)arg0 ;
-(unsigned int)tilesPerFrame:(int)arg0 hdrMode:(NSUInteger)arg1 ;
-(void)initSupportedPayloads;
-(void)selectPreferredRule:(id)arg0 screenSize:(struct CGSize )arg1 ;


@end


#endif