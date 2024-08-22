// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTRENDERACCUMULATEDSTATE_H
#define SIGNPOSTRENDERACCUMULATEDSTATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SignpostRenderAccumulatedState : NSObject

@property (retain, nonatomic) NSMutableArray *clientDrawableIntervals; // ivar: _clientDrawableIntervals
@property (readonly, nonatomic) unsigned int frameSeed; // ivar: _frameSeed
@property (retain, nonatomic) NSMutableArray *imageQueueSampleEvents; // ivar: _imageQueueSampleEvents


-(id)initWithFrameSeed:(unsigned int)arg0 ;


@end


#endif