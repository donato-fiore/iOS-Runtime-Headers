// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMPROTECTIONCONTROLLER_H
#define CAMPROTECTIONCONTROLLER_H

@class NSMutableDictionary, NSMutableSet, NSCountedSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CAMProtectionController : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_burstProcessingProtectionFileDescriptorsByIdentifier; // ivar: __burstProcessingProtectionFileDescriptorsByIdentifier
@property (readonly, nonatomic) int _nebulaDaemonWriteProtectionFileDescriptor; // ivar: __nebulaDaemonWriteProtectionFileDescriptor
@property (readonly, nonatomic) NSMutableSet *_nebulaDaemonWriteProtectionInflightIdentifiers; // ivar: __nebulaDaemonWriteProtectionInflightIdentifiers
@property (readonly, nonatomic) NSMutableDictionary *_persistenceProtectionFileDescriptorsByType; // ivar: __persistenceProtectionFileDescriptorsByType
@property (readonly, nonatomic) NSCountedSet *_persistenceProtectionInflightRequestsByType; // ivar: __persistenceProtectionInflightRequestsByType
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_protectionQueue; // ivar: __protectionQueue


+(BOOL)isCameraPerformingHighPriorityDiskActivity;
+(id)pathForProtectNebulaDaemonWritesIndicator;
-(NSInteger)_persistenceProtectionTypeForRequest:(id)arg0 ;
-(id)_burstProcessingProtectionPathForIdentifier:(id)arg0 ;
-(id)_persistenceProtectionPathForType:(NSInteger)arg0 ;
-(id)init;
-(int)_burstProcessingProtectionFileDescriptorForIdentifier:(id)arg0 ;
-(int)_persistenceProtectionFileDescriptorForType:(NSInteger)arg0 ;
-(void)_addBurstProcessingProtectionIndicatorForIdentifier:(id)arg0 ;
-(void)_addPersistenceProtectionIndicatorForType:(NSInteger)arg0 logIdentifier:(id)arg1 ;
-(void)_protectionQueueAbortProtectionForNebulaDaemonWritesForReason:(id)arg0 ;
-(void)_protectionQueueRemoveBurstProcessingProtectionIndicatorForIdentifier:(id)arg0 ;
-(void)_protectionQueueRemovePersistenceProtectionIndicatorForType:(NSInteger)arg0 unlinkFile:(BOOL)arg1 logIdentifier:(id)arg2 ;
-(void)_protectionQueueStartProtectingNebulaDaemonWritesForIdentifier:(id)arg0 ;
-(void)_protectionQueueStartProtectingPersistenceForType:(NSInteger)arg0 logIdentifier:(id)arg1 ;
-(void)_protectionQueueStopProtectingNebulaDaemonWritesForIdentifier:(id)arg0 closeFile:(BOOL)arg1 ;
-(void)_protectionQueueStopProtectingPersistenceForType:(NSInteger)arg0 logIdentifier:(id)arg1 ;
-(void)abortOutstandingNebulaDaemonWriteProtectionsForReason:(id)arg0 ;
-(void)dealloc;
-(void)startProtectingBurstProcessingForIdentifier:(id)arg0 ;
-(void)startProtectingNebulaDaemonWritesForIdentifier:(id)arg0 ;
-(void)startProtectingPersistenceForRequest:(id)arg0 ;
-(void)stopProtectingBurstProcessingForIdentifier:(id)arg0 ;
-(void)stopProtectingNebulaDaemonWritesForIdentifier:(id)arg0 ;
-(void)stopProtectingPersistenceForRequest:(id)arg0 ;


@end


#endif