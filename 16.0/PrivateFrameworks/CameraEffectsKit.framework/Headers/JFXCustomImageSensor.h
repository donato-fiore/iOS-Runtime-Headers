// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXCUSTOMIMAGESENSOR_H
#define JFXCUSTOMIMAGESENSOR_H

@class NSString;
@protocol ARSensor, ARSensorDelegate;

#import <Foundation/Foundation.h>


@interface JFXCustomImageSensor : NSObject <ARSensor>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARSensorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger powerUsage;
@property (readonly) Class superclass;


-(NSUInteger)providedDataTypes;
-(void)createImageDataFromFrameSet:(id)arg0 captureDevice:(id)arg1 captureSession:(id)arg2 trackedFacesMetadata:(id)arg3 faceObjectsMetadata:(id)arg4 ;
-(void)outputSensorData:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif