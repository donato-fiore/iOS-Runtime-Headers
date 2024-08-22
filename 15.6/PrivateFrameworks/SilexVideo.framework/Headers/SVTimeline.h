// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SVTIMELINE_H
#define SVTIMELINE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SVTimeline : NSObject {
    CGFloat _duration;
    CGFloat _time;
    NSMutableArray *_actions;
}




-(id)init;
-(void)dealloc;


@end


#endif