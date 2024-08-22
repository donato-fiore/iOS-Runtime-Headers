// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDTOUCHEVENT_H
#define TIKEYBOARDTOUCHEVENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding>

 {
    ? _mask;
}


@property (readonly, nonatomic) int continuousPathState;
@property (readonly, nonatomic) int fingerID; // ivar: _fingerID
@property (readonly, nonatomic) NSInteger forcedKeyCode; // ivar: _forcedKeyCode
@property (readonly, nonatomic) CGPoint location; // ivar: _location
@property (readonly, nonatomic) NSInteger pathIndex; // ivar: _pathIndex
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, nonatomic) int stage; // ivar: _stage
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)touchEventWithStage:(int)arg0 location:(struct CGPoint )arg1 radius:(CGFloat)arg2 timestamp:(CGFloat)arg3 pathIndex:(NSInteger)arg4 fingerID:(int)arg5 forcedKeyCode:(NSInteger)arg6 ;
+(id)touchEventWithStage:(int)arg0 location:(struct CGPoint )arg1 radius:(CGFloat)arg2 timestamp:(CGFloat)arg3 pathIndex:(NSInteger)arg4 fingerID:(int)arg5 forcedKeyCode:(NSInteger)arg6 continuousPathState:(int)arg7 ;
+(id)touchEventWithStage:(int)arg0 location:(struct CGPoint )arg1 radius:(CGFloat)arg2 timestamp:(CGFloat)arg3 pathIndex:(NSInteger)arg4 forcedKeyCode:(NSInteger)arg5 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStage:(int)arg0 location:(struct CGPoint )arg1 radius:(CGFloat)arg2 timestamp:(CGFloat)arg3 pathIndex:(NSInteger)arg4 fingerID:(int)arg5 forcedKeyCode:(NSInteger)arg6 continuousPathState:(int)arg7 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif