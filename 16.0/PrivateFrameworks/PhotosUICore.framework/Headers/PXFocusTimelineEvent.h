// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFOCUSTIMELINEEVENT_H
#define PXFOCUSTIMELINEEVENT_H


#import <Foundation/Foundation.h>


@interface PXFocusTimelineEvent : NSObject

@property (nonatomic) CGPoint location; // ivar: _location
@property (nonatomic) BOOL shouldAnimate; // ivar: _shouldAnimate
@property (readonly, nonatomic) ? time; // ivar: _time
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithTime:(struct ? )arg0 type:(NSUInteger)arg1 ;


@end


#endif