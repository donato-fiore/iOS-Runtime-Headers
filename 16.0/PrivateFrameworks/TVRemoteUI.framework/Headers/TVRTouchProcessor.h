// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRTOUCHPROCESSOR_H
#define TVRTOUCHPROCESSOR_H

@class NSMutableSet, NSMapTable;
@protocol TVRTouchProcessorDelegate;

#import <Foundation/Foundation.h>

#import "TVRTouchpadView.h"

@interface TVRTouchProcessor : NSObject {
    NSMutableSet *_activeButtonTypes;
    NSMapTable *_touches;
}


@property (weak, nonatomic) NSObject<TVRTouchProcessorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) TVRTouchpadView *touchpadView; // ivar: _touchpadView


+(id)touchProcessorForDevice:(id)arg0 ;
-(BOOL)_deviceSupportsMovableBoundingBox;
-(NSInteger)_defaultRelativeStartingLocation;
-(NSInteger)_relativeTouchLocationForDistanceTraveled:(struct CGPoint )arg0 ;
-(id)_init;
-(struct CGPoint )_virtualTouchLocationForTouch:(id)arg0 ;
-(struct CGRect )_boundingBoxForTouch:(id)arg0 relativeStartLocation:(NSInteger)arg1 ;
-(void)_beginTrackingAnyTouchIfNeeded;
-(void)_beginTrackingTouch:(id)arg0 withRelativeLocation:(NSInteger)arg1 ;
-(void)_deliverTouchToDelegate:(id)arg0 info:(id)arg1 ;
-(void)_dispatchGameControllerEventForTouch:(id)arg0 event:(id)arg1 ;
-(void)_touchTimerExpired:(id)arg0 ;
-(void)markCurrentTouchToBeCancelled;
-(void)reset;
-(void)sendPressBegan:(NSInteger)arg0 ;
-(void)sendPressEnded:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif