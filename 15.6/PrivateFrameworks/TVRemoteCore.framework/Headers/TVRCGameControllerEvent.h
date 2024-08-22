// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRCGAMECONTROLLEREVENT_H
#define TVRCGAMECONTROLLEREVENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TVRCGameControllerEvent : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isDown) BOOL down; // ivar: _down
@property (readonly, nonatomic) CGPoint joystickLocation; // ivar: _joystickLocation
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)_initWithTimestamp:(CGFloat)arg0 isDown:(BOOL)arg1 joystickLocation:(struct CGPoint )arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif