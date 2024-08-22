// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDDISPLAYLINK_H
#define TSDDISPLAYLINK_H

@class CADisplayLink;

#import <Foundation/Foundation.h>


@interface TSDDisplayLink : NSObject {
    CADisplayLink *_displayLink;
}


@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) CGFloat lastTime; // ivar: _lastTime
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (copy, nonatomic) id *tickBlock; // ivar: _tickBlock


-(void)dealloc;
-(void)p_handleDisplayLink:(id)arg0 ;
-(void)start;
-(void)teardown;


@end


#endif