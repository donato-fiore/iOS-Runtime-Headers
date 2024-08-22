// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCOREPURGE_H
#define SUCOREPURGE_H


#import <Foundation/Foundation.h>


@interface SUCorePurge : NSObject



+(void)_trackPurgeBegin:(id)arg0 ;
+(void)_trackPurgeBegin:(id)arg0 withIdentifier:(id)arg1 ;
+(void)_trackPurgeEnd:(id)arg0 ;
+(void)_trackPurgeEnd:(id)arg0 withIdentifier:(id)arg1 ;
+(void)_trackPurgeEnd:(id)arg0 withIdentifier:(id)arg1 withResult:(NSInteger)arg2 withError:(id)arg3 ;
+(void)_trackPurgeEnd:(id)arg0 withResult:(NSInteger)arg1 withError:(id)arg2 ;
+(void)checkForAssetsOfType:(id)arg0 completion:(id)arg1 ;
+(void)checkForAssetsOfType:(id)arg0 withCompletionQueue:(id)arg1 completion:(id)arg2 ;
+(void)checkForExistingAssetsWithPolicy:(id)arg0 completion:(id)arg1 ;
+(void)checkForExistingAssetsWithPolicy:(id)arg0 withCompletionQueue:(id)arg1 completion:(id)arg2 ;
+(void)checkForExistingPrepare:(id)arg0 ;
+(void)checkForExistingPrepareWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
+(void)previousUpdateState:(*BOOL)arg0 tetheredRestore:(*BOOL)arg1 failedBackward:(*BOOL)arg2 failedForward:(*BOOL)arg3 ;
+(void)removeAllAssetsOfType:(id)arg0 completion:(id)arg1 ;
+(void)removeAllAssetsOfType:(id)arg0 withCompletionQueue:(id)arg1 completion:(id)arg2 ;
+(void)removeAllAssetsOfTypes:(id)arg0 completion:(id)arg1 ;
+(void)removeAllAssetsOfTypes:(id)arg0 withCompletionQueue:(id)arg1 completion:(id)arg2 ;
+(void)removeAllUpdateContent:(id)arg0 ;
+(void)removeAllUpdateContentWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
+(void)removeAllUpdateContentWithPolicy:(id)arg0 completion:(id)arg1 ;
+(void)removeAllUpdateContentWithPolicy:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;


@end


#endif