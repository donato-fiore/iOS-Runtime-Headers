// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCORESPACE_H
#define SUCORESPACE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUCoreSpace : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *spaceQueue; // ivar: _spaceQueue


+(id)cacheDeleteUrgencyName:(int)arg0 ;
+(id)sharedSpaceManager;
// +(void)_issueSpaceCheckCompletion:(id)arg0 withCompletionQueue:(unk)arg1 haveEnoughSpace:(id)arg2 haveTotalRequired:(BOOL)arg3 freeSpaceAvailable:(BOOL)arg4 error:(NSUInteger)arg5 releasingTransaction:(id)arg6  ;
+(void)_spaceCheckPhaseError:(id)arg0 checkingFromBase:(id)arg1 withIdentier:(id)arg2 completion:(id)arg3 ;
+(void)_trackSpaceBegin:(id)arg0 ;
+(void)_trackSpaceBegin:(id)arg0 withIdentifier:(id)arg1 ;
+(void)_trackSpaceEnd:(id)arg0 withIdentifier:(id)arg1 withResult:(NSInteger)arg2 withError:(id)arg3 ;
+(void)_trackSpaceEnd:(id)arg0 withResult:(NSInteger)arg1 withError:(id)arg2 ;
+(void)cacheDeletePurge:(NSUInteger)arg0 fromBasePath:(id)arg1 cacheDeleteUrgency:(int)arg2 completion:(id)arg3 ;
+(void)cacheDeletePurge:(NSUInteger)arg0 fromBasePath:(id)arg1 cacheDeleteUrgency:(int)arg2 withCompletionQueue:(id)arg3 completion:(id)arg4 ;
+(void)checkAvailableFreeSpace:(NSUInteger)arg0 checkingFromBase:(id)arg1 withIdentifier:(id)arg2 userInitiated:(BOOL)arg3 completion:(id)arg4 ;
+(void)checkAvailableSpace:(NSUInteger)arg0 allowPurgeWithUrgency:(int)arg1 purgingFromBase:(id)arg2 minimalRequiredFreeSpace:(NSUInteger)arg3 completion:(id)arg4 ;
+(void)checkAvailableSpace:(NSUInteger)arg0 allowPurgeWithUrgency:(int)arg1 purgingFromBase:(id)arg2 minimalRequiredFreeSpace:(NSUInteger)arg3 withCompletionQueue:(id)arg4 completion:(id)arg5 ;
-(id)init;


@end


#endif