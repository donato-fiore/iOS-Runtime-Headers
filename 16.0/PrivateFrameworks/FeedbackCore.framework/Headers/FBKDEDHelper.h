// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKDEDHELPER_H
#define FBKDEDHELPER_H


#import <Foundation/Foundation.h>


@interface FBKDEDHelper : NSObject



+(id)_seedPortal;
+(id)_seedingHost;
+(id)adoptSessionIdWithExistingSessionId:(id)arg0 ;
+(id)bugSessionIDForAdoptingLocalFilesWithFilerForm:(id)arg0 ;
+(id)bugSessionIDForForm:(id)arg0 device:(id)arg1 ;
+(void)_getBugSessionConfigWithSubmissionType:(NSInteger)arg0 formId:(NSInteger)arg1 device:(id)arg2 completion:(id)arg3 ;
+(void)_getSessionForForm:(id)arg0 device:(id)arg1 isAdoptingSession:(BOOL)arg2 shouldGetSessionStatus:(BOOL)arg3 completion:(id)arg4 ;
+(void)_getSessionWithIdentifier:(id)arg0 configuration:(id)arg1 dedDevice:(id)arg2 getDetails:(BOOL)arg3 shouldGetSessionStatus:(BOOL)arg4 completion:(id)arg5 ;
+(void)_getSessionWithIdentifier:(id)arg0 configuration:(id)arg1 device:(id)arg2 getDetails:(BOOL)arg3 shouldGetSessionStatus:(BOOL)arg4 completion:(id)arg5 ;
+(void)_startSessionByFirstPairingWithConfig:(id)arg0 device:(id)arg1 grouped:(id)arg2 identifier:(id)arg3 shouldGetDetails:(BOOL)arg4 shouldGetSessionStatus:(BOOL)arg5 completion:(id)arg6 ;
+(void)cleanupBugSessionDirectoriesForForm:(id)arg0 ;
+(void)completeEnhancedLoggingWithFollowup:(id)arg0 devicesController:(id)arg1 completion:(id)arg2 ;
+(void)didFailToPinPairOnDemandWithDevice:(id)arg0 error:(NSInteger)arg1 identifier:(id)arg2 observer:(id)arg3 completion:(id)arg4 ;
+(void)fetchTextDataOnMatcherPredicates:(id)arg0 fromSession:(id)arg1 completion:(id)arg2 ;
+(void)getSessionForForm:(id)arg0 device:(id)arg1 shouldGetSessionStatus:(BOOL)arg2 completion:(id)arg3 ;
+(void)getStateOnSession:(id)arg0 withCompletion:(id)arg1 ;
+(void)reconnectBugSessionWithIdentifier:(id)arg0 deviceIdentifier:(id)arg1 completion:(id)arg2 ;
+(void)reconnectWithBugSessionWithIdentifier:(id)arg0 deviceIdentifier:(id)arg1 completion:(id)arg2 ;
+(void)sendLocalFilesToDED:(id)arg0 withForm:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif