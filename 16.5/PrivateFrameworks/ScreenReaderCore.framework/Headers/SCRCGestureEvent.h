// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCRCGESTUREEVENT_H
#define SCRCGESTUREEVENT_H


#import <Foundation/Foundation.h>


@interface SCRCGestureEvent : NSObject {
    NSUInteger _deviceIdentifier;
    SCRCGestureFinger" _finger;
    NSUInteger _fingerCount;
    CGPoint _averageLocation;
}


@property (nonatomic) CGFloat time; // ivar: _time


-(BOOL)isCancelEvent;
-(NSUInteger)deviceIdentifier;
-(NSUInteger)fingerCount;
-(id)description;
-(id)fingerAtIndex:(NSUInteger)arg0 ;
-(id)fingerWithIdentifier:(NSUInteger)arg0 ;
-(id)fingerWithoutIdentifier:(NSUInteger)arg0 ;
-(id)fingers;
-(id)initWithDeviceIdentifier:(NSUInteger)arg0 ;
-(struct CGPoint )averageLocation;
-(struct CGPoint )balancedLocation;
-(struct CGPoint )magneticLocation;
-(struct CGRect )fingerFrame;
-(void)addFingerWithIdentifier:(NSUInteger)arg0 location:(struct CGPoint )arg1 pressure:(CGFloat)arg2 ;
-(void)addStylusWithIdentifier:(NSUInteger)arg0 location:(struct CGPoint )arg1 pressure:(CGFloat)arg2 altitude:(CGFloat)arg3 azimuth:(CGFloat)arg4 ;
-(void)dealloc;
-(void)removeFingerWithIdentifier:(NSUInteger)arg0 ;


@end


#endif