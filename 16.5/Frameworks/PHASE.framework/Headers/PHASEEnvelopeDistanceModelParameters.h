// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASEENVELOPEDISTANCEMODELPARAMETERS_H
#define PHASEENVELOPEDISTANCEMODELPARAMETERS_H



#import "PHASEDistanceModelParameters.h"
#import "PHASEEnvelope.h"

@interface PHASEEnvelopeDistanceModelParameters : PHASEDistanceModelParameters

@property (readonly, nonatomic) PHASEEnvelope *envelope; // ivar: _envelope


+(id)new;
-(id)init;
-(id)initWithEnvelope:(id)arg0 ;


@end


#endif