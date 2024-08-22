// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNAUDIOSYSTEMEVENTQUEUE_H
#define MNAUDIOSYSTEMEVENTQUEUE_H

@class NSMutableArray;
@protocol MNAudioEventQueueDelegate;

#import <Foundation/Foundation.h>


@interface MNAudioSystemEventQueue : NSObject {
    NSMutableArray *_container;
    NSUInteger _capacity;
}


@property (readonly, nonatomic) NSUInteger capacity;
@property (readonly, nonatomic) NSUInteger count;
@property (weak, nonatomic) NSObject<MNAudioEventQueueDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) BOOL full;


-(BOOL)enqueue:(id)arg0 withOptions:(NSUInteger)arg1 andReport:(*id)arg2 ;
-(id)_dequeue;
-(id)dequeue;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)_enqueue:(id)arg0 ;
-(void)_removeEventsMatching:(id)arg0 ;
-(void)clear;


@end


#endif