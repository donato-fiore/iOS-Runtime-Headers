// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMOUTPUTREQUEST_H
#define AXMOUTPUTREQUEST_H

@class NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXMOutputRequestHandle.h"

@interface AXMOutputRequest : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_actions;
}


@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSArray *activeSoundActions;
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, nonatomic) AXMOutputRequestHandle *handle; // ivar: _handle
@property (readonly, nonatomic) NSArray *hapticActions;
@property (nonatomic) BOOL interruptsAndClearsQueue; // ivar: _interruptsAndClearsQueue
@property (readonly, nonatomic) NSArray *oneShotSoundActions;
@property (readonly, nonatomic) NSArray *speechActions;


+(id)speechItemSeparator;
-(id)init;
-(void)_addAction:(id)arg0 ;
-(void)addActiveSoundItemWithID:(id)arg0 ;
-(void)addActiveSoundItemWithURL:(id)arg0 ;
-(void)addHapticItemWithURL:(id)arg0 ;
-(void)addHapticItemWithURL:(id)arg0 intensity:(CGFloat)arg1 ;
-(void)addSoundItemWithID:(id)arg0 ;
-(void)addSoundItemWithURL:(id)arg0 ;
-(void)addSpeechItem:(id)arg0 ;


@end


#endif