// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHBACKLIGHTENVIRONMENTSTATEMACHINEABORTPAYLOAD_H
#define BLSHBACKLIGHTENVIRONMENTSTATEMACHINEABORTPAYLOAD_H


#import <Foundation/Foundation.h>


@interface BLSHBacklightEnvironmentStateMachineAbortPayload : NSObject



+(unsigned int)presentationEntryIdentifierFromString:(id)arg0 ;
+(void)populateEnvironmentStateMachineStruct:(struct ? *)arg0 machineIsNil:(BOOL)arg1 presentation:(id)arg2 addingEnvironmentsCount:(int)arg3 updatingVisualStateTransitionStates:(id)arg4 updatingDateSpecifierTransitionStates:(id)arg5 backlightState:(NSInteger)arg6 previousBacklightState:(NSInteger)arg7 pendingNotifyBeganUpdatingState:(BOOL)arg8 updatingState:(BOOL)arg9 updatingPresentation:(BOOL)arg10 ;
+(void)populateOperationCompletedMismatchedBacklightStatesStruct:(struct ? *)arg0 backlightState:(NSInteger)arg1 targetBacklightState:(NSInteger)arg2 performEventHistory:(id)arg3 didBeginUpdateHistory:(id)arg4 didCompleteUpdateHistory:(id)arg5 envStateMachineIsNil:(BOOL)arg6 envStateMachinePresentation:(id)arg7 addingEnvironmentsCount:(int)arg8 envStateMachineUpdatingVisualStateTransitionStates:(id)arg9 envStateMachineUpdatingDateSpecifierTransitionStates:(id)arg10 envStateMachineBacklightState:(NSInteger)arg11 envStateMachinePreviousBacklightState:(NSInteger)arg12 envStateMachinePendingNotifyBeganUpdatingState:(BOOL)arg13 envStateMachineUpdatingState:(BOOL)arg14 envStateMachineUpdatingPresentation:(BOOL)arg15 ;
+(void)populatePresentationStruct:(struct ? *)arg0 withPresentation:(id)arg1 ;


@end


#endif