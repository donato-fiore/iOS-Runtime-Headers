// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUDIOTIERHISTOGRAM_H
#define AUDIOTIERHISTOGRAM_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AudioTier.h"

@interface AudioTierHistogram : NSObject {
    NSMutableDictionary *histogram;
    AudioTier *currentTier;
    CGFloat startTime;
    NSObject<OS_dispatch_queue> *awdAudioTierQueue;
}




-(id)init;
-(id)newReport;
-(void)accumulateTime:(CGFloat)arg0 forAudioTier:(id)arg1 ;
-(void)dealloc;
-(void)end;
-(void)newAudioTier:(unsigned int)arg0 duplication:(unsigned int)arg1 bundling:(unsigned int)arg2 codecPayload:(unsigned int)arg3 codecBitrate:(unsigned int)arg4 mode:(unsigned int)arg5 ;


@end


#endif