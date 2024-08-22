// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASEDISTANCEMODELPARAMETERS_H
#define PHASEDISTANCEMODELPARAMETERS_H


#import <Foundation/Foundation.h>

#import "PHASEDistanceModelFadeOutParameters.h"

@interface PHASEDistanceModelParameters : NSObject

@property (retain, nonatomic) PHASEDistanceModelFadeOutParameters *fadeOutParameters; // ivar: _fadeOutParameters


+(id)new;
-(id)init;
-(id)initInternal;


@end


#endif