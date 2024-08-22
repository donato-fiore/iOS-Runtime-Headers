// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RETIMEPREDICTOR_H
#define RETIMEPREDICTOR_H



#import "REPredictor.h"

@interface RETimePredictor : REPredictor



+(CGFloat)updateInterval;
+(id)supportedFeatures;
-(id)featureValueForFeature:(id)arg0 element:(id)arg1 engine:(id)arg2 trainingContext:(id)arg3 ;
-(void)update;


@end


#endif