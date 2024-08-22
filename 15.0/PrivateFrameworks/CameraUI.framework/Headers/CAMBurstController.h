// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMBURSTCONTROLLER_H
#define CAMBURSTCONTROLLER_H

@class NSMutableDictionary, NSCountedSet, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CAMBurstSession.h"
#import "CAMPersistenceController.h"
#import "CAMPowerController.h"
#import "CAMProtectionController.h"
#import "CAMRemoteShutterController.h"

@interface CAMBurstController : NSObject

@property (retain, nonatomic, setter=_setActiveSession:) CAMBurstSession *_activeSession; // ivar: __activeSession
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_analysisQueue; // ivar: __analysisQueue
@property (readonly, nonatomic) NSMutableDictionary *_faceResultsByIdentifier; // ivar: __faceResultsByIdentifier
@property (readonly, nonatomic) NSCountedSet *_inflightRequestsByIdentifier; // ivar: __inflightRequestsByIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_mutexQueue; // ivar: __mutexQueue
@property (readonly, weak, nonatomic) CAMPersistenceController *_persistenceController; // ivar: __persistenceController
@property (readonly, nonatomic) CAMPowerController *_powerController; // ivar: __powerController
@property (readonly, nonatomic) CAMProtectionController *_protectionController; // ivar: __protectionController
@property (readonly, nonatomic) CAMRemoteShutterController *_remoteShutterController; // ivar: __remoteShutterController
@property (readonly, nonatomic) NSCountedSet *_requestsPendingPersistenceByIdentifier; // ivar: __requestsPendingPersistenceByIdentifier
@property (readonly, nonatomic) NSMutableDictionary *_sessionsByIdentifier; // ivar: __sessionsByIdentifier
@property (readonly, nonatomic) NSUInteger currentBurstCount;
@property (readonly, copy, nonatomic) NSString *currentBurstIdentifier;


-(NSUInteger)estimatedCountForIdentifier:(id)arg0 ;
-(NSUInteger)inflightCountForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithProtectionController:(id)arg0 powerController:(id)arg1 remoteShutterController:(id)arg2 ;
-(id)startBurstCapture;
-(void)_mutexQueueProcessCompleteBurstSessionWithIdentifier:(id)arg0 device:(NSInteger)arg1 ;
-(void)cancelBurstCapture;
-(void)finishBurstCaptureForDevice:(NSInteger)arg0 ;
-(void)processCapturedRequest:(id)arg0 withResult:(id)arg1 ;
-(void)processEnqueuedRequest:(id)arg0 ;
-(void)processFaceResults:(id)arg0 ;
-(void)processPersistedRequest:(id)arg0 withResult:(id)arg1 ;
-(void)setPersistenceController:(id)arg0 ;


@end


#endif