// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCNINTENDOFUSEDJOYCONHAPTICDRIVER_H
#define _GCNINTENDOFUSEDJOYCONHAPTICDRIVER_H

@protocol _GCDriverClientHapticInterface, _GCDriverClientInterface;

#import <Foundation/Foundation.h>


@interface _GCNintendoFusedJoyConHapticDriver : NSObject <_GCDriverClientHapticInterface>

 {
    id<_GCDriverClientInterface> *_leftDriver;
    id<_GCDriverClientInterface> *_rightDriver;
}




-(id)getDriver:(NSUInteger)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)enableHaptics;
-(void)enqueueTransient:(id)arg0 hapticMotor:(NSUInteger)arg1 ;
-(void)setHapticMotor:(NSUInteger)arg0 frequency:(float)arg1 amplitude:(float)arg2 ;


@end


#endif