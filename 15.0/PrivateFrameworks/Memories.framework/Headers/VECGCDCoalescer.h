// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VECGCDCOALESCER_H
#define VECGCDCOALESCER_H

@class NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VECGCDCoalescer : NSObject {
    CGFloat _delay;
    NSObject<OS_dispatch_source> *_processingTimer;
    NSObject<OS_dispatch_group> *_processDoneGroup;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    BOOL _processingTimerActive;
    NSMutableArray *_keys;
    NSMutableArray *_blocks;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)coalescerWithDelay:(CGFloat)arg0 ;
+(id)sharedFiveSecondCoalescer;
-(id)init;
-(id)initWithQueue:(id)arg0 delay:(CGFloat)arg1 ;
// -(void)_addBlock:(id)arg0 withKey:(unk)arg1  ;
-(void)_applicationWillTerminate:(id)arg0 ;
-(void)_processImmediately;
-(void)_processTimer;
// -(void)coalesceBlock:(id)arg0 withKey:(unk)arg1  ;
-(void)dealloc;
-(void)debugWaitUntilBlocksHaveBeenProcessed;


@end


#endif