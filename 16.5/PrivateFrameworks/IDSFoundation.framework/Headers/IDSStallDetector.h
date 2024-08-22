// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSSTALLDETECTOR_H
#define IDSSTALLDETECTOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface IDSStallDetector : NSObject {
    os_unfair_lock_s _lock;
    id *_stallDetectedBlock;
    id *_stallWarningBlock;
    NSUInteger _consumeDelayThreshold;
    CGFloat _byteMovementDelayThreshold;
    NSMutableArray *_bytesHistory;
    NSMutableArray *_bytesTimestamps;
}


@property (nonatomic) CGFloat byteMovementDelayThreshold;
@property (nonatomic) NSUInteger consumeDelayThreshold;
@property (nonatomic) BOOL verboseLogging; // ivar: _verboseLogging


+(id)detectorWithName:(id)arg0 ;
// +(id)newDetectorWithName:(id)arg0 stallDetectedBlock:(id)arg1 stallWarningBlock:(unk)arg2  ;
+(void)removeDetectorWithName:(id)arg0 ;
-(BOOL)byteMovementCheckForEvent:(id)arg0 ;
-(BOOL)consumeTimeCheckForEvent:(id)arg0 produceTime:(NSUInteger)arg1 consumeTime:(NSUInteger)arg2 ;
-(void)consumeBytes:(int)arg0 ;
-(void)forceTriggerStallDetectedBlockWithEventName:(id)arg0 ;
-(void)produceBytes:(int)arg0 ;
-(void)reset;


@end


#endif