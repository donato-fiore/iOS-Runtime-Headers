// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19CONTACTLESSREADERUI21COARSEROTATIONMANAGER_H
#define _TTC19CONTACTLESSREADERUI21COARSEROTATIONMANAGER_H

@protocol BKSAccelerometerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC19ContactlessReaderUI21CoarseRotationManager : NSObject <BKSAccelerometerDelegate>

 {
    ? _orientation;
    ? orientations;
    ? accelerometer;
    ? deviceOrientation;
}




-(id)init;
-(void)accelerometer:(id)arg0 didAccelerateWithTimeStamp:(CGFloat)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 eventType:(int)arg5 ;
-(void)accelerometer:(id)arg0 didChangeDeviceOrientation:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif