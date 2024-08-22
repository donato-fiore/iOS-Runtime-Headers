// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XBAPPLICATIONSNAPSHOTGENERATIONSCHEDULER_H
#define XBAPPLICATIONSNAPSHOTGENERATIONSCHEDULER_H

@class NSString;
@protocol XBApplicationSnapshotImageGenerationScheduling, OS_dispatch_workloop, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface XBApplicationSnapshotGenerationScheduler : NSObject <XBApplicationSnapshotImageGenerationScheduling>

 {
    NSObject<OS_dispatch_workloop> *_imageGenerationWorkloop;
    NSObject<OS_dispatch_queue> *_imageGenerationQueue;
    NSObject<OS_dispatch_workloop> *_dataGenerationWorkloop;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_init;
// -(void)performImageDataGenerationAsync:(id)arg0 withHandler:(unk)arg1  ;
// -(void)performImageDataGenerationAsyncAndWait:(id)arg0 withHandler:(unk)arg1  ;
-(void)performImageGenerationAsync:(id)arg0 ;
-(void)performImageGenerationAsyncAndWait:(id)arg0 ;


@end


#endif