// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKRAISEGESTURE_H
#define CKRAISEGESTURE_H

@class CMGestureManager;

#import <Foundation/Foundation.h>


@interface CKRaiseGesture : NSObject {
    int proximityToken;
}


@property (nonatomic) SEL action; // ivar: _action
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) CMGestureManager *gestureManager; // ivar: _gestureManager
@property (nonatomic) NSInteger gestureState; // ivar: _gestureState
@property (nonatomic) BOOL proximityState; // ivar: _proximityState
@property (readonly, nonatomic, getter=isRecognized) BOOL recognized;
@property (weak, nonatomic) id *target; // ivar: _target


+(BOOL)isRaiseGestureEnabled;
+(BOOL)isRaiseGestureSupported;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)dealloc;
-(void)proximityStateDidChange:(id)arg0 ;
-(void)setProximityMonitoringEnabled:(BOOL)arg0 ;


@end


#endif