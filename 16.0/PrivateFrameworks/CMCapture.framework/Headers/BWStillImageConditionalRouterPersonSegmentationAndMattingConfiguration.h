// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTILLIMAGECONDITIONALROUTERPERSONSEGMENTATIONANDMATTINGCONFIGURATION_H
#define BWSTILLIMAGECONDITIONALROUTERPERSONSEGMENTATIONANDMATTINGCONFIGURATION_H



#import "BWStillImageConditionalRouterConfiguration.h"

@interface BWStillImageConditionalRouterPersonSegmentationAndMattingConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) unsigned int defaultOutputIndex;
@property (readonly, nonatomic) unsigned int personSegmentationAndMattingOuputIndex;


+(id)personSegmentationAndMattingConfiguration;
-(id)init;


@end


#endif