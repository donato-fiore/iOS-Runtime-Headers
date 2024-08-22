// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARFACETRACKINGINTERNALTECHNIQUE_H
#define ARFACETRACKINGINTERNALTECHNIQUE_H

@protocol OS_dispatch_semaphore, OS_dispatch_queue;


#import "ARImageBasedTechnique.h"
#import "ARFaceTrackingManager.h"

@interface ARFaceTrackingInternalTechnique : ARImageBasedTechnique {
    NSObject<OS_dispatch_semaphore> *_detectionSemaphore;
    ARFaceTrackingManager *_faceTrackingManger;
    NSObject<OS_dispatch_queue> *_processDataQueue;
}


@property (readonly, nonatomic) NSInteger maximumNumberOfTrackedFaces; // ivar: _maximumNumberOfTrackedFaces


+(BOOL)isSupported;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)requiredTimeInterval;
-(NSInteger)captureBehavior;
-(NSUInteger)requiredSensorDataTypes;
-(id)init;
-(id)initWithMaximumNumberOfTrackedFaces:(NSInteger)arg0 options:(id)arg1 ;
-(id)initWithOptions:(id)arg0 ;
-(id)processData:(id)arg0 ;
-(id)resultDataClasses;
-(void)_enqueueImageForFaceTrackingNonBlocking:(id)arg0 ;
-(void)_processImageDataInBackgound:(id)arg0 ;


@end


#endif