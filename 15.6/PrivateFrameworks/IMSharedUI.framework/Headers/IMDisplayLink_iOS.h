// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDISPLAYLINK_IOS_H
#define IMDISPLAYLINK_IOS_H

@class CADisplayLink;


#import "IMDisplayLink.h"

@interface IMDisplayLink_iOS : IMDisplayLink

@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink


-(BOOL)isValid;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)invalidate;
-(void)schedule;


@end


#endif