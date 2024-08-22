// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WRITERREORDERQ_H
#define WRITERREORDERQ_H

@class PVFrameSet;

#import <Foundation/Foundation.h>


@interface WriterReorderQ : NSObject

@property (retain, nonatomic) PVFrameSet *frameSet; // ivar: _frameSet
@property (nonatomic) ? lastReorderedTime; // ivar: _lastReorderedTime


-(id)clearQueuedFrameSet;
-(id)getReorderedFrameSet:(id)arg0 ;
-(id)init;


@end


#endif