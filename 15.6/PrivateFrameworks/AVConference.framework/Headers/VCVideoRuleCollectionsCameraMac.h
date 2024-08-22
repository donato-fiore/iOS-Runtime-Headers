// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVIDEORULECOLLECTIONSCAMERAMAC_H
#define VCVIDEORULECOLLECTIONSCAMERAMAC_H

@protocol VCHardwareSettingsMacProtocol;


#import "VCVideoRuleCollectionsCamera.h"

@interface VCVideoRuleCollectionsCameraMac : VCVideoRuleCollectionsCamera {
    unsigned int _encodeScore;
    unsigned int _decodeScore;
    id<VCHardwareSettingsMacProtocol> *_hardwareSettings;
}




+(id)sharedInstance;
-(BOOL)setUp1080pRules:(int)arg0 ;
-(BOOL)setupH264Rules;
-(BOOL)setupH264WifiRules;
-(BOOL)setupHEVCRules;
-(BOOL)setupRules;
-(BOOL)useSoftFramerateSwitching;
-(CGFloat)preferredAspectRatio;
-(id)initWithHardwareSettings:(id)arg0 ;
-(void)_addWVGAEncodingRules;
-(void)_removeRulesGreaterThan720p;
-(void)_removeRulesGreaterThanVGA;
-(void)_resetJ92EncodingRulesForCameraIsHD:(BOOL)arg0 isWVGA:(BOOL)arg1 is1080:(BOOL)arg2 ;
-(void)computeDecodingScore;
-(void)computeEncodingScore;
-(void)dealloc;
-(void)initSupportedPayloads;
-(void)resetEncodingRulesForCameraIsHD:(BOOL)arg0 isWVGA:(BOOL)arg1 is1080:(BOOL)arg2 ;


@end


#endif