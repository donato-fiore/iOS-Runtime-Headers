// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTSPEECHDATAQUEUE_H
#define _LTSPEECHDATAQUEUE_H


#import <Foundation/Foundation.h>

#import "_LTSpeechDataQueueNode.h"

@interface _LTSpeechDataQueue : NSObject {
    NSUInteger _maxFrames;
    NSUInteger _currentFrames;
    _LTSpeechDataQueueNode *_head;
    _LTSpeechDataQueueNode *_tail;
}




-(id)initForSeconds:(CGFloat)arg0 ;
-(void)addSpeechAudioData:(id)arg0 ;
-(void)consumeAll:(id)arg0 ;


@end


#endif