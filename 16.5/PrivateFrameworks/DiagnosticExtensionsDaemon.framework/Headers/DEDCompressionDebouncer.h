// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDCOMPRESSIONDEBOUNCER_H
#define DEDCOMPRESSIONDEBOUNCER_H


#import <Foundation/Foundation.h>


@interface DEDCompressionDebouncer : NSObject

@property (nonatomic) BOOL finished; // ivar: _finished
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (nonatomic) NSUInteger lastKnownCompressedBytes; // ivar: _lastKnownCompressedBytes
@property (nonatomic) NSUInteger lastKnownTotalBytes; // ivar: _lastKnownTotalBytes
@property (nonatomic) NSUInteger lastSentCompressedBytes; // ivar: _lastSentCompressedBytes
@property (nonatomic) NSUInteger lastSentTotalBytes; // ivar: _lastSentTotalBytes
@property (nonatomic) CGFloat lastTriggerTime; // ivar: _lastTriggerTime
@property (copy, nonatomic) id *trigger; // ivar: _trigger


-(id)handler:(SEL)arg0 ;
// -(id)initWithTrigger:(id)arg0 interval:(unk)arg1  ;
-(void)sendTriggerIfStateChanged;
-(void)sendTriggerIfTimeElapsed;


@end


#endif