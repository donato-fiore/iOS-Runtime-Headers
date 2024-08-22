// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTILLIMAGECONDITIONALROUTERINFERENCECONFIGURATION_H
#define BWSTILLIMAGECONDITIONALROUTERINFERENCECONFIGURATION_H



#import "BWStillImageConditionalRouterConfiguration.h"

@interface BWStillImageConditionalRouterInferenceConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) unsigned int defaultOutputIndex;
@property (readonly, nonatomic) unsigned int inferenceOuputIndex;


+(id)inferenceConfiguration;
-(id)init;


@end


#endif