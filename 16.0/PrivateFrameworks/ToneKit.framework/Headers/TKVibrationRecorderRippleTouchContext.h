// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKVIBRATIONRECORDERRIPPLETOUCHCONTEXT_H
#define TKVIBRATIONRECORDERRIPPLETOUCHCONTEXT_H


#import <Foundation/Foundation.h>


@interface TKVibrationRecorderRippleTouchContext : NSObject {
    CGFloat _creationTimestamp;
}


@property (readonly, nonatomic) CGPoint location; // ivar: _location


-(CGFloat)timeIntervalSinceCreation;
-(id)init;
-(void)configureWithTimeIntervalSinceCreation:(CGFloat)arg0 location:(struct CGPoint )arg1 ;
-(void)reset;


@end


#endif