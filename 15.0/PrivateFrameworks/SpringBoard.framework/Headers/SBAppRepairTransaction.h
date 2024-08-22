// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPREPAIRTRANSACTION_H
#define SBAPPREPAIRTRANSACTION_H

@class NSMutableSet, STTelephonyStatusDomain, NSSet;


#import "SBTransaction.h"

@interface SBAppRepairTransaction : SBTransaction {
    NSMutableSet *_repairRequests;
    STTelephonyStatusDomain *_telephonyDomain;
}


@property (readonly, copy, nonatomic) NSSet *appInfos; // ivar: _appInfos


-(BOOL)_canBeInterrupted;
-(id)initWithApplicationInfos:(id)arg0 ;
-(void)_begin;
-(void)_completeRequest:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)_didComplete;
-(void)_evaluateCompletion;
-(void)_startAppRepairs;


@end


#endif