// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHBACKLIGHTENVIRONMENTSTATEMACHINEABORTPAYLOAD_H
#define BLSHBACKLIGHTENVIRONMENTSTATEMACHINEABORTPAYLOAD_H


#import <Foundation/Foundation.h>


@interface BLSHBacklightEnvironmentStateMachineAbortPayload : NSObject



+(unsigned int)presentationEntryIdentifierFromString:(id)arg0 ;
+(void)populateEnvironmentStateMachineStruct:(struct ? *)arg0 machineIsNil:(BOOL)arg1 presentation:(id)arg2 updatingVisualStateTransitionStates:(id)arg3 updatingDateSpecifierTransitionStates:(id)arg4 backlightState:(NSInteger)arg5 previousBacklightState:(NSInteger)arg6 pendingNotifyBeganUpdatingState:(BOOL)arg7 updatingState:(BOOL)arg8 updatingPresentation:(BOOL)arg9 ;
+(void)populateOperationCompletedMismatchedBacklightStatesStruct:(struct ? *)arg0 backlightState:(NSInteger)arg1 targetBacklightState:(NSInteger)arg2 performEventHistory:(id)arg3 didBeginUpdateHistory:(id)arg4 didCompleteUpdateHistory:(id)arg5 envStateMachineIsNil:(BOOL)arg6 envStateMachinePresentation:(id)arg7 envStateMachineUpdatingVisualStateTransitionStates:(id)arg8 envStateMachineUpdatingDateSpecifierTransitionStates:(id)arg9 envStateMachineBacklightState:(NSInteger)arg10 envStateMachinePreviousBacklightState:(NSInteger)arg11 envStateMachinePendingNotifyBeganUpdatingState:(BOOL)arg12 envStateMachineUpdatingState:(BOOL)arg13 envStateMachineUpdatingPresentation:(BOOL)arg14 ;
+(void)populatePresentationStruct:(struct ? *)arg0 withPresentation:(id)arg1 ;


@end


#endif