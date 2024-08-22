// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef THABUTTONEVENT_H
#define THABUTTONEVENT_H


#import <Foundation/Foundation.h>

#import "THAButton.h"

@interface THAButtonEvent : NSObject

@property (retain, nonatomic) THAButton *button; // ivar: _button
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)serialize;


@end


#endif