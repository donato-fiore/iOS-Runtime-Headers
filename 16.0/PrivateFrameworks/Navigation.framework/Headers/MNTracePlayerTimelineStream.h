// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNTRACEPLAYERTIMELINESTREAM_H
#define MNTRACEPLAYERTIMELINESTREAM_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MNTracePlayerTimelineStream : NSObject {
    NSArray *_data;
}


@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) NSUInteger nextIndex; // ivar: _nextIndex
@property (readonly, nonatomic) CGFloat nextUpdatePosition; // ivar: _nextUpdatePosition


-(id)initWithData:(id)arg0 ;
-(void)jumpToPosition:(CGFloat)arg0 ;
-(void)triggerNextUpdate;


@end


#endif