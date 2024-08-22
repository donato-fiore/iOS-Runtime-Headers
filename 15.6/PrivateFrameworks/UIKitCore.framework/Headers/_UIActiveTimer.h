// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIACTIVETIMER_H
#define _UIACTIVETIMER_H

@class CADisplayLink;

#import <Foundation/Foundation.h>


@interface _UIActiveTimer : NSObject {
    CADisplayLink *_displayLink;
    id *_updateHandler;
}


@property (readonly, nonatomic, getter=isComplete) BOOL complete;


-(id)initWithDuration:(CGFloat)arg0 updateHandler:(id)arg1 ;
-(void)_tick:(id)arg0 ;
-(void)invalidate;


@end


#endif