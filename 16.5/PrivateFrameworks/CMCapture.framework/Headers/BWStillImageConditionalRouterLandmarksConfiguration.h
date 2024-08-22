// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGECONDITIONALROUTERLANDMARKSCONFIGURATION_H
#define BWSTILLIMAGECONDITIONALROUTERLANDMARKSCONFIGURATION_H



#import "BWStillImageConditionalRouterConfiguration.h"

@interface BWStillImageConditionalRouterLandmarksConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) unsigned int defaultOutputIndex;
@property (readonly, nonatomic) unsigned int landmarksOutputIndex;


+(id)landmarksConfiguration;
-(id)init;


@end


#endif