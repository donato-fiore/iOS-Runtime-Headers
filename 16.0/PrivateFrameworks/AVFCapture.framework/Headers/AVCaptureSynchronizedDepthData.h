// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTURESYNCHRONIZEDDEPTHDATA_H
#define AVCAPTURESYNCHRONIZEDDEPTHDATA_H



#import "AVCaptureSynchronizedData.h"
#import "AVCaptureSynchronizedDepthDataInternal.h"
#import "AVDepthData.h"

@interface AVCaptureSynchronizedDepthData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedDepthDataInternal *_internal;
}


@property (readonly) AVDepthData *depthData;
@property (readonly) BOOL depthDataWasDropped;
@property (readonly) NSInteger droppedReason;


+(void)initialize;
-(id)_initWithDepthData:(id)arg0 timestamp:(struct ? )arg1 depthDataWasDropped:(BOOL)arg2 droppedReason:(NSInteger)arg3 ;
-(id)debugDescription;
-(id)description;
-(void)dealloc;


@end


#endif