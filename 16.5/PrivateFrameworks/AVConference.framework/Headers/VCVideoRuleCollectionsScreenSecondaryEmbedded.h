// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVIDEORULECOLLECTIONSSCREENSECONDARYEMBEDDED_H
#define VCVIDEORULECOLLECTIONSSCREENSECONDARYEMBEDDED_H

@protocol VCHardwareSettingsEmbeddedProtocol;


#import "VCVideoRuleCollectionsScreenSecondary.h"

@interface VCVideoRuleCollectionsScreenSecondaryEmbedded : VCVideoRuleCollectionsScreenSecondary {
    id<VCHardwareSettingsEmbeddedProtocol> *_hardwareSettings;
}




+(id)sharedInstance;
-(BOOL)setupH264Rules;
-(BOOL)setupHEVCRules;
-(BOOL)setupRules;
-(id)initWithHardwareSettings:(id)arg0 ;
-(unsigned int)tilesPerFrame:(int)arg0 ;
-(void)initSupportedPayloads;
-(void)selectPreferredRule:(id)arg0 screenSize:(struct CGSize )arg1 ;


@end


#endif