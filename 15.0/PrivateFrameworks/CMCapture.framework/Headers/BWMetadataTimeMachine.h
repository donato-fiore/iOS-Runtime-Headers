// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWMETADATATIMEMACHINE_H
#define BWMETADATATIMEMACHINE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BWMetadataTimeMachine : NSObject {
    int _capacity;
    NSObject<OS_dispatch_queue> *_metadataHandlingQueue;
    NSMutableArray *_metadata;
    NSMutableArray *_requests;
    ? _earliestAllowedPTS;
    id *_flushHandler;
    int _numberOfConsecutiveFlushes;
}


@property ? earliestAllowedPTS;


+(void)initialize;
-(BOOL)waitUntilCapacity:(int)arg0 timeout:(float)arg1 ;
-(id)initWithCapacity:(int)arg0 metadataHandlingPriority:(unsigned int)arg1 flushHandler:(id)arg2 ;
-(id)metadataForPTSRange:(struct ? )arg0 timeout:(float)arg1 ;
-(void)addDroppedFrameForPortType:(id)arg0 pts:(struct ? )arg1 ;
-(void)addMetadata:(id)arg0 ;
-(void)dealloc;
-(void)reset;


@end


#endif