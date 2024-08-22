// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASECARDIOIDDIRECTIVITYMODELPARAMETERS_H
#define PHASECARDIOIDDIRECTIVITYMODELPARAMETERS_H

@class NSMutableArray, NSArray;


#import "PHASEDirectivityModelParameters.h"

@interface PHASECardioidDirectivityModelParameters : PHASEDirectivityModelParameters {
    NSMutableArray *_internalArray;
}


@property (readonly, nonatomic) NSArray *subbandParameters;
@property (readonly, nonatomic) NSMutableArray *subbands;


-(id)init;
-(id)initWithSubbandParameters:(id)arg0 ;


@end


#endif