// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVIDEORULECOLLECTIONSMOMENTSEMBEDED_H
#define VCVIDEORULECOLLECTIONSMOMENTSEMBEDED_H

@protocol VCHardwareSettingsEmbeddedProtocol;


#import "VCVideoRuleCollectionsMoments.h"

@interface VCVideoRuleCollectionsMomentsEmbeded : VCVideoRuleCollectionsMoments {
    id<VCHardwareSettingsEmbeddedProtocol> *_hardwareSettings;
}




+(id)sharedInstance;
-(BOOL)isSupportedChipID;
-(BOOL)isSupportedDeviceClass;
-(id)getMomentsImageTypes;
-(id)getMomentsVideoCodecs;
-(id)initWithHardwareSettings:(id)arg0 ;
-(unsigned char)getMomentsCapabilities;


@end


#endif