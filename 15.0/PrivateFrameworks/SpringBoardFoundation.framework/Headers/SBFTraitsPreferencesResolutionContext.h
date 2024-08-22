// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFTRAITSPREFERENCESRESOLUTIONCONTEXT_H
#define SBFTRAITSPREFERENCESRESOLUTIONCONTEXT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SBFTraitsArbitrationInputs.h"

@interface SBFTraitsPreferencesResolutionContext : NSObject

@property (readonly, nonatomic) NSArray *acquiredParticipants; // ivar: _acquiredParticipants
@property (readonly, nonatomic) SBFTraitsArbitrationInputs *rawInputs; // ivar: _rawInputs
@property (readonly, nonatomic) NSArray *stageParticipantsRoles; // ivar: _stageParticipantsRoles
@property (readonly, nonatomic) SBFTraitsArbitrationInputs *validatedInputs; // ivar: _validatedInputs


-(id)initWithAcquiredParticipants:(id)arg0 stageParticipantsRoles:(id)arg1 validatedInputs:(id)arg2 rawInputs:(id)arg3 ;


@end


#endif