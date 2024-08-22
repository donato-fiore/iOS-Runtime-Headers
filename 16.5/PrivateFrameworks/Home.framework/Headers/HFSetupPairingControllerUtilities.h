// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSETUPPAIRINGCONTROLLERUTILITIES_H
#define HFSETUPPAIRINGCONTROLLERUTILITIES_H


#import <Foundation/Foundation.h>


@interface HFSetupPairingControllerUtilities : NSObject



+(BOOL)_context:(id)arg0 requiresUserConsentToReplaceInHome:(id)arg1 ;
+(BOOL)isPairingPhaseIdle:(NSUInteger)arg0 ;
+(CGFloat)accessoryDiscoveryFatalTimeout;
+(CGFloat)accessoryDiscoverySoftTimeout;
+(NSUInteger)processSetupAccessoryProgressChange:(NSInteger)arg0 currentPhase:(NSUInteger)arg1 context:(id)arg2 discoveredAccessory:(id)arg3 setupResult:(id)arg4 home:(id)arg5 callerClass:(Class)arg6 ;
+(id)_accessoryNotFoundStatusDescriptionSuffixForSetupResult:(id)arg0 ;
+(id)descriptionForPairingPhase:(NSUInteger)arg0 ;
+(void)getStatusTitle:(*id)arg0 statusDescription:(*id)arg1 forPairingPhase:(NSUInteger)arg2 phaseStartDate:(id)arg3 discoveredAccessory:(id)arg4 setupResult:(id)arg5 ;


@end


#endif