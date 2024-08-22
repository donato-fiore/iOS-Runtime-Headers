// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARIMAGEBASEDTECHNIQUE_H
#define ARIMAGEBASEDTECHNIQUE_H

@class NSMutableArray;
@protocol OS_dispatch_semaphore;


#import "ARTechnique.h"

@interface ARImageBasedTechnique : ARTechnique {
    NSMutableArray *_pendingResultData;
    NSMutableArray *_pendingFrameReferences;
    NSMutableArray *_pendingRequestContexts;
    NSObject<OS_dispatch_semaphore> *_pendingRequestsSemaphore;
    NSInteger _lastValidDeviceOrientation;
}




-(BOOL)context:(id)arg0 matchesFrameReference:(id)arg1 ;
-(NSInteger)getDeviceOrientationFromImageData:(id)arg0 ;
-(id)_fullDescription;
-(id)init;
-(id)processData:(id)arg0 ;
-(void)prepareResultData:(id)arg0 forContext:(id)arg1 ;
-(void)pushResultData:(id)arg0 forFrame:(struct __CVBuffer *)arg1 ;
-(void)pushResultData:(id)arg0 forFrameReference:(id)arg1 ;
-(void)pushResultData:(id)arg0 forTimestamp:(CGFloat)arg1 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;


@end


#endif