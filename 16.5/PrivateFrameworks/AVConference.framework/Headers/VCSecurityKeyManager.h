// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSECURITYKEYMANAGER_H
#define VCSECURITYKEYMANAGER_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "VCMediaKeyIndex.h"

@interface VCSecurityKeyManager : NSObject {
    id *_delegate;
    id *_reportingAgentWeak;
    NSMutableArray *_unknownKeyIndexList;
    NSMutableDictionary *_sendKeys;
    NSMutableDictionary *_receiveKeys;
    NSMutableDictionary *_prunePendingReceiveKeys;
    VCMediaKeyIndex *_latestSendKeyIndex;
    VCMediaKeyIndex *_latestReceiveKeyIndex;
    VCMediaKeyIndex *_keyIndexNotReceived;
    BOOL _isSendKeysCleanUpPending;
    BOOL _isReceiveKeysCleanUpPending;
    BOOL _forceRemoteMKMMissing;
    CGFloat _keyMaterialNotUsedTimeout;
    NSObject<OS_dispatch_queue> *_keyManagerQueue;
    CGFloat _lastKeyIndexNotReceived;
    NSObject<OS_dispatch_source> *_pruneTimer;
    NSObject<OS_dispatch_source> *_encryptionKeyRollTimer;
    BOOL _isRunning;
}


@property (nonatomic) *opaqueRTCReporting reportingAgent;


-(BOOL)addSecurityKeyMaterial:(id)arg0 ;
-(BOOL)associateMKI:(id)arg0 withClientID:(id)arg1 ;
-(BOOL)startTimers;
-(CGFloat)firstExpirationTime;
-(CGFloat)pruneAllExpiredKeys;
-(NSInteger)getNotUsedTimeout;
-(id)copyMKMWithPrefix:(id)arg0 ;
-(id)delegate;
-(id)getLatestRecvKeyMaterial;
-(id)getLatestSendKeyMaterial;
-(id)getRecvKeyMaterialWithIndex:(id)arg0 ;
-(id)getSendKeyMaterialWithIndex:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)logPrefix;
-(void)dealloc;
-(void)handlePruneTimerEventAndReschedule;
-(void)pruneRecvKeyMaterialWithDelay:(CGFloat)arg0 ;
-(void)pruneSendKeyMaterialWithDelay:(CGFloat)arg0 ;
-(void)releaseTimers;
-(void)scheduleEncryptionRollTimerWithDelay:(CGFloat)arg0 ;
-(void)schedulePruneTimer:(CGFloat)arg0 ;
-(void)start;
-(void)stop;
-(void)stopTimers;


@end


#endif