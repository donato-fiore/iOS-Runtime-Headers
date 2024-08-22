// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MGWRAPPER_H
#define MGWRAPPER_H


#import <Foundation/Foundation.h>


@interface MGWrapper : NSObject



+(id)sharedMGWrapper;
-(BOOL)MGIsDeviceOneOfType:(NSInteger)arg0 ;
-(BOOL)MGIsDeviceOneOfTypes:(id)arg0 ;
-(BOOL)isDeviceIPad;
-(BOOL)isDeviceIPhone;
-(BOOL)isDeviceIPod;
-(BOOL)isHeySiriAlwaysOn;
-(BOOL)isPlusIPhone;
-(BOOL)isRunningOnSimulator;
-(BOOL)isSmallIPhone;
-(BOOL)isSmallestIPhone;
-(BOOL)supportsSideButtonActivation;
-(NSInteger)getSimulatorDevice;
-(id)deviceClass;
-(id)deviceClassiPad;
-(id)deviceClassiPhone;


@end


#endif