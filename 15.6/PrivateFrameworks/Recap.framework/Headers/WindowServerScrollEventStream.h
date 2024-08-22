// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WINDOWSERVERSCROLLEVENTSTREAM_H
#define WINDOWSERVERSCROLLEVENTSTREAM_H



#import "BaseScrollEventStream.h"

@interface WindowServerScrollEventStream : BaseScrollEventStream



-(struct __IOHIDEvent *)eventToScrollBy:(struct CGVector )arg0 ;


@end


#endif