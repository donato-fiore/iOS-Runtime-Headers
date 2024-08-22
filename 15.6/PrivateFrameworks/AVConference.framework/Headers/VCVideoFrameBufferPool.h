// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVIDEOFRAMEBUFFERPOOL_H
#define VCVIDEOFRAMEBUFFERPOOL_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VCVideoFrameBufferPool : NSObject {
    int _maxBufferCount;
    NSMutableDictionary *_bufferPool;
}




-(BOOL)addFrame:(struct __CVBuffer *)arg0 time:(NSInteger)arg1 ;
-(BOOL)releaseFrameWithTime:(NSInteger)arg0 ;
-(id)initWithCapacity:(int)arg0 ;
-(void)dealloc;


@end


#endif