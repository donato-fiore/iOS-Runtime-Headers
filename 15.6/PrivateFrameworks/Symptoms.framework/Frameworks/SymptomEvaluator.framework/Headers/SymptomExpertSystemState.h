// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYMPTOMEXPERTSYSTEMSTATE_H
#define SYMPTOMEXPERTSYSTEMSTATE_H

@protocol OS_dispatch_source;


#import "ExpertSystemStateCore.h"

@interface SymptomExpertSystemState : ExpertSystemStateCore

@property (retain, nonatomic) NSObject<OS_dispatch_source> *strobe; // ivar: _strobe


+(id)createStateWithLabel:(id)arg0 rank:(NSUInteger)arg1 entryPreds:(id)arg2 ;


@end


#endif