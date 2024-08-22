// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPHIDTOUCHEVENT_H
#define RPHIDTOUCHEVENT_H


#import <Foundation/Foundation.h>


@interface RPHIDTouchEvent : NSObject

@property (nonatomic) int finger; // ivar: _finger
@property (nonatomic) CGPoint location; // ivar: _location
@property (nonatomic) int phase; // ivar: _phase
@property (nonatomic) CGFloat timestampSeconds; // ivar: _timestampSeconds




@end


#endif