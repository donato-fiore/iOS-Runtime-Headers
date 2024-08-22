// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVRUITOUCH_H
#define _TVRUITOUCH_H


#import <Foundation/Foundation.h>


@interface _TVRUITouch : NSObject

@property (readonly, nonatomic) NSInteger fingerIndex; // ivar: _fingerIndex
@property (readonly, nonatomic) NSInteger phase; // ivar: _phase
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithTimestamp:(CGFloat)arg0 touchPhase:(NSInteger)arg1 fingerIndex:(NSInteger)arg2 ;


@end


#endif