// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCBLOCKEDEXPLICITCONTENTACCESSCHECKER_H
#define FCBLOCKEDEXPLICITCONTENTACCESSCHECKER_H



#import "FCAccessChecker.h"

@interface FCBlockedExplicitContentAccessChecker : FCAccessChecker



-(BOOL)canSynchronouslyCheckAccessToItem:(id)arg0 ;
-(BOOL)hasAccessToItem:(id)arg0 blockedReason:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif