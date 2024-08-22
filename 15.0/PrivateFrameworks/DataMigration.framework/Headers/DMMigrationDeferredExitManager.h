// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMMIGRATIONDEFERREDEXITMANAGER_H
#define DMMIGRATIONDEFERREDEXITMANAGER_H


#import <Foundation/Foundation.h>


@interface DMMigrationDeferredExitManager : NSObject



+(id)_serialQueue;
-(BOOL)_isDeferringExit;
-(id)_deferralDuration;
-(void)_exitClean;
-(void)_resetGlobalState;
-(void)cancelDeferredExitWithConnection:(id)arg0 ;
-(void)deferExitWithConnection:(id)arg0 ;
-(void)migrationDidEnd;
-(void)migrationDidStart;


@end


#endif