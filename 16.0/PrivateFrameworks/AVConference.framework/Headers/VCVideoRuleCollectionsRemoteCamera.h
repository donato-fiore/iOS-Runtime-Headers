// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCVIDEORULECOLLECTIONSREMOTECAMERA_H
#define VCVIDEORULECOLLECTIONSREMOTECAMERA_H



#import "VCVideoRuleCollections.h"

@interface VCVideoRuleCollectionsRemoteCamera : VCVideoRuleCollections



+(id)sharedInstance;
-(BOOL)setupHEVCRules;
-(unsigned int)tilesPerFrame;


@end


#endif