// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HVCONSUMERCOORDINATOR_H
#define HVCONSUMERCOORDINATOR_H

@class _PASLock, NSString;
@protocol HVQueueObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HVQueues.h"

@interface HVConsumerCoordinator : NSObject <HVQueueObserver>

 {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    HVQueues *_queues;
    NSString *_path;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultCoordinator;
-(BOOL)deleteContentWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)harvestContentWithMinimumLevelOfService:(unsigned char)arg0 error:(*id)arg1 shouldContinueBlock:(id)arg2 ;
-(BOOL)registerInteractionConsumer:(id)arg0 levelOfService:(unsigned char)arg1 ;
-(BOOL)registerMailConsumer:(id)arg0 levelOfService:(unsigned char)arg1 ;
-(BOOL)registerMessagesConsumer:(id)arg0 levelOfService:(unsigned char)arg1 ;
-(BOOL)registerNewsConsumer:(id)arg0 levelOfService:(unsigned char)arg1 ;
-(BOOL)registerNotesConsumer:(id)arg0 levelOfService:(unsigned char)arg1 ;
-(BOOL)registerParsecConsumer:(id)arg0 levelOfService:(unsigned char)arg1 ;
-(BOOL)registerPhotosConsumer:(id)arg0 levelOfService:(unsigned char)arg1 ;
-(BOOL)registerRemindersConsumer:(id)arg0 levelOfService:(unsigned char)arg1 ;
-(BOOL)registerSafariConsumer:(id)arg0 levelOfService:(unsigned char)arg1 ;
-(BOOL)registerSiriConsumer:(id)arg0 levelOfService:(unsigned char)arg1 ;
-(BOOL)registerThirdPartyAppConsumer:(id)arg0 levelOfService:(unsigned char)arg1 ;
-(BOOL)registerUserActivityConsumer:(id)arg0 levelOfService:(unsigned char)arg1 ;
-(id)init;
-(id)initWithQueues:(id)arg0 path:(id)arg1 ;
-(id)statsWithError:(*id)arg0 ;
-(void)contentAvailableFromSources:(unsigned int)arg0 ;
-(void)disableConsumptionOfDataSources:(unsigned int)arg0 ;
-(void)enableConsumptionOfDataSources:(unsigned int)arg0 ;
-(void)restoreConsumptionOfDataSources:(unsigned int)arg0 ;


@end


#endif