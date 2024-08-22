// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBTOUCHSTATE_H
#define UIKBTOUCHSTATE_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIWindow.h"

@interface UIKBTouchState : NSObject <NSCopying>



@property (readonly, nonatomic) CGPoint locationInWindow; // ivar: _locationInWindow
@property (readonly, nonatomic) NSUInteger pathIndex; // ivar: _pathIndex
@property (readonly, nonatomic) CGFloat pathMajorRadius; // ivar: _pathMajorRadius
@property (readonly, nonatomic) NSInteger phase; // ivar: _phase
@property (readonly, nonatomic) NSUInteger tapCount; // ivar: _tapCount
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSUUID *touchUUID; // ivar: _touchUUID
@property (readonly, nonatomic) UIWindow *window; // ivar: _window


+(id)touchForTouchUUID:(id)arg0 ;
+(id)touchStateForTouch:(id)arg0 ;
+(id)touchStateForTouchUUID:(id)arg0 withTimestamp:(CGFloat)arg1 phase:(NSInteger)arg2 location:(struct CGPoint )arg3 pathIndex:(unsigned char)arg4 inView:(id)arg5 ;
+(id)touchUUIDForTouch:(id)arg0 ;
+(id)touchUUIDsForTouches:(id)arg0 ;
+(id)touchesForTouchUUIDs:(id)arg0 ;
+(void)releaseUUIDForTouch:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)dealloc;


@end


#endif