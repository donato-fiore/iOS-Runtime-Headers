// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTKPKPERFCONFIGURATION_H
#define DTKPKPERFCONFIGURATION_H

@class NSMutableArray, NSString, NSArray;
@protocol DTKPConfiguration, DTKPTriggerCounterAllocatorProvider;

#import <Foundation/Foundation.h>

#import "DTKPKDebugCodeSet.h"
#import "DTKPTriggerKDebug.h"
#import "DTKPTriggerPMI.h"
#import "DTKPCPUCounterAllocator.h"

@interface DTKPKperfConfiguration : NSObject <DTKPConfiguration, DTKPTriggerCounterAllocatorProvider>

 {
    DTKPKDebugCodeSet *_kdebugCodeSet;
    DTKPTriggerKDebug *_triggerKDebug;
    DTKPTriggerPMI *_triggerPMI;
    NSMutableArray *_allTriggerTimes;
    NSMutableArray *_allTriggers;
    mutex _lock;
    DTKPCPUCounterAllocator *_counterAllocator;
}


@property (nonatomic) NSUInteger bufferSize; // ivar: _bufferSize
@property (nonatomic) unsigned char collectionMode; // ivar: collectionMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int enabledKPCClasses;
@property (readonly, nonatomic) BOOL hasEnabledKPCClasses;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) DTKPKDebugCodeSet *queryCodeSet;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *triggers;


-(id)_disableContextSwitchSampling;
-(id)_enableContextSwitchSampling;
-(id)_reinitializeKperf;
-(id)_validateConfigLocked;
-(id)allTriggerTime;
-(id)apply;
-(id)counterAllocator;
-(id)createTriggerKDebug:(*id)arg0 ;
-(id)createTriggerPMI:(*id)arg0 ;
-(id)createTriggerTime:(*id)arg0 ;
-(id)firstTriggerTime;
-(id)generateConfigWords;
-(id)init;
-(id)queryCounterAllocator;
-(id)reset;
-(id)triggerKDebug;
-(id)triggerPMI;
-(void)_disableKdebugCodes;
-(void)_enableKdebugCodes;
-(void)addCodeSet:(id)arg0 ;
-(void)clearAllTriggerTime;
-(void)clearTriggerKDebug;
-(void)clearTriggerPMI;
-(void)clearTriggerTimeAtIndex:(NSUInteger)arg0 ;


@end


#endif