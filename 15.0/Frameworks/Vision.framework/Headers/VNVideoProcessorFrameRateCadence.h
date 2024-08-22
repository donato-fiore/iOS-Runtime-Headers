// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNVIDEOPROCESSORFRAMERATECADENCE_H
#define VNVIDEOPROCESSORFRAMERATECADENCE_H



#import "VNVideoProcessorCadence.h"

@interface VNVideoProcessorFrameRateCadence : VNVideoProcessorCadence

@property (readonly) NSInteger frameRate; // ivar: _frameRate


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithFrameRate:(NSInteger)arg0 ;
-(void)populateVCPVideoProcessorRequestConfiguration:(id)arg0 ;


@end


#endif