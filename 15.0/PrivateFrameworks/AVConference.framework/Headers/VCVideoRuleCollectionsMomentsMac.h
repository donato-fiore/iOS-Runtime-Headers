// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCVIDEORULECOLLECTIONSMOMENTSMAC_H
#define VCVIDEORULECOLLECTIONSMOMENTSMAC_H

@protocol VCHardwareSettingsMacProtocol;


#import "VCVideoRuleCollectionsMoments.h"

@interface VCVideoRuleCollectionsMomentsMac : VCVideoRuleCollectionsMoments {
    id<VCHardwareSettingsMacProtocol> *_hardwareSettings;
}




+(id)sharedInstance;
-(id)getMomentsImageTypes;
-(id)getMomentsVideoCodecs;
-(id)initWithHardwareSettings:(id)arg0 ;
-(unsigned char)getMomentsCapabilities;


@end


#endif