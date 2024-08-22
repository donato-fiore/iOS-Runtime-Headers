// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBEXPERTLOCATIONAPPSUGGESTION_H
#define _SBEXPERTLOCATIONAPPSUGGESTION_H

@class SBExpertAppSuggestion;



@interface _SBExpertLocationAppSuggestion : SBExpertAppSuggestion



-(BOOL)isEligibleForLockScreen;
-(BOOL)isLocationPredictionFromSource:(NSUInteger)arg0 ;
-(BOOL)isLocationPredictionOfType:(NSUInteger)arg0 ;
-(BOOL)launchURLRequiresInboxCopy;
-(id)launchURL;
-(id)makeInboxCopyOfLaunchURLToInboxURL:(id)arg0 ;
-(id)originatingBundleIdentifier;
-(id)suggestedLocationName;


@end


#endif