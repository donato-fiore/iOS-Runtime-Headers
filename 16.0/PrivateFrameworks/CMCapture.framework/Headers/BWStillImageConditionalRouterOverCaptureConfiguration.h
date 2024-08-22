// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTILLIMAGECONDITIONALROUTEROVERCAPTURECONFIGURATION_H
#define BWSTILLIMAGECONDITIONALROUTEROVERCAPTURECONFIGURATION_H



#import "BWStillImageConditionalRouterConfiguration.h"

@interface BWStillImageConditionalRouterOverCaptureConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) unsigned int narrowFieldOfViewOutputIndex;
@property (readonly, nonatomic) unsigned int wideFieldOfViewOutputIndex;


+(id)overCaptureConfiguration;
-(id)init;


@end


#endif