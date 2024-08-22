// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMBUFFER_H
#define CAMBUFFER_H

@class NSMutableArray, NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue, NSCopying;

#import <Foundation/Foundation.h>


@interface CAMBuffer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_bufferQueue; // ivar: __bufferQueue
@property (readonly, nonatomic) NSMutableArray *_bufferQueueBufferedValues; // ivar: __bufferQueueBufferedValues
@property (readonly, nonatomic) NSMutableArray *_bufferQueueObservances; // ivar: __bufferQueueObservances
@property (readonly, nonatomic) NSMutableDictionary *_bufferQueueObservers; // ivar: __bufferQueueObservers
@property (retain, nonatomic) NSObject<NSCopying> *bufferQueueCurrentValue; // ivar: _bufferQueueCurrentValue
@property (nonatomic, getter=isBufferQueueEnabled) BOOL bufferQueueEnabled; // ivar: _bufferQueueEnabled
@property (readonly, nonatomic) NSArray *bufferedValues;
@property (readonly, nonatomic) id *currentValue;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) id *firstBufferedValue;
@property (readonly, nonatomic) BOOL isBufferEmpty;
@property (readonly, nonatomic) id *lastBufferedValue;


+(id)keyPathsForValuesAffectingCurrentValue;
+(id)keyPathsForValuesAffectingEnabled;
-(BOOL)_isBufferQueue;
// -(id)_addObserver:(id)arg0 onMainQueue:(unk)arg1  ;
-(id)addMainQueueObserver:(id)arg0 ;
-(id)addObserver:(id)arg0 ;
-(id)init;
-(void)_bufferQueueFulfillAndEvaluateWithChange:(id)arg0 ;
-(void)_bufferQueueFulfillObservancesWithChange:(id)arg0 ;
-(void)_bufferQueueSetupObservance:(id)arg0 ;
-(void)_bufferQueueTeardownObservance:(id)arg0 ;
-(void)_bufferQueueTeardownObservances:(id)arg0 ;
-(void)_emitBufferedValues;
-(void)dealloc;
-(void)disableUntil:(id)arg0 ;
-(void)disableUntilKeyPath:(id)arg0 ofObject:(id)arg1 evaluates:(id)arg2 ;
-(void)disableUntilNotification:(id)arg0 fromObject:(id)arg1 usingNotificationCenter:(id)arg2 ;
-(void)disableWhile:(id)arg0 ;
-(void)disableWhileKeyPath:(id)arg0 ofObject:(id)arg1 evaluates:(id)arg2 ;
-(void)disableWhileNotification:(id)arg0 fromObject:(id)arg1 usingNotificationCenter:(id)arg2 ;
-(void)handleObservedNotification:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)push:(id)arg0 ;
-(void)reevaluate;
-(void)removeObserverForKey:(id)arg0 ;
-(void)replaceWith:(id)arg0 ;


@end


#endif