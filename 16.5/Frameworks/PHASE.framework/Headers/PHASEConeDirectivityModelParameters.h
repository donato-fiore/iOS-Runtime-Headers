// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASECONEDIRECTIVITYMODELPARAMETERS_H
#define PHASECONEDIRECTIVITYMODELPARAMETERS_H

@class NSMutableArray, NSArray;


#import "PHASEDirectivityModelParameters.h"

@interface PHASEConeDirectivityModelParameters : PHASEDirectivityModelParameters {
    NSMutableArray *_internalArray;
}


@property (readonly, nonatomic) NSArray *subbandParameters;
@property (readonly, nonatomic) NSMutableArray *subbands;


-(id)init;
-(id)initWithSubbandParameters:(id)arg0 ;


@end


#endif