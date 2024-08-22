// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCVIDEORULECOLLECTIONSSCREEN_H
#define VCVIDEORULECOLLECTIONSSCREEN_H

@protocol VCHardwareSettingsEmbeddedProtocol;


#import "VCVideoRuleCollections.h"

@interface VCVideoRuleCollectionsScreen : VCVideoRuleCollections {
    id<VCHardwareSettingsEmbeddedProtocol> *_hardwareSettings;
}




+(id)sharedInstance;
-(BOOL)setupH264Rules;
-(BOOL)setupMacDecodingOnlyRules;
-(id)initForMacDecodingOnly;
-(id)initWithHardwareSettings:(id)arg0 ;
-(void)initSupportedPayloads;
-(void)selectPreferredRule:(id)arg0 screenSize:(struct CGSize )arg1 ;


@end


#endif