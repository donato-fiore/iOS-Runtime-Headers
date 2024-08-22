// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TUIPATHPOINT_H
#define _TUIPATHPOINT_H


#import <Foundation/Foundation.h>


@interface _TUIPathPoint : NSObject

@property (nonatomic) CGFloat absoluteTime; // ivar: _absoluteTime
@property (nonatomic) CGFloat decay; // ivar: _decay
@property (nonatomic) CGFloat force; // ivar: _force
@property (nonatomic) CGFloat length; // ivar: _length
@property (nonatomic) CGPoint point; // ivar: _point
@property (nonatomic) CGFloat relativeTime; // ivar: _relativeTime
@property (nonatomic, getter=isSentinelPoint) BOOL sentinelPoint; // ivar: _sentinelPoint


-(id)description;


@end


#endif