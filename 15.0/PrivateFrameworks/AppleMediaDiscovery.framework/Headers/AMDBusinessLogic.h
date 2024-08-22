// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDBUSINESSLOGIC_H
#define AMDBUSINESSLOGIC_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "ModifierDefinition.h"

@interface AMDBusinessLogic : NSObject

@property (retain, nonatomic) NSMutableArray *modifierDefinitions; // ivar: _modifierDefinitions
@property (retain, nonatomic) ModifierDefinition *rankerDefintion; // ivar: _rankerDefintion


-(id)applyBusinessRulesOnCandidates:(id)arg0 forUseCase:(id)arg1 usingFeatureProvider:(id)arg2 topN:(NSUInteger)arg3 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif