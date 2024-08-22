// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGECONDITIONALROUTERDEPTHCONFIGURATION_H
#define BWSTILLIMAGECONDITIONALROUTERDEPTHCONFIGURATION_H



#import "BWStillImageConditionalRouterConfiguration.h"

@interface BWStillImageConditionalRouterDepthConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) unsigned int rawOutputIndex;
@property (readonly, nonatomic) unsigned int yuvOutputIndex;


+(id)depthConfiguration;
-(id)init;


@end


#endif