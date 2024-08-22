// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSERIALIZEDMOSTLYSYNCHRONOUSREENTRANTBLOCKSCHEDULER_H
#define AVSERIALIZEDMOSTLYSYNCHRONOUSREENTRANTBLOCKSCHEDULER_H

@class NSArray, NSString;
@protocol AVBlockScheduler;

#import <Foundation/Foundation.h>


@interface AVSerializedMostlySynchronousReentrantBlockScheduler : NSObject <AVBlockScheduler>

 {
    *OpaqueFigSimpleMutex _ivarAccessLock;
    NSArray *_blocks;
    *OpaqueFigReentrantMutex _blockSerializationLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)scheduleBlock:(id)arg0 ;


@end


#endif