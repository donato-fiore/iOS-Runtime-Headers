// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDIGESTVERIFICATION_H
#define GKDIGESTVERIFICATION_H


#import <Foundation/Foundation.h>


@interface GKDigestVerification : NSObject



+(BOOL)digest:(id)arg0 matchesHash:(id)arg1 ;
+(id)computeVerificationHashForDigest:(id)arg0 ;
+(id)digestForSubmitAchievement:(id)arg0 forBundleID:(id)arg1 shouldScreen:(BOOL)arg2 eligibleChallenges:(id)arg3 ;
+(id)digestForSubmitScore:(id)arg0 forBundleID:(id)arg1 shouldScreen:(BOOL)arg2 eligibleChallenges:(id)arg3 ;


@end


#endif