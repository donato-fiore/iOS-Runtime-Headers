// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXCAMERAFPSTHERMALPOLICY_H
#define JFXCAMERAFPSTHERMALPOLICY_H

@class NSString;
@protocol JFXThermalPolicy, JFXVideoCameraThermalDelegate;

#import <Foundation/Foundation.h>


@interface JFXCameraFPSThermalPolicy : NSObject <JFXThermalPolicy, JFXVideoCameraThermalDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger priority;
@property (readonly) Class superclass;


-(void)cameraFPSForThermalLevel:(int)arg0 deviceType:(id)arg1 minRate:(*int)arg2 maxRate:(*int)arg3 ;


@end


#endif