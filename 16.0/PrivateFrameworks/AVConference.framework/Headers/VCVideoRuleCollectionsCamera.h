// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCVIDEORULECOLLECTIONSCAMERA_H
#define VCVIDEORULECOLLECTIONSCAMERA_H



#import "VCVideoRuleCollections.h"

@interface VCVideoRuleCollectionsCamera : VCVideoRuleCollections {
    BOOL _encodeHighDef;
    BOOL _decodeHighDef;
}




+(id)sharedInstance;
-(BOOL)getBestFrameWidth:(*int)arg0 frameHeight:(*int)arg1 frameRate:(*float)arg2 ;
-(BOOL)isHiDefCapable;
-(BOOL)setupH264CellularRules;
-(BOOL)useSoftFramerateSwitching;
-(CGFloat)preferredAspectRatio;
-(id)bestVideoRuleForEncodingType:(unsigned char)arg0 aspectRatio:(CGFloat)arg1 ;
-(id)bestVideoRuleForEncodingType:(unsigned char)arg0 aspectRatio:(CGFloat)arg1 payload:(int)arg2 ;
-(struct _VCBitrateConfiguration *)bitrateConfiguration;
-(void)resetEncodingRulesForCameraIsHD:(BOOL)arg0 isWVGA:(BOOL)arg1 is1080:(BOOL)arg2 ;


@end


#endif