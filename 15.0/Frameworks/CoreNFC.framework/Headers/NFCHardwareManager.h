// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCHARDWAREMANAGER_H
#define NFCHARDWAREMANAGER_H

@class NSMutableSet, NSMutableDictionary, NSString, NSArray;
@protocol NFCSessionCallbacks, NFCHardwareManagerCallbacks;

#import <Foundation/Foundation.h>

#import "NFCSession.h"

@interface NFCHardwareManager : NSObject <NFCSessionCallbacks, NFCHardwareManagerCallbacks>

 {
    NSMutableSet *_delegates;
    NFCSession *_xpcSession;
    NSMutableDictionary *_queuedReaderSessions;
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
-(void)dequeueReaderSession:(id)arg0 ;
-(void)didInvalidate;
-(void)hardwareFailedToLoad;
-(void)queueReaderSession:(id)arg0 sessionConfig:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeNFCHardwareManagerCallbacksListener:(id)arg0 ;


@end


#endif