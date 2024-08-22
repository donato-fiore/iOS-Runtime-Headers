// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFCHARDWAREMANAGER_H
#define NFCHARDWAREMANAGER_H

@class NSHashTable, NSMutableDictionary, NSString, NSArray;
@protocol NFCSessionCallbacks, NFCHardwareManagerCallbacks, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "NFCSession.h"

@interface NFCHardwareManager : NSObject <NFCSessionCallbacks, NFCHardwareManagerCallbacks>

 {
    NSHashTable *_delegates;
    NFCSession *_xpcSession;
    NSMutableDictionary *_queuedReaderSessions;
    NSObject<OS_dispatch_semaphore> *_hwSupportStateUpdate;
    os_unfair_lock_s _readerSessionLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic, getter=getDelegates) NSArray *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedHardwareManager;
-(BOOL)areFeaturesSupported:(NSUInteger)arg0 outError:(*id)arg1 ;
-(id)getReaderSessionWithKey:(id)arg0 ;
-(id)init;
-(void)addNFCHardwareManagerCallbacksListener:(id)arg0 ;
-(void)areFeaturesSupported:(NSUInteger)arg0 expiry:(CGFloat)arg1 completion:(id)arg2 ;
-(void)dequeueReaderSession:(id)arg0 ;
-(void)didInvalidate;
-(void)hwStateDidChange:(unsigned int)arg0 ;
-(void)queueReaderSession:(id)arg0 sessionConfig:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif