// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVIDEORULECOLLECTIONSSCREENSECONDARYMAC_H
#define VCVIDEORULECOLLECTIONSSCREENSECONDARYMAC_H

@protocol VCHardwareSettingsMacProtocol;


#import "VCVideoRuleCollectionsScreenSecondary.h"

@interface VCVideoRuleCollectionsScreenSecondaryMac : VCVideoRuleCollectionsScreenSecondary {
    id<VCHardwareSettingsMacProtocol> *_hardwareSettings;
}




+(id)sharedInstance;
-(BOOL)setupH264Rules;
-(BOOL)setupHEVCRules;
-(BOOL)setupRules;
-(id)initWithHardwareSettings:(id)arg0 ;
-(unsigned int)tilesPerFrame:(int)arg0 ;
-(void)initSupportedPayloads;


@end


#endif