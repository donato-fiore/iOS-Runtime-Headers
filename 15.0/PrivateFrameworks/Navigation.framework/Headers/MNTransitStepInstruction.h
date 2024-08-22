// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNTRANSITSTEPINSTRUCTION_H
#define MNTRANSITSTEPINSTRUCTION_H

@class NSDictionary, GEOComposedRouteStep;


#import "MNTransitInstruction.h"

@interface MNTransitStepInstruction : MNTransitInstruction

@property (readonly, nonatomic) NSDictionary *overridenInstructionsMapping; // ivar: _overridenInstructionsMapping
@property (readonly, nonatomic) GEOComposedRouteStep *step; // ivar: _step


+(id)instructionForStep:(id)arg0 context:(NSInteger)arg1 ;
+(id)instructionForStep:(id)arg0 overrides:(id)arg1 context:(NSInteger)arg2 ;
-(id)initWithStep:(id)arg0 overrides:(id)arg1 context:(NSInteger)arg2 ;
-(id)instructionSet;


@end


#endif