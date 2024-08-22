// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAHLSETWORKOUTSTATE_H
#define SAHLSETWORKOUTSTATE_H



#import "SADomainCommand.h"
#import "SAHLWorkoutState.h"

@interface SAHLSetWorkoutState : SADomainCommand

@property (retain, nonatomic) SAHLWorkoutState *targetWorkoutState;


+(id)setWorkoutState;
+(id)setWorkoutStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif